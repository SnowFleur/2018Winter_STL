#include<iostream>

class Chulsoo {
public:
	int count;
};
int main() {

	Chulsoo chulsoo;
	chulsoo.count = 1;
	
	/*
	람다(?)
	C++11 표준부터 적용되는 함수
	장점:
	빠르다.
	필요한 부분에 바로 함수 선언 정의 호출이 가능하다. 그러함으로 인해 코드를 더 간결하고 읽고 쉽게 작성이 가능하다.
	단점:

	
	문법:
	[캡처] (매개변수 목록) mutable 예외목록 -> 반환형 {함수몸체}
	
	mutable,예외목록,반환형은 생략가능

	*/
	
	/*
	캡처 종류 
	[]: 람다에서 외부 변수를 사용하지 않는다.
	[a]: 람다 함수의 외부 변수 a는 람다 함수 내에서 값으로 전달 받아 사용한다. ( 단 a는 한정자(const)형태 이다) 다른 외부 변수 는 사용하지 않는다.
	[&a]: 람다 함수의 외부 변수 a는 함수내에서 참조 형태로 전달 받아 사용한다. 다른 외부 변수는 사용하지 않는다.
	[=,&a,&b]: 기본적으로 람다 함수 외부의 모든 변수를 값으로 전달받아 사용한다. 단 a,b 변수는 참조 형태로 전달 받아 사용한다.
	[&,a,b]: 기본적으로 람다 함수 외부의 모든 변수를 참조 형태로 전달 받아 사용한다. 단 a,b는 값 형태로 전달 받아 사용한다.
	*/

	/*
	for (int i = 0; i < 10; i++) {
		[=](int steak) mutable {std::cout << "철수는:" << chulsoo.count++ << "번째" << steak << "g 짜리 스테이크를 먹는다." << std::endl; }(10000);
		//람다의  [=]캡처 형식은 변수를 값으로 받는  const(한정자) 형태 이다.
		//사진을 생각하면 편함
		// 바꾸기 위해서는 [&]형식을 이용해서 참조로 받아야한다.
	}
	*/
	
	// 람다 함수의 반환형 지정
	//람다의 반환형은 생략이 가능하다.
	//반환형을 char 로 지정한 람다 함수
	std::cout << [=](int steakWeight) mutable->char {std::cout << "문자형으로 반환: "; return steakWeight; }(67) << std::endl;

	//반환형을 int 로 지정한 람다 함수
	std::cout << [=](int steakWeight)mutable->int {std::cout << "정수형으로 변환: "; return steakWeight; }(100) << std::endl;

	//반홚형을 지정하지 않은 람다 함수
	std::cout << [=](double steakWeight) {std::cout << "반환형 지정하지 않음: "; return steakWeight; }(55.5) << std::endl;


	


	



}