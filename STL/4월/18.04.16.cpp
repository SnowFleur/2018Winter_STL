

#include<iostream>
#include<iomanip>
#include<random>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>
#include"Model.h"
using namespace std;


/*
상태를 가지고 있는 객체
*/

//int main() {
//
//
//	default_random_engine dre;
//	normal_distribution<> nd(0, 1);
//	/*
//	뒤에 시그마
//	*/
//
//	/*객체 인데 호출가능한 객체(32비트값)*/
//	
//	for (int i = 0; i < 100; ++i)
//		std::cout << setw(20) << nd(dre);
//	/*operato()()
//	상태를 가지고 있음
//	*/
//
//}







/*  deque  */




/*
array,vextor,deque은 붙어있는 메모리
랜덤엑세스 접근이 같은시간내에 가능하다.

덱:앞과끝에서 메모리 삽입삭제가 자유롭다.
큐


*/

//int main() {
//
//	deque<int>d;
//	d.operator[](0);
//	/*
//	STL은 예외를처리를 안하기때문에 예외처리를 하려면 at을 사용해야한다.
//
//	try catch는 잘 안씀
//	*/
//	try{
//
//		//std::cout << d.operator[](0) << std::endl;
//		// std::cout <<d.at(0) << std::endl;
//	}
//	catch (const std::exception& e){
//		std::cout << e.what() << std::endl;
//		
//	}
//
//}
//
//int main() {
//
//	deque<int>d(10);
//	/*칸이 10개 있는데, 여기에 저장된 정수가 정규분포를 갖도록 해보자*/
//	
//	random_device rd;
//	default_random_engine dre(rd());
//	normal_distribution<> nd(0, 0.1);
//	uniform_int_distribution<> uid(0,9);
//	/*
//	뒤에값이 커질수록 곡선이 커진다.
//	*/
//
//	/* -1부터 1까지의 값만 이용하도록 하자*/
//	for (int i = 0; i < 10000000; ++i) {
//		//double val = uid(dre);
//		//if (val < -1.0 || 1.0 < val)
//		//	continue;
//
//		//val += 1.0; //0~2사이값
//		//val *= 5.0;// 0~10
//
//		++d[uid(dre)];
//
//		//++d[(int)val];
//		/*많이 사용한다*/
//	}
//
//		for (int i = 0; i < d.size(); ++i)
//			std::cout << "["<<i<<"]:"<<d[i] << std::endl;
//
//
//}



/*
List   반복자소멸이란 무엇인가?? (중간고사 나올지도?)
*/
//
//int main() {
//
//	list<int> v;
//	vector<int> v2;
//	v2.reserve(100);
//
//	v.push_back(1);
//	auto p = v.begin();
//	std::cout << *p << std::endl;
//
//
//	v.push_back(2);
//	std::cout << *p << std::endl;
//	
//
//	p++;
//	std::cout << *p << std::endl;
//}







//
///*
//컨테이너에서 특정한 원소를 찾아보자.
//
//제네릭 프로그래밍
//*/
//vector<int>::iterator f(int );
//
//int main() {
//
//	vector<int> v{ 1,3,5,7,9,2,4,6,8,10 };
//
//	//v에 9라는 값이 있는지 찾아보시오
//	
//	auto p= f(19);
//	if (p != v.end())
//		std::cout << "찾음" << std::endl;
//	else
//		std::cout << "원하는값이 없스" << std::endl;
//
////	distance(v.bggin(), p) + 1; //등수를 찾을 수 있음
//
//
//	std::find(v.begin(), v.end(), 9);
//
//
//}
//auto f(int) {
//
//}





/*
템플릿을 이용한 find구현
*/



//
//
///*
//컨테이너에서 특정한 원소를 찾아보자.
//
//제네릭 프로그래밍
//*/
///*반복자 f 반복자 b,반복자 e,값 v*/
//template<class  Iter,class Val>
//Iter f(Iter b, Iter e, Val v);
//
//
//int main() {
//
//	vector<int> v{ 1,3,5,7,9,2,4,6,8,10 };
//
//	//v에 9라는 값이 있는지 찾아보시오
//
//	vector<int>::iterator p = f(v.begin(),v.end(),  19);
//	if (p != v.end())
//		std::cout << "찾음" << std::endl;
//	else
//		std::cout << "원하는값이 없스" << std::endl;
//
//	//	distance(v.bggin(), p) + 1; //등수를 찾을 수 있음
//
//
//	std::find(v.begin(), v.end(), 9);
//
//
//}
//template<class Iter, class Val>
//Iter f(Iter b, Iter e, Val v) {
//	while (b != e) {
//		if (*b == v)
//			return b;
//		else
//			++b;
//	}
//	return e;
//}





void f();
int main() {

	list<int> v{ 1,3,5,7,9,2,4,6,8,10 };

	//v에서 첫 홀수의 위치를 찾아라.
	list<int>::iterator p = std::find(v.begin(), v.end(), []( int a)->bool {


		return a & 1;

	
	});


	if (p != v.end())
		std::cout << "찾음" << std::endl;
	else
		std::cout << "원하는값이 없스" << std::endl;
}
