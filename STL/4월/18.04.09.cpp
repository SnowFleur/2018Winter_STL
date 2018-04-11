#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<string>
#include<algorithm>
#include<random>
#include"Model.h"
using namespace std;

/*
�����̳��� ��� ����
�ҽ�.cpp�� ������ �ܾ������ �о� ���Ϳ� ��������.

*/
//
//int main() {
//	vector<string> v;
//	ifstream in("18.04.03.cpp");
//	string s;
//	while (in >> s)
//		v.push_back(s);
//	/*��ȿ�ҋ� ���� �����鼭 v���;ȿ� �о�� s���� �ִ´�.*/
//	auto beg = v.rbegin();   //cbegin �б�����   rbegin �Ųٷ� crbegin �Ųٷ�(�б�����)
//	auto end = v.rend();
//
//	for (auto i = beg; i < end; ++i) {
//		string s = *i;
//		for (auto j = s.rbegin(); j < s.rend(); ++j)
//			std::cout << *j << std::endl;
//		/*
//		�Ųٷ� ����
//		�Ųٷζ� begin���� �����ؾ���
//		*/
//		std::cout << *i << std::endl;
//	}
//	/*��������� �߸�*/
//}







/*
�����̳��� ��� ����
������ ���� access�� ����.

*/
//int main() {
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };  //�����̳� 
//	/* v�� ���� 2��� ���� �� ����� ������*/
//
//	for (auto iter = v.begin(); iter != v.end(); ++iter)
//		(*iter) *= 2;
//	/*�����Լ� begin(v)�� �θ��°�� �� ����
//	i++�� ��������ڰ� ����� ������ ++i�� �ض�
//	*/
//
//	/*�б⸸ �Ҷ����� cbegin�� ����ϴ°��� ���� ��Ȯ��*/
//	for (auto iter = v.cbegin(); iter != v.cend(); ++iter)
//		std::cout << (*iter) << std::endl;
//
//
//
//	/*
//	�ٸ���� 1
//	auto�� �ڵ��бⰡ ������ ���� �ȵ�
//	*/
//	for (int& d : v)
//		d = d * 2;
//	for (int d : v)  //�б�����
//		std::cout << d << std::endl;
//
//	/*
//	�ٸ���� 2
//	*/
//	for (int i = 0; i < v.size(); ++i)
//		v[i] = v[i] * 2; //���� �� ��� ����(�پ��ִ� ��鸸 ����)
//	    //v.operator[](i);
//	for (int i = 0; i < v.size(); ++i)
//		std::cout << v[i] << std::endl;
//
//
//}





/*
4�� ���������̳�(Sequence Container)
array,vector,deque,list,forward_list
*/


/*
array:�����ϰ� �����Ͻÿ� ũ�Ⱑ �����Ǿ�� �ϴ� �����̳� (����Ʈ �迭)
���� �迭�� ������: �迭�� �̸��� �޸� ���۹����̰�
���� �̸��� ����Ͽ� access����(��踦 ����� ��å�� ����.)
*/

//
//int main() {
//	array<int,5>a{ 1,2,3,4,5 };
//	int n;
//
//	while (true) {
//		std::cout << "���° ���� ����ұ��?";
//		cin >> n;
//
//
//
//		std::cout << "���Ͻô� ���Դϴ�." << a[n] << std::endl;
//
//		try{
//			std::cout << "���Ͻô� ���Դϴ�." << a.at[n] << std::endl;
//			/*���ܸ� ������ �ڵ�*/
//
//		}
//		catch (const std::exception& e){
//			std::cout << e.what() << std::endl;
//			std::cout << "�߸��� ���Դϴ�." << std::endl;
//			break;
//
//		}	
//	}
//
//	/*STL�� �ӵ��켱�� �ڵ带 ����� ������ ���ܸ� �Ⱥ�
//	std::cout<<a[-1]<<std::endl;
//	�̷��� �ڵ尡 �����̱��ѵ� ������ ���ܸ� �˻��ϸ� �������� ������ ���� ����
//	*/
//
//}
//


//int main() {
//	array<Model, 5>a{1,22,333,4444,55555}; /*�����Ͻ� �����Ǳ� ������ ���ؿ� �����*/
//	for (const Model& d : a)
//		d.show();
//}


/*
vector:dynamic array ����� ũ�Ⱑ ���Ѵ�.
vector.size():��� �ִ� ������ ����
vector.capacity():���Ҹ� �� �� ���� �� �ִ�������Ÿ���� ��,�뷮
vector.data():Free Store�� Ȯ���� �޸��� ���۹���

*/

//int main() {
//	vector<int >v{1,2,3,4,5};
//	v.reserve(1000);
//	/*
//	v.push_back(i) �ϸ鼭 capacity�� �ٲ𶧸��� �Ʒ� ������ ����Ͻÿ�
//	*/
//
//	 int olddata = v.capacity();
//
//	for (int i = 0; i < 1000; ++i) {
//		v.push_back(i);
//
//		if (olddata != v.capacity()) {
//			std::cout << "������ ����" << v.size() << std::endl;
//			std::cout << "���� �� �ִ� ����" << v.capacity() << std::endl;
//			std::cout << "Ȯ���� �޸𸮹���:" << v.data() << std::endl;
//			olddata = v.capacity();
//		}
//
//	}
////	*(v.data()) = 100;
//
//
//	//data()���̿��ؼ� v[0]�� ���� 100���� ����
////	std::cout << v[0] << std::endl;
//
//}


//
//int main() {
//	vector<Model >v;
//	v.reserve(100);
//
////	v.push_back(Model(333));
//
////	v.push_back(333);
///*
//�����Ϸ��� 333�� �𵨷� �����.
//*/
//
////	v.emplace_back(333);
//	/*������� ��ü�� �� ����� ���Ͱ� ������ �߰��� �� �ֵ��� �ϴ� �Լ�*/
//
//	v.emplace_back();
//
//}



class Player {
private:
	string id_;
	int s1_;
	int s2_;
public:
	Player(string id, int s1, int s2) :id_(id), s1_(s1), s2_(s2) {}
};

int main() {

	vector<Player> v;
	v.reserve(1000);

	//v�� Player�� 1000�� �����϶�
	//s1 �����������������϶�

	v.emplace_back("test",100,300);


}