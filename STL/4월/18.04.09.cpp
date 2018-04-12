#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<string>
#include<algorithm>
#include<random>
#include"Model.h"
using namespace std;

/*
컨테이너의 요소 접근
소스.cpp의 내요을 단어단위로 읽어 벡터에 저장하자.

*/
//
//int main() {
//	vector<string> v;
//	ifstream in("18.04.03.cpp");
//	string s;
//	while (in >> s)
//		v.push_back(s);
//	/*유효할떄 까지 돌리면서 v백터안에 읽어온 s값을 넣는다.*/
//	auto beg = v.rbegin();   //cbegin 읽기전용   rbegin 거꾸로 crbegin 거꾸로(읽기전용)
//	auto end = v.rend();
//
//	for (auto i = beg; i < end; ++i) {
//		string s = *i;
//		for (auto j = s.rbegin(); j < s.rend(); ++j)
//			std::cout << *j << std::endl;
//		/*
//		거꾸로 찍어보기
//		거꾸로라도 begin부터 시작해야함
//		*/
//		std::cout << *i << std::endl;
//	}
//	/*공백단위로 잘림*/
//}







/*
컨테이너의 요소 접근
벡터의 값에 access해 보자.

*/
//int main() {
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };  //컨테이너 
//	/* v의 값을 2배로 만든 후 출력해 보세요*/
//
//	for (auto iter = v.begin(); iter != v.end(); ++iter)
//		(*iter) *= 2;
//	/*전역함수 begin(v)를 부르는경우 도 있음
//	i++은 복사생성자가 생기기 때문에 ++i를 해라
//	*/
//
//	/*읽기만 할때에는 cbegin을 사용하는것이 좀더 정확함*/
//	for (auto iter = v.cbegin(); iter != v.cend(); ++iter)
//		std::cout << (*iter) << std::endl;
//
//
//
//	/*
//	다른방식 1
//	auto는 코드읽기가 어려우면 쓰면 안됨
//	*/
//	for (int& d : v)
//		d = d * 2;
//	for (int d : v)  //읽기전용
//		std::cout << d << std::endl;
//
//	/*
//	다른방식 2
//	*/
//	for (int i = 0; i < v.size(); ++i)
//		v[i] = v[i] * 2; //벡터 덱 어레이 가능(붙어있는 놈들만 가능)
//	    //v.operator[](i);
//	for (int i = 0; i < v.size(); ++i)
//		std::cout << v[i] << std::endl;
//
//
//}





/*
4장 순차컨테이너(Sequence Container)
array,vector,deque,list,forward_list
*/


/*
array:유일하게 컴파일시에 크기가 결정되어야 하는 컨테이너 (스마트 배열)
기존 배열의 문제점: 배열의 이름이 메모리 시작번지이고
어디든 이름을 사용하여 access가능(경계를 벗어나도 대책이 없다.)
*/

//
//int main() {
//	array<int,5>a{ 1,2,3,4,5 };
//	int n;
//
//	while (true) {
//		std::cout << "몇번째 값을 출력할까요?";
//		cin >> n;
//
//
//
//		std::cout << "원하시는 값입니다." << a[n] << std::endl;
//
//		try{
//			std::cout << "원하시는 값입니다." << a.at[n] << std::endl;
//			/*예외를 던지는 코드*/
//
//		}
//		catch (const std::exception& e){
//			std::cout << e.what() << std::endl;
//			std::cout << "잘못된 값입니다." << std::endl;
//			break;
//
//		}	
//	}
//
//	/*STL은 속도우선의 코드를 만들기 때문에 예외를 안봄
//	std::cout<<a[-1]<<std::endl;
//	이러한 코드가 문제이긴한데 일일이 예외를 검사하면 느려지기 때문에 하지 않음
//	*/
//
//}
//


//int main() {
//	array<Model, 5>a{1,22,333,4444,55555}; /*컴파일시 결정되기 때문에 스텍에 저장됨*/
//	for (const Model& d : a)
//		d.show();
//}


/*
vector:dynamic array 실행시 크기가 변한다.
vector.size():담고 있는 원소의 갯수
vector.capacity():원소를 몇 개 담을 수 있는지를나타내는 수,용량
vector.data():Free Store에 확보한 메모리의 시작번지

*/

//int main() {
//	vector<int >v{1,2,3,4,5};
//	v.reserve(1000);
//	/*
//	v.push_back(i) 하면서 capacity가 바뀔때마다 아래 세줄을 출력하시오
//	*/
//
//	 int olddata = v.capacity();
//
//	for (int i = 0; i < 1000; ++i) {
//		v.push_back(i);
//
//		if (olddata != v.capacity()) {
//			std::cout << "원소의 갯수" << v.size() << std::endl;
//			std::cout << "담을 수 있는 갯수" << v.capacity() << std::endl;
//			std::cout << "확보한 메모리번지:" << v.data() << std::endl;
//			olddata = v.capacity();
//		}
//
//	}
////	*(v.data()) = 100;
//
//
//	//data()를이용해서 v[0]의 값을 100으로 변경
////	std::cout << v[0] << std::endl;
//
//}


//
//int main() {
//	vector<Model >v;
//	v.reserve(100);
//
////	v.push_back(Model(333));
//
////	v.push_back(333);
///*
//컴파일러가 333을 모델로 만든다.
//*/
//
////	v.emplace_back(333);
//	/*쓸대없는 객체를 안 만들고 벡터가 스스로 추가할 수 있도록 하는 함수*/
//
//	v.emplace_back();
//
//}



class Player {
private:
	string id_;
	int s1_;
	int s2_;
public:
	Player(string id, int s1, int s2) :id_(id), s1_(s1), s2_(s2) {}
};

int main() {

	vector<Player> v;
	v.reserve(1000);

	//v에 Player를 1000개 삽입하라
	//s1 오름차순으로정렬하라

	v.emplace_back("test",100,300);


}