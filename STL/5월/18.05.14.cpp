//#include<iostream>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<functional>
//using namespace std;
//
//
//
///*
//1번 출현 빈도순 정렬
//*/
//
////int main() {
////
////	/*이 파일은 (UTF-8) 형식의 파일로 BOM(Byte order mark) 3바이트가 기록되어있다.
////	3바이트를 무시해야 진짜 텍스트를 읽을 수 있다.
////	
////	읽은 파일의 BOM을 지우고 기록하기를 하면 순수TEXT모드로 사용가능??
////	*/
////	string filename = "이상한 나라의 앨리스.txt";
////
////	ifstream in(filename);
////
////	if (!in) {
////		std::cout << filename << "을 열 수 없습니다." << std::endl;
////		return 0;
////	}
////
////	char c;
////
////	/*BOM을 무시한다.*/
////	in >> c >> c >> c; 
////
////	map<char, int>cimap;
////	/*유효할때까지*/
////	while(in>>c) {
////		/*연관배열처럼 이용할 수 있다.*/
////		cimap[c]++;
////
////		/*c를가지고 있는 레퍼런스를 리턴해준다.
////		  그 값을 더 해준다.*/
////		cimap.operator[](c)++;
////
////		}
////
////	/*철자의 출현 빈도기준으로 정렬
////	벡터에 옮기거나 혹은 맵을새로 만드는게 좋음
////	맵을 만드는게 더 좋음
////	
////	1.객체의생성
////	2.객체의복사
////	3.객체의역할
////	*/
////	multimap<int, char,greater<int>>icmap;
////
////	for (const auto& d : cimap) {
////		/*객체를 컨테이너가 만들어라 이 두개의 인자를 가지고*/
////		icmap.emplace(d.second, d.first);
////	}
////
////	/*출력해보자*/
////	/*auto& auto는 자료형을 유추한다.   */
////	for (const pair<int, char>&d : icmap) 
////		std::cout << "[" << d.second << "] - " << d.first << endl;
////
////
////		/*c=in.get()이렇게 사용하면 그대로 읽어온다. 공백포함*/
////		/*  in>>c   char형태로 읽어오기 때문에 공백을 무시한다.*/
////
////
////}
//
////
/////*
////2번
////*/
////
////int main() {
////
////	/*이 파일은 (UTF-8) 형식의 파일로 BOM(Byte order mark) 3바이트가 기록되어있다.
////	3바이트를 무시해야 진짜 텍스트를 읽을 수 있다.
////
////	읽은 파일의 BOM을 지우고 기록하기를 하면 순수TEXT모드로 사용가능??
////	*/
////	string filename = "이상한 나라의 앨리스.txt";
////
////	ifstream in(filename);
////
////	if (!in) {
////		std::cout << filename << "을 열 수 없습니다." << std::endl;
////		return 0;
////	}
////
////	string c;
////
////	/*BOM을 무시한다.*/
////	in >> c >> c >> c;
////
////	map<string, int>simap;
////	/*유효할때까지*/
////	while (in >> c) {
////		simap[c]++;
////	}
////	in.close();
////
////
////	multimap<int, string, greater<int>>ismap;
////
////	for (const auto& d : simap) {
////		/*객체를 컨테이너가 만들어라 이 두개의 인자를 가지고*/
////		ismap.emplace(d.second, d.first);
////	}
////	/*앞에서 100개만*/
////	
////	 auto p = ismap.cbegin();
////	for (int i = 0; i < 100; ++i) {
////		std::cout << "[" << p->second << "] - " << p->first << endl;
////		++p;
////	}
////
////}
//
//
//
//
//
//
//
///*
//찾는 단어가 몇 번 출현하는지 알려주세요
//*/
////
////int main() {
////
////	/*이 파일은 (UTF-8) 형식의 파일로 BOM(Byte order mark) 3바이트가 기록되어있다.
////	3바이트를 무시해야 진짜 텍스트를 읽을 수 있다.
////
////	읽은 파일의 BOM을 지우고 기록하기를 하면 순수TEXT모드로 사용가능??
////	*/
////	string filename = "이상한 나라의 앨리스.txt";
////
////	ifstream in(filename);
////
////	if (!in) {
////		std::cout << filename << "을 열 수 없습니다." << std::endl;
////		return 0;
////	}
////
////	string c;
////
////	/*BOM을 무시한다.*/
////	in >> c >> c >> c;
////
////	map<string, int>simap;
////	/*유효할때까지*/
////	while (in >> c) {
////		simap[c]++;
////	}
////	in.close();
////
////	string word;
////	std::cout << "찾을시 단어는요?";
////	cin >> word;
////
////
////
////	/*전역함수 find를 사용하면 왜 안좋은가. 맵은 항상 정렬을 하고 있고 누군가가 검색을 하려고 하면
////	  순간적으로 찾아준다. log시간 하나씩 반복자를 넘길 이유가 없다.
////	
////	맵은 시간을 희생을한다. 빨리 검색하기 위해 입력하는 시간을 희생한다.
////	*/
////
////	/*찾고자하는 단어가 key값이다.*/
////	const auto iter=simap.find(word);
////	multimap<int, string, greater<int>>ismap;
////
////	if(iter!=simap.end())
////	cout << word << "는";
////	else
////	cout << word << "는 이상한 나라의 앨리스에 없어요";
////
////}
//
//
//
//
///*
//3번
//*/
//
//int main() {
//
//	/*이 파일은 (UTF-8) 형식의 파일로 BOM(Byte order mark) 3바이트가 기록되어있다.
//	3바이트를 무시해야 진짜 텍스트를 읽을 수 있다.
//
//	읽은 파일의 BOM을 지우고 기록하기를 하면 순수TEXT모드로 사용가능??
//	*/
//	string filename = "이상한 나라의 앨리스.txt";
//
//	ifstream in(filename);
//
//	if (!in) {
//		std::cout << filename << "을 열 수 없습니다." << std::endl;
//		return 0;
//	}
//
//	string c;
//
//	/*BOM을 무시한다.*/
//	in >> c >> c >> c;
//
//	map<string, int>simap;
//	/*유효할때까지*/
//	while (in >> c) {
//		simap[c]++;
//	}
//	in.close();
//
//
//	multimap<int, string, greater<int>>ismap;
//
//	/*가장 길이가 긴 단어는? (단어는 공백으로 분리됨)*/
//
//	/*
//	STL에서 가능하면(네가 똑똑하다면) for loop를 사용하지 않는다.(대신할 알고리즘이 있는경우에 해당하는말)
//	*/
//	auto p=max_element(simap.cbegin(), simap.cend(), [](const auto& a,const auto& b) {
//	
//		return a.first.lenghth() < b.first.lenghth();
//	});
//	if (p != simap.cend()) {
//		std::cout<<"가장 긴 단어는"<< p->first << std::endl;
//	}
//
//}
//
