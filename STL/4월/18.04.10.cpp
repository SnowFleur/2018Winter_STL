//#include<iostream>
//#include<vector>
//#include<string>
//#include<array>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<random>
//#include"Model.h"
//using namespace std;
//
//
//
//class Player {
//private:
//	char id_[10];
//	//string id_;
//
//	int rank1;  //����� �����ϴµ� �ڷ��� ũ�� ����غ���
//	int rank2;
//	int s1_;
//	int s2_;
//public:
//	Player() {}
//	Player(string id, int s1, int s2) : s1_(s1), s2_(s2) {
//		strcpy (id_, id.c_str());
//	}
//	void show()const {
//		std::cout << id_ << ", ����1:" << s1_ << ", ����2:" << s2_ << std::endl;
//	}
//	void setRank1(int r) { rank1 = r; }
//	void setRank2(int r) { rank2 = r; }
//
//	int getS1()const { return s1_; }
//	int getS2()const { return s2_; }
//
//};
//
//int main() {
//
//	vector<Player> v;
//	v.reserve(1000);
//
//
//	//v�� Player�� 1000�� �����϶�
//	//s1 �����������������϶�
//	//�� ���ӿ� ���� ����� ����ؾ� �Ѵ�.
//	//���Ӻ��� ������������ �����Ͽ��� �Ѵ�.
//
//
//
//	random_device rd;
//	default_random_engine dre(rd()); //�̰͵� ����
//	//dre.seed(time(NULL));//�õ带 �� ������
//	uniform_int_distribution<>uid1(0, 30000000);
//	uniform_int_distribution<>uid2(0, 400000000);
//
//
//	for(int i=0;i<1000;++i)
//	v.emplace_back(string("����")+to_string(i), uid1(dre), uid2(dre));
//	/*int�� stirng���� �ٲ��ִ� to_string*/
//
//	/*
//	�޸𸮰� �پ��ִ� �ڷ����� �����ϴ�.!!!!!!!!!!!!!!!!!!!!!!!!!
//	[],array,vector,deque,string,
//	�޸𸮰� ����(contiguous)
//	*/
//	/*      ó��     ��    ���:ȣ�Ⱑ��Ÿ�������Ѵ�.
//	sort�� ������忡���� ������.
//	*/
//	int cnt=0;
//	sort(begin(v), end(v), [&cnt](const Player& a,const Player& b) {
//		cnt++;
//		return a.getS1() > b.getS1();
//
//	});
//	std::cout << "���Ŀ� �ʿ��� �񱳿����� ��"<<cnt<< std::endl;
//	/*
//	���ٰ� �Լ��� �ٸ��� 
//	()<---sort�� �������� ������ �����ұ�??
//	
//	�����ϴ�??? :No �Լ��ϳ��� ���°� �� ����
//
//	1.�������� ����:�ٷ� ���� ���ϴ��� ���δ�. �Լ��� �ϸ� �̰� �����Լ����� ã�ƺ�����
//	2.�Լ�ȣ��������(����,�ڵ�) �Լ�ȣ����� ������ ���ɼ��� ����.
//	2.�Ϲ��Լ����� �ſ������.
//	*/
//
//	int rank = 1;
//	for (Player& d : v) {
//		d.setRank1(rank++);
//	}
//	/*
//	������ ������� �����ؾ���
//	*/
//
//
//	for (const Player& d : v) {
//		d.show();
//	}
//
//	ofstream out("����1.dat", std::ios::binary);
//	// binary�� txt�� ���̴�??
//	out.write((const char*)v.data(),sizeof(Player)*1000);
//
//	ifstream in ("����1.dat", std::ios::binary);
//	
//	in.read((char*)v.data(), sizeof(Player) * 1000);
//	
//	std::cout << v.size() << std::endl;
//
//	for (const Player&d : v)
//		d.show();
//
//}



















#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

/*
ȣ�Ⱑ��Ÿ��(callable Type)
-�Լ�,����Լ�,�Լ�������,����,�Լ���ü,bind�� ������ ��ü(���� ������ ������),function���� ���簴ü ��� �Լ�ó�� ��밡��
-���ø� ������ ȣ�Ⱑ��Ÿ���̶� ���� ����
97��

*/

template<class T>
void f(T a) {
	a(); //���޵� a�� ȣ���Ͽ���. ���ڰ� ���� Ÿ�Ը� ����
}

int X() {
	std::cout << "���� �Լ� X��" << std::endl;
	return 0;
}

class Test {
private:
	int member = 0;
public:
	void operator()() {
		member++;
		std::cout << "���� Ŭ������ ����Լ���" << std::endl;
	}
};
/*
�Լ��� �ٱ������ �����ؾ� �Ҷ� �ʿ��ϴ�
�Լ��� ���¸� ������ �ִ�.
�Լ���ü
*/

int main() {


	//�θ� �� �ִ�.
	int n = 100;
	f(X);
	f(*X);
	f([]() {std::cout << "���� ���پ�" << std::endl; });

	Test t;
	f(t);


}