#include<iostream>
#include<memory>
#include<vector>
class Object {
private:
public:
	Object() { std::cout << "Object생성자     " << this << std::endl; }
	virtual ~Object() { std::cout << "Object소멸자" << std::endl; }
	virtual void print()const = 0;
};

class AAA :public Object {
private:
	int number;
public:
	AAA() { std::cout << "AAA생성자     " << this << std::endl; }
	virtual ~AAA() { std::cout << "AAA소멸자"<< std::endl; }
	virtual void print()const { std::cout << "AAA클래스의 print함수" << std::endl; }

};

class BBB :public Object {
private:
	int number;
public:
	BBB() { std::cout << "BBB생성자     " << this << std::endl; }
	virtual ~BBB() { std::cout << "BBB소멸자" << std::endl; }
	virtual void print()const { std::cout << "BBB클래스의 print함수" << std::endl; }
};

int main() {

	std::unique_ptr<Object> optr[2];
	std::unique_ptr<AAA[]> a{ new AAA[3] };
	
	std::unique_ptr<Object*[]>optr3{ new Object*[2] };

	optr[0].reset(new AAA);
	optr[1].reset(new BBB);

	//std::unique_ptr<Object[]>optr2;
//
	
//	std::unique_ptr<Object>optr4(new AAA);



}


/*
ifstream
string s
int n;
while(in>>s>>n>>)
	v.push_back(

	*/