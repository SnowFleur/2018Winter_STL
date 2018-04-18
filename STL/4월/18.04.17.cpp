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
 알고리즘 함수 find와 find_if를 이해하고 만들어보자
 알고리즘 함수는 접미사가 붙는 버전이 따로 있다.
 if접미사- 조건에 따라 다르게 동작하는 버전
	조건을 결정하는 호출가능타입을 predicate이라고 부른다.
	(boolean 값을 리턴하는 함수를 말한다)
*/

/*
	find:찾고자 하는 값과 같은 값을 갖는 원소의 위치를 반환
		- 값이 같다는 것을 어떻게 판단하지?

	find_if:찾고자 하는 조건을 만족하는 원소의 위치를 반환한다.

*/




//int main() {
//
//	//	list<int> v{ 1,3,5,7,9,2,4,6,8,10 };
//	////v에서 첫 홀수의 위치를 찾아라.
//	//list<int>::iterator p = std::find_if(v.begin(), v.end(), [](int a) {
//	//	return a & 1;
//	//});
//
//	
//
//
//	list<Model> v{ Model(1),22,333,4444,55555 };
//	/*
//	explict가 있으면 Model(1)이런식으로 해야함
//	*/
//
//	/*
//	객채가 똑같다는 판단은 ==이렇게 
//	판단은==가 해줌 
//	==는 프로그래머가 정의함
//	*/
//
//
//	//v에서 333바이트를 할당한 원소의 위치를 찾아라
//	list<Model>::iterator p = std::find_if(v.begin(), v.end(), [](Model& a) {
//		
//		if (a.getSize() == 333)
//			return a;
//	});
//
//	std::cout << *p << std::endl;
//
//	//v에서 3번째 객체인 Model(333)과 같은 객체를 찾아라
//
//}







/*
Myfind
*/


//template<class Iter,class Val>
//Iter myFind(Iter, Iter,  const Val& );
//
//template<class Iter,class Call>
//Iter myFind_if(Iter, Iter, Call);
//
//int main() {
//
//	list<Model> v{ Model(1),22,333,4444,55555 };
//	/*복사 생성자가 생긴다 왜??*/
//
//	find_if(v.begin(), v.end(), [](const Model& a) {
//		if (a.getSize() == 333)
//			return true; 
//		return false;
//	});
//
//	auto p2=myFind_if(v.begin(), v.end(), [](const Model& a) {
//		if (a.getSize() == 333)
//			return true;
//		return false;
//	});
//
//
//
//	//v에서 333바이트를 할당한 원소의 위치를 찾아라
//	auto p=myFind(v.begin(), v.end(), Model(333));
//	if (p == v.end())
//		std::cout << "일치하는 원소가 없다" << std::endl;
//	else
//		p->show();
//
//
//	if (p2 == v.end())
//		std::cout << "일치하는 원소가 없다" << std::endl;
//	else
//		p2->show();
//
//
//		
//}
//
//template<class Iter, class Call>
//Iter myFind_if(Iter b, Iter e, Call f) {
//
//	while (b != e) {
//		if (f(*b) == true);
//		return b;
//		++b;
//	}
//	return e;
//}
//
//template<class Iter, class Val>
//Iter myFind(Iter b, Iter e, const Val& v) {
//	
//	while (b != e) {
//		if (*b == v)
//			return b;
//		++b;
//
//return e;
//
//}
//
//



//
//
///*
//이름을 통한 정렬이 있다??
//
//List의 멤버함수 remove
//---->컨테이너의 원소를 삭제하는 방식
//*/
//
//bool f(int n) { return n & 1; }
//
//int main() {
//	
//	/*
//	v에서 홀수를 지워주세요
//	알고리즘은 컨테이너의 원소를 직접 제거할 수 없다.
//	알고리즘은 새로운 끝을 반환하고, 컨테이너가 필요없는 원소를 지워야 한다.
//	*/
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
//
//	v.erase(remove_if(v.begin(), v.end(), f), v.end());
//
//
//	for (int i = 0; i < v.size(); ++i)
//		std::cout << v[i]<<" ";
//	std::cout << std::endl;
//
//
//}
//
///*
//알고리즘은 vector의 갯수를 컨트롤 할 수가없다.
//벡터의 원소는 프라이빗
//
//알고리즘 함수는 새로운 end위치를 알려준다.
//
//*/
//




/*
LIST
*/

class F {
public:	
	bool operator()(int n) { return n & 1; }
};

int main() {
	list<int> v{1,3,5,7,9};
	list<int>b{2,4,6,8,10 };
	list<int> a{1,1,1,3,3,3,3,5,4,7,9,5,5,5 };
	a.unique();
	//정렬시키고 중복된거 날릴때 사용

//	v.erase(remove_if(v.begin(), v.end(), F()), v.end()); //쓰레기
//	v.remove_if(F());

	/*
	b를 a에 merge하라. a와b를 출력하여 관찰하라.
	*/
	v.merge(b);
	/*
	정렬되어있는 리스트에 한해서 정렬된상태에서 합쳐진다.
	
	*/	



	for (int d : v)
		std::cout << d << " ";
	std::cout << std::endl;


	for (int d : b)
		std::cout << d << " ";
	std::cout << std::endl;


}











