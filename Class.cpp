#include<iostream>

class Temp1;
class Temp2;
class Tmpe3;


class Temp1 {
private:
	int x;
	int y;
public:
	Temp1(int x_, int y_) :x(x_), y(y_) { std::cout << "멤버 초기화 (멤버 이니셜라이저)" << std::endl; }
	Temp1() { std::cout << " Temp1 디폴트 생성자 호출" << std::endl;}
	void PutPos() { std::cout << "X:" << x << "Y" << y << std::endl; }
};
class  Temp2{
private:
public:
	Temp2() { std::cout << "Temp2디폴트 생성자 호출" << std::endl; };
};
class Temp3 {
private:
	Temp1 temp1;   //Temp3 의 멤버변수 또한 객체 이기 때문에 생성자를 호출한다.
	Temp2 temp2;   
	//상황에 따라서 는 다르지만 temp1,temp2 클래스 생성자 함수가 쓸데없이 두번 호출이 되었기 때문에 최적화 코드는 아니다.
	//더 좋은 프로그램을 만들기 위해서는 항상 고민해야 하는 부분이다.
public:
	Temp3():temp1(10,15) { std::cout << "Temp3디폴트 생성자호출" << std::endl; }
	void ReturnPos() {
		temp1.PutPos();
	}

};

// 객체의 생성과정
//1. 객체 생성을 위한 메모리 공간을 할당 받는다.
//2. 객체에 해당하는 생서자를 호출한다.
int main() {
	Temp1 temp1;
	Temp2 temp2;
	Temp3 temp3;
	Temp1 temp4(5, 6);

	temp3.ReturnPos();



}