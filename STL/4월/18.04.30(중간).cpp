//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<deque>
//#include<list>
//#include<string>
//#include<algorithm>
//using namespace std;
///*�߰����*/
///*
//
//������ ����϶�°� �ִ��� �� ���� ��°� ���� !!! (�������� �о����)
//���簡 �ִ��� �������� ����
//
//*/
//class Player {
//private:
//	string name;
//	int score;
//public:
//	Player(const Player& otehr) {
//		std::cout << "����" << std::endl;
//	}
//	int getScore()const {}
//	string getName()const {};
//	string show()const;
//
//};
//void setupData();
///* 1.    */
//int main() {
//	setupData();
//	
//	vector<Player>v;
//	v.reserve(1000000);
//	ifstream in("2018 STL �߰�����.txt");
//	string name;
//	int n;
//	while (in >> name >> n) {
//		v.emplace_back(name, n);
//	/*�ѹ��� ��������� �������ʰ� ��ü�� ���� �� �ִ�. (Player(name,n))�̷��� ���صε�
//	  ������ ���ڸ� �־ �������� ���縦 ���ش�.
//	*/
//	}
//}
///* 2.    */
//int main() {
//	vector<Player>v;
//	long long sum = 0;
//	for ( const Player& d : v)  //const ��&�� �ֱ� const�� Ȯ���غ����ҵ�
//		sum += d.getScore();
//		
//	for (int i = 0; i < v.size(); ++i)
//		sum+=v[i].getScore();
//	std::cout << "��հ�:" << (double)sum / v.size() << std::endl;
// 
//}
///* 3.    */
//int main() {
//	/*
//	deque�� ���� rserve�� �� ����
//	���Ϳ� ��������:������������ ������ �� �ڸ��� �� �ڸ��� �����ϴ� �ӵ��� ������
//
//	���������� �����ϸ� �����ϱ� ������ ��������̴��� ���������
//	����Ʈ�� �޸𸮰� �� ��������
//	*/
//}
///* 4.    */
//int main() {
//	/*
//	������ ���ʿ䰡 ���� �ѹ��� ������� Ł��� �Ǵµ� ���� �����ϰ� ó������ ����Ű�°� ��ȿ�� 
//	*/
//	vector<Player> v;
//
//	Player& p = v[0];  //���۷����� ����ϸ� �ȵ� ���� �ٲٰ� �ȴ� �����غ���
//	for (const Player& d : v) {
//		if (d.getScore() > p.getScore())
//			p = d;
//	}
//	p.show();
//	/*
//	max������Ʈ ��°��� ����
//	*/
//
//}
///* 5.    */
//int main() {
//	vector<Player> v;
//
//	std::sort(v.begin(), v.end(), []() {});
//
//	auto f=std::find_if(v.begin(), v.end(), [](const Player& p) {
//		return p.getName() == "masterPlayer";
//	});
//	if (f != v.end()) {
//		std::cout << "���:" << distance(v.begin(), f) + 1 << "��";
//	}
//	else{
//		std::cout << "���������� ���ٰ� �����ض�" << std::endl;
//	}
//
//}
///* 6.    */
//int main() {
//
//
//}
