/*
연관컨테이너
set             -키 값에 따라 정렬
정렬의 기준은< (less 연산자)
map             -키와 밸류로 구성, 키가 정렬의 기준
unordered_set   -키값을 해싱하여 저장
unordered_map   -키와 밸류로 구성,키값을 해싱하여 밸류를 저장할 곳을 지정
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
//	//클래스 모델이 size순으로 정렬되도록 프로그램하라
//	//int,*,char,[]-->POD(plain oldData)type
//	//POD는 연산자<가 정의되어 있어 언제나 비교할 수 있다.
//	//사용자가 정의한 자료를 set에 넣으려면 비교하는 방법을 알려줘야한다.
//	//-->연산자 <를 정의하면 된다는 말이다.
//
//	/*생성자 explicit가 있고 없고*/
//	//set<Model>s{1,3, 5, 7, 9, 2, 4, 6, 8, 10};
//	set<Model>s;
//	/*여기서 복사가 없을 수 없을까?? 
//	emplace를 사용한다*/
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
//	키는 읽기만 해야함 손상시킬 수 없기때문에 const를 붙여야한다.
//	*/
//	std::cout << "--------------------------------------" << std::endl;
//
//}


//
//
////키보드에서 단어를 입력받아 정렬한 후 출력하라.
//int main() {
//	
//	/*함수임.......................................*/
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





///*소스파일을 단어로 읽어 정렬 후 출력하라*/
//int main() {
//
//
//	ifstream in("소스.cpp");
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
//	//임의의 만개를 골라 값을 바꿔라.
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








//히어로와 전투력수치를 맵으로 만들어 보자
// "사이타마",0;
// "제노스",9999;
// "손오공",44444;
//int main() {
//
//	map<string, int>m;
//
//	m.insert(std::pair<string,int>("사이타마", 0));
//	m.insert(std::make_pair("제노스", 9999));
//	m.emplace("나미", 444444);
//
//	for (auto iter = m.begin(); iter != m.end(); ++iter)
//		std::cout << iter->first<<" "<< iter->second << std::endl;
//
//	//? "제노스"를 찾고 싶다.
//
//	auto iter=m.find("제노스");
//
//	if(iter!=m.end())
//		cout << iter->first << " " << iter->second << std::endl;
//
//	else {
//		std::cout << "없어욤" << std::endl;
//	}
//	/*
//	맵은 연관배열로 사용할 수 있다.
//	*/
//
//	int a[]{ 1,2,3 };
//	a["제노스"];
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