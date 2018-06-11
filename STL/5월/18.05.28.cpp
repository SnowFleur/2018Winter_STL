//#define	_CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include"Model.h"
//#include<string>
//#include<algorithm>
//#include<iterator>
//
//using namespace std;
//
///*
//ǥ�ؿ� �´� �����̳� 11��(string)�� �ݺ��ڸ� ������.
//*/
//
///*
//�ݺ��ڴ� �����̳ʰ� �����Ѵ�.
//*/
//
////template<class Iter>
////int my_distance(Iter beg, Iter end) {
////
////	return my_distance(beg, end,iterator_traits<Iter>::iterator_category());
////
////}
////
////template<class Iter>
////int my_distance(Iter beg, Iter end,random_access_iterator_tag) {
////	std::cout << "�����ݺ���" << std::endl;
////	return end - beg;
////
////}
////
////template<class Iter>
////int my_distance(Iter beg, Iter end, forward_iterator_tag) {
////	std::cout << "�����ݺ��ڰ� �ƴϱ⶧���� �ϳ��� ���� ���" << std::endl;
////
////	int cnt{ 0 };
////	while (beg != end) {
////		cnt++;
////		++beg;
////
////	}
////	return cnt;
////}
////
////
////int main() {
////
////	string s{ "Hello, STL!" };
////
////	
////		int* p = reinterpret_cast<int*>(1000);
////		int* q = reinterpret_cast<int*>(2000);
////	
////	std::cout << my_distance(s.begin(),s.end()) << std::endl;	
////}
//
//
//
//
//
//class myIter {
//private:
//	char* p{ nullptr };
//public:
//	myIter(char* p) :p{p} {}
//
//
//	/*�ݺ��ڰ� �ؾ� �� �⺻ ������ ���α׷��ؾ� ��*/
////	*;
////	== ;
////	= ;
////	++;
//// !=
//	char& operator*() { return *p; /*���⵿���� �ؾ��� �� ���ֱ⶧���� &�� ���δ�*/};
//	bool operator==(const myIter& rhs)const { return p == rhs.p; }
//	bool operator!=(const myIter& rhs)const { return p != rhs.p; }
//
//	myIter& operator=(const myIter& rhs) { p = rhs.p; return *this; }
//	myIter& operator++() {
//		++p;
//		return *this;
//	}
//	myIter operator++(int) {
//		myIter temp = *this;
//		++p;
//		return temp;
//	}
//
//
//
//
//};
//
//
//
//class myString{
//private:
//	int				len{0};
//	char*			p{ nullptr };
//public:
//	myString(const char*);
//	myString(const myString&);
//	myString& operator=(const myString&);
//	size_t size()const { return len; };
//	size_t length()const { return len; };
//
//	char* c_str()const { return p; }
//
//	myIter begin() {
//		return myIter(p);
//	};
//	myIter end() {
//		return myIter(p + len);
//	};
//
//	void  operator+=(const char*);
//	friend std::ostream& operator<<(std::ostream&, const myString&);
//	~myString();
//
//
//};
//myString::myString(const char* temp) {
//	len = strlen(temp);
//	p = new char[len + 1];
//	strcpy(p, temp);
//}
//
//myString::myString(const myString& temp) {
//	len = temp.len;
//	p = new char[len + 1];
//	strcpy(p, temp.p);
//	// *this=other;
//
//}
//myString::~myString() {
//	delete[]p;
//}
//
//myString& myString::operator=(const myString& other) {
//	delete[]p;
//	len = other.len;
//	p = new char[len + 1];
//	strcpy(p, other.p);
//	return *this;
//}
//void myString::operator+=(const char* other) {
//	
//	int num = len + strlen(other);
//	char* tp = new char[num + 1];
//
//	strcpy(tp, p);
//	strcat(tp, other);
//	len = num;
//	delete[]p;
//	p = tp;
//	//int temp_len = strlen(other);
//	//for (int i =0; i <= temp_len; ++i) {
//	//	this->p[this->len+i] = other[i];
//	//}
//
//	
//}
//
//
//std::ostream& operator<<(std::ostream& os, const myString& temp) {
//	os << temp.p;
//	return os;
//}
//
//
//template<class Iter,class Value>
//Iter myfind(Iter beg, Iter end, Value val) {
//
//	while (beg != end) {
//		if (*beg == val)
//			return beg;
//
//		++beg;
//	}
//
//}
//
//
//
//
//
//
//int main() {
//	/*���������� �ݺ��ڸ� �����Ѵ� �پ��ֱ⶧��      char*,char[]��ġ�ϴ� class  */
//	myString s{ "Hello, world!" };
//	myString s1 = s;
//	std::cout << s1 << std::endl;
//	s += "STL �� ����ִ�.";
//	std::cout << s << std::endl;
//
//
//	std::cout << s.length() << std::endl;
//	std::cout << s.size() << std::endl;	
//
//	char str[40];
//	strcpy(str, s.c_str());
//	std::cout << str << std::endl;
//
//
////	for (char d : s)      /*ǥ�� �����̳ʶ�� �� �ڵ忡 ������ ����� ��*/
////		std::cout << d << ' ';
////		std::cout << std::endl;
//
//
//	/*bom������ ?�� ����*/
//
//	auto iter = std::find(begin(s), end(s), 'w');
//
//	cout << typeid(iter).name() << std::endl;
//
//	if (iter != s.end()) {
//		std::cout << "ã�ҽ��ϴ�" << "____" << *iter << std::endl;;
//	}
//
//
//	iterator_traits<myIter>::iterator_category c;
//	std::cout<<typeid(c).name() << std::endl;
//
//
//}