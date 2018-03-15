#define _CRT_SECURE_NO_WARNINGS
/*
����
����� ������ ���̶�(?)
����: �ڱⰡ ���ϴ� ���� �ڱⰡ ���ϴ� ��ŭ ����� �� �ִ°� 
	  ������ ������ ����.
����: �ѹ��� ���� �ϴ°�
*/







/*���ø� ���� ��*/
//#include<iostream>
//#include<string>
///*
//C++���� �ڷ����� �����ϴ�.
//����� ������ ���޵Ǵ� ������ �ڷ����� �ٸ��ٴ� ������
//�Ź� �̿Ͱ��� �Լ��� �����ϰ� �����Ѵٸ� �ƹ��� C++ �Ⱦ��̴ϴ�.
//
//�ݺ��Ǵ� �۾��� ��ǻ�Ϳ��� �ðܺ���
//------> Template
//
//*/
//void change(int&, int&);
//void change(std::string&,std::string&);
//int main() {
//	/*
//	1. change �Լ��� ��� ���ϱ�?
//	   A: ������ ������ �� �� ����Ѵ�.
//	2. change �Լ��� �� ���� ����� �ɱ�? 
//	   A: ���Ѱ� class,struct �� ������ ���� �� �ֱ� ����
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




/*���ø� ����*/
/* ���ø� ���� ����ð��� �����ɸ� ���̴�. X*/
//#include<iostream>
//#include<string>
//template<class T>
//void change(T&, T&);  /*�Լ� ���ø�*/
//int main() {
//	int a(10), b(20);
//	/*�Լ��� �ڷ����� ������ �� �ֱ⶧���� <>�� �������� class�� �Ұ����ϴ�.
//	change<int>==change �Լ��� �����Ϸ��� �߷��� ������*/
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




/*����*/

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
//void change(T&, T&);  /*�Լ� ���ø�*/
//
//int main() {
//	Dog a{ "������",5 }, b{ "�ù�",3 };
//	std::swap(a, b);
//	std::cout << a;  /*�ù�   3��*/
//	std::cout << b;  /*������ 5��*/
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
	/*void �����ʹ� ����ȯ �� �������*/
	Dog* x = (Dog*)a;
	Dog* y = (Dog*)b;
	return x->getAge() < y->getAge();
}

template<class T>
void change(T&, T&);  /*�Լ� ���ø�*/

int main() {
	int num[10] = { 1,3,5,7,9,2,4,6,8,10 };
	qsort(num, 10, sizeof(int), [=](int a, int b)->int {return a > b; })

		/* [ĸó] (��������)->  ����Ÿ�� {�Լ�} (�ѱ�����)  */






















	
	
	//Dog dogs[5]{ {"������",5},{"�ù�",3},{"��",10},{"������",3},{"�����",20}};
	///*qsort�� � �ڷ����̴��� �����ϴ� �Լ�(Generic) Ư�� �ڷ����� �������� �ʴ�,
 // 	qsort(������ ? , ��� ? , �ϳ���ũ��� ? , ��� ? : �Լ��� ����������Ѵ�. �Լ�������)
	//���� ������������ �����϶�
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
