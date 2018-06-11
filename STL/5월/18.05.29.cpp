#define	_CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Model.h"
#include<string>
#include<algorithm>
#include<iterator>

using namespace std;

/*
ǥ�� �ݺ��ڶ�� �ټ����� Ÿ���� �����ؾ� �Ѵ�.
����ڰ� iterator_traits<���ݺ���>::�ټ�����Ÿ���� �̿��Ͽ� ������ ������ �� �ִ�.
���� Ÿ����,�ʰ� ����Ű�� �ִ� Ÿ����?,������ 3���� ����Ʈ(������,���۷���)
*/

class myRevIter : public std::iterator<random_access_iterator_tag, char> {
private:
	char* p{ nullptr };
public:
	myRevIter(char* p) :p{ p } {}


	char& operator*() { return *(p - 1); }
	bool operator!=(const myRevIter& rhs) { return p != rhs.p; }

	myRevIter& operator++() {
		--p;
		return *this;
	}
	myRevIter operator++(int) {
		myRevIter temp = *this;
		--p;
		return temp;
	}

};

class myIter : public std::iterator<random_access_iterator_tag,char> {
private:
	char* p{ nullptr };
public:
	myIter(char* p) :p{ p } {}


	/*�ݺ��ڰ� �ؾ� �� �⺻ ������ ���α׷��ؾ� ��*/
	//	*;
	//	== ;
	//	= ;
	//	++;
	// !=
	char& operator*() { return *p; /*���⵿���� �ؾ��� �� ���ֱ⶧���� &�� ���δ�*/ };
	bool operator==(const myIter& rhs)const { return p == rhs.p; }
	bool operator!=(const myIter& rhs)const { return p != rhs.p; }

	myIter& operator=(const myIter& rhs) { p = rhs.p; return *this; }

	myIter& operator++() {
		++p;
		return *this;
	}
	myIter operator++(int) {
		myIter temp = *this;
		++p;
		return temp;
	}

	/*
	�����ݺ��ڰ� �����ϴ� �����
	*/
	int operator-(const myIter& rhs)const { return p - rhs.p; }
	bool operator<(const myIter& rhs)const { return p < rhs.p; }

	myIter operator-(int n)const { myIter t(p); t.p -= n;  return t; }
	myIter operator+(int n)const { myIter t(p); t.p += n;  return t; }



	myIter& operator--() {
		--p;
		return *this;
	}
	myIter operator--(int) {
		myIter temp = *this;
		--p;
		return temp;
	}


};


class myString {
private:
	int				len{ 0 };
	char*			p{ nullptr };
public:
	myString(const char*);
	myString(const myString&);
	myString& operator=(const myString&);
	size_t size()const { return len; };
	size_t length()const { return len; };

	char* c_str()const { return p; }

	myIter begin() {return myIter(p);}
	myIter end() {return myIter(p + len);}

	/*�ٸ��ݺ��ڸ� ����Ѵ�.*/
	myRevIter rbegin() { return myRevIter(p + len); }
	myRevIter rend() { return myRevIter(p); }



	void  operator+=(const char*);
	friend std::ostream& operator<<(std::ostream&, const myString&);
	~myString();


};
myString::myString(const char* temp) {
	len = strlen(temp);
	p = new char[len + 1];
	strcpy(p, temp);
}

myString::myString(const myString& temp) {
	len = temp.len;
	p = new char[len + 1];
	strcpy(p, temp.p);
	// *this=other;

}
myString::~myString() {
	delete[]p;
}

myString& myString::operator=(const myString& other) {
	delete[]p;
	len = other.len;
	p = new char[len + 1];
	strcpy(p, other.p);
	return *this;
}
void myString::operator+=(const char* other) {

	int num = len + strlen(other);
	char* tp = new char[num + 1];

	strcpy(tp, p);
	strcat(tp, other);
	len = num;
	delete[]p;
	p = tp;
	//int temp_len = strlen(other);
	//for (int i =0; i <= temp_len; ++i) {
	//	this->p[this->len+i] = other[i];
	//}


}


std::ostream& operator<<(std::ostream& os, const myString& temp) {
	os << temp.p;
	return os;
}


/*
�ݺ��ڶ�: �����̳ʿ� ���谡 �ִ� Ŭ����
����:����-�� �����ڸ� �������� �ʰų�:������ ����.*/

//int main() {
//	myString s{ "Hello, world!" };  
//	myString s1 = s;
//	
//	sort(s.begin(), s.end());
//
//	cout << s << std::endl;
//
//	for (auto p = s1.rbegin(); p != s1.rend(); ++p)
//		cout << *p << std::endl;
//
//}





/********************************************************
********************************************************
*******************�˰���******************************
********************************************************
********************************************************
********************************************************
*/

template<class Initer, class Call>
bool my_all_of(Initer begin, Initer end, Call f) {


	if (begin == end)
		return true;

	while (begin != end) {

		if (f(*begin) == false)
			return false;
		++begin;
	}
}


int main() {
	int a[]{ 2,4,6,8,10 };

	bool result = my_all_of(std::begin(a), std::end(a), [](int n) {
		return !(n & 1);
	});

	if (result) {
		std::cout << "���� ¦���Դϴ�." << std::endl;
	}


}
