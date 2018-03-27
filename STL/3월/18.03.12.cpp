#define _CRT_SECURE_NO_WARNINGS

/* ����*/

//
//#include<iostream>
//#include<string>
///*����Ʈ�� �ڷ����� �� ���� ���� �����𸣴� �ڷ����� �Ѱ��ִ� ��ǥ���ΰ� void�� ������ */
//int fp(const void* a, const void* b) {
//	/*void �ǹ� - �� �ڷḦ ����ϴ� ����� ������� �ڷ����� ��ȯ�Ͽ� ����϶�� ��*/
//	int*p=(int*)a;
//	/*  (int*)(const void*)a
//	1. �ڷ����� �ٲ����
//	2. const �Ӽ��� ������
//	--�����ϴ�---
//	C++������ �̰��� �����̴�.
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
//	/*���� �������� 4����Ʈ�� �ǳ��ٸ� ������ ...������...������ ��°� �� �� ����.	
//	*/
//	for (int i : num)
//		std::cout << i << " ";
//	std::cout<<std::endl;
//}












/*
���� ���
*/

//#include<iostream>
//#include<string>
///*����Ʈ�� �ڷ����� �� ���� ���� �����𸣴� �ڷ����� �Ѱ��ִ� ��ǥ���ΰ� void�� ������ */
//int fp(const void* a, const void* b) {
//	/*void �ǹ� - �� �ڷḦ ����ϴ� ����� ������� �ڷ����� ��ȯ�Ͽ� ����϶�� ��*/
//	int*p = (int*)a;
//	/*  (int*)(const void*)a
//	1. �ڷ����� �ٲ����
//	2. const �Ӽ��� ������
//	--�����ϴ�---
//	C++������ �̰��� �����̴�.
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
//	Dog dogs[5]{ { "������",5 },{ "�ù�",3 },{ "��",10 },{ "������",3 },{ "�����",20 } };
//
//	/*���̼� ����*/
//	//qsort(dogs, 5, sizeof(Dog), [](const void* a, const void* b) {
//	//	return static_cast<const Dog*>(a)->getAge() - 
//	//		static_cast<const Dog*>(b)->getAge();	
//	//});
//
//	/*�̸��� ����*/
//	qsort(dogs, 5, sizeof(Dog), [](const void* a, const void* b) {
//		return strcmp(static_cast<const Dog*>(a)->getName()
//			,static_cast<const Dog*>(b)->getName());
//		/*string �񱳴� < ������ ��밡��*/
//	});
//		for (const Dog& d : dogs) 
//			std::cout << d;
//}
//


/*
1.qsort- ����� �����ϴ� 4��° ����
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
	os << "�̸�" << d.name << "����" << d.age << std::endl;
	
	return os;
}


int main() {
	srand(time(NULL));
	/*�� 1000������ ����� ���� ������ �����غ���.
	  qsort�� �ڷᱸ�ڰ� []�϶��� �������ִ� C �Լ����� ���� ����!
	  []�� Ư¡�� �޸𸮰� contiguous(����)continuous (�ð�)
	  STL������ array,vector,deque �޸𸮰� �پ��ִ� ��ǥ���� �����̳�
	*/
    /*�� 1000������ ����� ���� ������ �����غ���
	 ���� �̸��� �������
	*/
	Dog dogs[1000];

	
	/*
	�������� ������ ������ �������. (rand()�� X)	
	*/
	default_random_engine dre;
	uniform_int_distribution<int>uid; //������ �������� ������ ǥ�� ������ ���� ���� ������������ ����ū �������� ���� ����


	for (Dog& d : dogs) {
		//�տ� Ŭ������ �ձ��ڸ� ����
		// �������� ���� ������ ����.
		//Ȯ������
		d.SetAge(uid(dre));
	}


	//Dog* dogs[1000];


	
	/*for (int i = 0; i < 1000; i++)
		dogs[i] = new Dog(rand()%1000+0);
*/

	/*[]()[]�� ����Ͽ� ��������.*/
	/*qsort(*dogs, 1000, sizeof(Dog),[](const void* a, const void* b) {
		return static_cast<const Dog*>(a)->GetAge() - static_cast<const Dog*>(b)->GetAge();
	});*/

	/*
	�߸��� ���α׷�
	auto d X
	auto& d o
	�������&�� �־����
	*/
	for (auto& d:dogs)
		std::cout << d << std::endl; 

}	