#define _CRT_SECURE_NO_WARNINGS

/* 복습*/

//
//#include<iostream>
//#include<string>
///*퀵소트가 자료형을 알 수가 없음 뭔지모르는 자료형을 넘겨주는 대표적인게 void형 포인터 */
//int fp(const void* a, const void* b) {
//	/*void 의미 - 이 자료를 사용하는 사람이 마음대로 자료형을 반환하여 사용하라는 뜻*/
//	int*p=(int*)a;
//	/*  (int*)(const void*)a
//	1. 자료형이 바뀌었음
//	2. const 속성을 날렸음
//	--위험하다---
//	C++에서는 이것이 정석이다.
//	const int* p=static_cast<const int*>(a);
//	*/
//	const int* q = static_cast<const int*>(b);
//	if (*p < *q)
//		return -1;
//	else if (*p == *q)
//		return 0;
//	else
//		return 1;
//	/* return *p-*q */
//}
//int main() {
//	int num[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	qsort(num, 10, sizeof(int), fp);
//	/*시작 번지부터 4바이트씩 건나뛰면 다음꺼 ...다음꺼...다음꺼 라는걸 알 수 있음.	
//	*/
//	for (int i : num)
//		std::cout << i << " ";
//	std::cout<<std::endl;
//}












/*
람다 사용
*/

//#include<iostream>
//#include<string>
///*퀵소트가 자료형을 알 수가 없음 뭔지모르는 자료형을 넘겨주는 대표적인게 void형 포인터 */
//int fp(const void* a, const void* b) {
//	/*void 의미 - 이 자료를 사용하는 사람이 마음대로 자료형을 반환하여 사용하라는 뜻*/
//	int*p = (int*)a;
//	/*  (int*)(const void*)a
//	1. 자료형이 바뀌었음
//	2. const 속성을 날렸음
//	--위험하다---
//	C++에서는 이것이 정석이다.
//	const int* p=static_cast<const int*>(a);
//	*/
//	const int* q = static_cast<const int*>(b);
//	if (*p < *q)
//		return -1;
//	else if (*p == *q)
//		return 0;
//	else
//		return 1;
//	/* return *p-*q */
//}
//int main() {
//	int num[10] = { 1,3,5,7,9,2,4,6,8,10 };
//
//	qsort(num, 10, sizeof(int), [](const void* a, const void* b) {
//		return *static_cast<const int*>(a) - *static_cast<const int*>(b);
//	});
//	for (int i : num)
//		std::cout << i << " ";
//	std::cout << std::endl;
//}













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
//	int getAge()const { return age; }
//	char* getName()const { return name; }
//	/*string getName()const {return name;}*/
//	friend std::ostream& operator<<(std::ostream&, const Dog&);
//	~Dog();
//};
//Dog::Dog(char* name_, int age_) :age(age_) {
//	int len = strlen(name_);
//	name = new char(len + 1);
//	strcpy(name, name_);
//}
//Dog::~Dog() {
//	delete name;
//}
//
//std::ostream& operator<<(std::ostream& os, const Dog& dog) {
//	os << dog.name << "," << dog.age << std::endl;
//	return os;
//}
//
//int main() {
//	Dog dogs[5]{ { "순실이",5 },{ "시바",3 },{ "너",10 },{ "진돌이",3 },{ "댕댕이",20 } };
//
//	/*나이순 정렬*/
//	//qsort(dogs, 5, sizeof(Dog), [](const void* a, const void* b) {
//	//	return static_cast<const Dog*>(a)->getAge() - 
//	//		static_cast<const Dog*>(b)->getAge();	
//	//});
//
//	/*이름순 정렬*/
//	qsort(dogs, 5, sizeof(Dog), [](const void* a, const void* b) {
//		return strcmp(static_cast<const Dog*>(a)->getName()
//			,static_cast<const Dog*>(b)->getName());
//		/*string 비교는 < 연사자 사용가능*/
//	});
//		for (const Dog& d : dogs) 
//			std::cout << d;
//}
//


/*
1.qsort- 기능을 전달하는 4번째 인자
*/


#include<iostream>
#include<string>
#include<random>
#include<time.h>
using namespace std;
class Dog {
private:
	int age;
	std::string name{};
	
public:
//	Dog(int);
	int GetAge()const { return age; }
	void SetAge(int n) { age = n; }
	friend std::ostream& operator<<(std::ostream&, const Dog&);
};
//Dog::Dog(int age_):age(age_) {}

std::ostream& operator<<(std::ostream& os, const Dog& d) {
	os << "이름" << d.name << "나이" << d.age << std::endl;
	
	return os;
}


int main() {
	srand(time(NULL));
	/*개 1000마리를 만들고 나이 순으로 정렬해보자.
	  qsort는 자료구자가 []일때만 정렬해주는 C 함수임을 잊지 말자!
	  []의 특징은 메모리가 contiguous(공간)continuous (시간)
	  STL에서는 array,vector,deque 메모리가 붙어있는 대표적인 컨테이너
	*/
    /*개 1000마리를 만들고 나이 순으로 정렬해보자
	 개의 이름은 비워두자
	*/
	Dog dogs[1000];

	
	/*
	랜덤값은 엔진과 분포를 사용하자. (rand()는 X)	
	*/
	default_random_engine dre;
	uniform_int_distribution<int>uid; //범위를 제한하지 않으면 표현 가능한 가장 작은 음의정수부터 가장큰 양의정수 까지 나옴


	for (Dog& d : dogs) {
		//앞에 클래스를 앞글자를 넣음
		// 랜덤으로 값을 끄집어 낸다.
		//확률분포
		d.SetAge(uid(dre));
	}


	//Dog* dogs[1000];


	
	/*for (int i = 0; i < 1000; i++)
		dogs[i] = new Dog(rand()%1000+0);
*/

	/*[]()[]를 사용하여 정렬하자.*/
	/*qsort(*dogs, 1000, sizeof(Dog),[](const void* a, const void* b) {
		return static_cast<const Dog*>(a)->GetAge() - static_cast<const Dog*>(b)->GetAge();
	});*/

	/*
	잘못된 프로그램
	auto d X
	auto& d o
	복사방지&를 넣어야함
	*/
	for (auto& d:dogs)
		std::cout << d << std::endl; 

}	