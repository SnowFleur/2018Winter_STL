/*
���������̳�
set             -Ű ���� ���� ����
������ ������< (less ������)
map             -Ű�� ����� ����, Ű�� ������ ����
unordered_set   -Ű���� �ؽ��Ͽ� ����
unordered_map   -Ű�� ����� ����,Ű���� �ؽ��Ͽ� ����� ������ ���� ����
*/
#include<iostream>
#include<set>
#include"Model.h"
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>
#include<random>
#include<fstream>
#include<numeric>
#include<map>
using namespace std;


//int main() {
//	//Ŭ���� ���� size������ ���ĵǵ��� ���α׷��϶�
//	//int,*,char,[]-->POD(plain oldData)type
//	//POD�� ������<�� ���ǵǾ� �־� ������ ���� �� �ִ�.
//	//����ڰ� ������ �ڷḦ set�� �������� ���ϴ� ����� �˷�����Ѵ�.
//	//-->������ <�� �����ϸ� �ȴٴ� ���̴�.
//
//	/*������ explicit�� �ְ� ����*/
//	//set<Model>s{1,3, 5, 7, 9, 2, 4, 6, 8, 10};
//	set<Model>s;
//	/*���⼭ ���簡 ���� �� ������?? 
//	emplace�� ����Ѵ�*/
//	s.emplace(1);
//	s.emplace(3);
//	s.emplace(5);
//	s.emplace(6);
//	s.emplace(7);
//	s.emplace(2);
//	s.emplace(8);
//	s.emplace(9);
//	s.emplace(Model(6));
//
//
//	std::cout << "--------------------------------------" << std::endl;
//	for (const Model& d : s) {
//		Model& a = const_cast<Model&>(d);
//		
//
//		d.show();
//	}
//	/*
//	Ű�� �б⸸ �ؾ��� �ջ��ų �� ���⶧���� const�� �ٿ����Ѵ�.
//	*/
//	std::cout << "--------------------------------------" << std::endl;
//
//}


//
//
////Ű���忡�� �ܾ �Է¹޾� ������ �� ����϶�.
//int main() {
//	
//	/*�Լ���.......................................*/
//	/*vector<string>v(istream_iterator<string>(cin),istream_iterator<string>());
//	vector<string>v(istream_iterator<string>(cin), istream_iterator<string>());
//	vector<string>v(istream_iterator<string>(cin), istream_iterator<string>());
//	vector<string>v(istream_iterator<string>(cin), istream_iterator<string>());
//	vector<string>v(istream_iterator<string>(cin), istream_iterator<string>());
//	vector<string>v(istream_iterator<string>(cin), istream_iterator<string>());
//	vector<string>v(istream_iterator<string>(cin), istream_iterator<string>());
//	vector<string>v(istream_iterator<string>(cin), istream_iterator<string>());*/
//	multiset<string>v({ istream_iterator<string>(cin), istream_iterator<string>() });
//
//	//sort(v.begin(), v.end());
//	
//	
//	for (const string& d : v)
//		cout << d << "\t";
//	std::cout << endl;
//
//
//
//}
//
//





///*�ҽ������� �ܾ�� �о� ���� �� ����϶�*/
//int main() {
//
//
//	ifstream in("�ҽ�.cpp");
//	multiset<char>v({ istream_iterator<char>(in), istream_iterator<char>() });
//
//	for (const char& s : v)
//		std::cout << s << std::endl;
//
//}
//


//int main() {
//	vector<int>v(100000);
//	iota(v.begin(), v.end(), 1);
//	//������ ������ ��� ���� �ٲ��.
//
//	set<int>s;
//
//	default_random_engine dre;
//	uniform_int_distribution<>uid(0, 10000 - 1);
//
//	while (s.size() != 10000)
//		s.insert(uid(dre));
//
//
//	auto p = s.begin();
//	for (int i = 0; i < 10000; ++i)
//		v[*p++] = dre();
//
//	for (int i = 0; i < 1000; ++i)
//		std::cout << v[i] << "\n" << "\n";
//	std::cout << endl;
//
//
//
//
//}
//








//����ο� �����¼�ġ�� ������ ����� ����
// "����Ÿ��",0;
// "���뽺",9999;
// "�տ���",44444;
//int main() {
//
//	map<string, int>m;
//
//	m.insert(std::pair<string,int>("����Ÿ��", 0));
//	m.insert(std::make_pair("���뽺", 9999));
//	m.emplace("����", 444444);
//
//	for (auto iter = m.begin(); iter != m.end(); ++iter)
//		std::cout << iter->first<<" "<< iter->second << std::endl;
//
//	//? "���뽺"�� ã�� �ʹ�.
//
//	auto iter=m.find("���뽺");
//
//	if(iter!=m.end())
//		cout << iter->first << " " << iter->second << std::endl;
//
//	else {
//		std::cout << "�����" << std::endl;
//	}
//	/*
//	���� �����迭�� ����� �� �ִ�.
//	*/
//
//	int a[]{ 1,2,3 };
//	a["���뽺"];
//
//}
//

int main() {
	vector<char> v(100000);
	default_random_engine dre;
	uniform_int_distribution<>ui('a', 'z');
	map<char, int>m;
	for (char& d : v)
		m[d]++;
	for(auto& d:m)
		cout<<"["<<d.first<>"]"<<d.second]<<
}