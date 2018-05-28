//#include<iostream>
//#include<fstream>
//#include<string>
//#include<set>
//#include<vector>
//#include<map>
//
//
//struct SCount{
//	int count = 0;
//	SCount(int count_):count(count_){}
//};
//
//using my_pair = std::pair<char, SCount>;
//
//int main() {
//	std::ifstream open("이상한 나라의 앨리스.txt");
//	char ch;
//	std::map<char,SCount>mymap;
//	for(int i='a';i<='z';++i)
//		mymap.insert(my_pair(i, 1));
//
//	for (int i = 'A'; i <= 'Z'; ++i)
//		mymap.insert(my_pair(i, 1));
//
//
//	while (open>>ch) {
//
//		if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')) {
//			auto iter = mymap.find(ch);
//			iter->second.count++;
//		}
//	}
//
//	for (auto iter = mymap.cbegin(); iter != mymap.cend(); ++iter) {
//		std::cout << static_cast<char>(iter->first) << " " << iter->second.count << std::endl;
//	}
//
//}