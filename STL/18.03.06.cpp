#define _CRT_SECURE_NO_WARNINGS
/*
복습
선언과 정의의 차이란(?)
선언: 자기가 원하는 곳에 자기가 원하는 만큼 사용할 수 있는것 
	  갯수에 제한이 없다.
정의: 한번만 정의 하는것
*/







/*템플릿 적용 전*/
//#include<iostream>
//#include<string>
///*
//C++에서 자료형은 무한하다.
//기능은 같은데 전달되는 인자의 자료형만 다르다는 이유로
//매번 이와같은 함수를 선언하고 정의한다면 아무도 C++ 안쓸겁니다.
//
//반복되는 작업을 컴퓨터에게 맡겨보자
//------> Template
//
//*/
//void change(int&, int&);
//void change(std::string&,std::string&);
//int main() {
//	/*
//	1. change 함수는 어디에 쓰일까?
//	   A: 데이터 정렬을 할 때 사용한다.
//	2. change 함수는 몇 개를 만들면 될까? 
//	   A: 무한개 class,struct 등 무한히 만들 수 있기 때문
//	*/
//
//	int a(10), b(20);
//	change(a, b);
//	std::cout << a << "," << b << std::endl;
//
//	{
//		std::string a{ "world!" }, b{ "Hello," };
//		change(a, b);
//		std::cout << a << "," << b << std::endl;
//	}
//}
//void change(int& x, int &y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void change(std::string& x, std::string& y) {
//	std::string temp = x;
//	x = y;
//	y = temp;
//}




/*템플릿 적용*/
/* 템플릿 오해 실행시간이 오래걸릴 것이다. X*/
//#include<iostream>
//#include<string>
//template<class T>
//void change(T&, T&);  /*함수 템플릿*/
//int main() {
//	int a(10), b(20);
//	/*함수는 자료형을 생략할 수 있기때문에 <>를 지우지만 class는 불가능하다.
//	change<int>==change 함수는 컴파일러가 추론이 가능함*/
//	change<int>(a, b);
//	std::cout << a << "," << b << std::endl;
//	{
//		std::string a{ "world!" }, b{ "Hello," };
//		change(a, b);
//		std::cout << a << "," << b << std::endl;
//	}
//}
//template<class T>
//void change(T& x, T&y) {
//	T temp = x;
//	x = y;
//	y = temp;
//}




/*문제*/

//
//#include<iostream>
//#include<string>
//
//class Dog {
//private:
//	char* name;
//	int age;
//public:
//	Dog(char*, int);
//	~Dog();
//	friend  std::ostream& operator<<(std::ostream& os, const Dog& );
////	Dog& operator=(Dog&);
//};
//Dog::Dog(char* name_, int age_) :age(age_) {
//	int len = strlen(name_);
//	name = new char(len+1);
//	strcpy(name, name_);
//}
//Dog::~Dog(){
//	delete name;
//}
//
//std::ostream& operator<<(std::ostream& os, const Dog& p){
//	os << "[" << p.name << ", " << p.age << "]" << std::endl;
//	return os;
//}
//
////Dog& Dog::operator=(Dog& ref){
////	delete[]name;
////	name = new char[10];
////	strcpy(name, ref.name);
////	age = ref.age;
////	return *this;
////}
//
//
//
//template<class T>
//void change(T&, T&);  /*함수 템플릿*/
//
//int main() {
//	Dog a{ "순실이",5 }, b{ "시바",3 };
//	std::swap(a, b);
//	std::cout << a;  /*시바   3살*/
//	std::cout << b;  /*순실이 5살*/
//}
//
//template<class T>
//void change(T& x, T&y) {
//	T temp = x;
//	x = y;
//	y = temp;
//}










#include<iostream>
#include<string>

class Dog {
private:
	char* name;
	int age;
public:
	Dog(char*, int);
	int getAge()const { return age; }
	~Dog();
};
Dog::Dog(char* name_, int age_) :age(age_) {
	int len = strlen(name_);
	name = new char(len + 1);
	strcpy(name, name_);
}
Dog::~Dog() {
	delete name;
}
int cmp(const void* a, const void* b) {
	/*void 포인터는 형변환 을 해줘야함*/
	Dog* x = (Dog*)a;
	Dog* y = (Dog*)b;
	return x->getAge() < y->getAge();
}

template<class T>
void change(T&, T&);  /*함수 템플릿*/

int main() {
	int num[10] = { 1,3,5,7,9,2,4,6,8,10 };
	qsort(num, 10, sizeof(int), [=](int a, int b)->int {return a > b; })

		/* [캡처] (받을인자)->  리턴타입 {함수} (넘길인자)  */






















	
	
	//Dog dogs[5]{ {"순실이",5},{"시바",3},{"너",10},{"진돌이",3},{"댕댕이",20}};
	///*qsort는 어떤 자료형이더라도 정렬하는 함수(Generic) 특정 자료형에 묶여있지 않다,
 // 	qsort(무엇을 ? , 몇개를 ? , 하나의크기는 ? , 어떻게 ? : 함수를 전달해줘야한다. 함수포인터)
	//나이 오름차순으로 정렬하라
	//*/
	////qsort(dogs, 5, sizeof(Dog), [](const Dog&a, const Dog& b) {
	////	return ()->int a.getAge() < b.getAge();
	////});
	//qsort(dogs, 5, sizeof(Dog), cmp);

	//for (const Dog& d : dogs) {
	//	std::cout << d;
	//}
	

}

template<class T>
void change(T& x, T&y) {
	T temp = x;
	x = y;
	y = temp;
}
