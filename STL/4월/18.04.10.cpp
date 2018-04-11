//#include<iostream>
//#include<vector>
//#include<string>
//#include<array>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<random>
//#include"Model.h"
//using namespace std;
//
//
//
//class Player {
//private:
//	char id_[10];
//	//string id_;
//
//	int rank1;  //등수를 저장하는데 자료형 크기 고려해볼것
//	int rank2;
//	int s1_;
//	int s2_;
//public:
//	Player() {}
//	Player(string id, int s1, int s2) : s1_(s1), s2_(s2) {
//		strcpy (id_, id.c_str());
//	}
//	void show()const {
//		std::cout << id_ << ", 점수1:" << s1_ << ", 점수2:" << s2_ << std::endl;
//	}
//	void setRank1(int r) { rank1 = r; }
//	void setRank2(int r) { rank2 = r; }
//
//	int getS1()const { return s1_; }
//	int getS2()const { return s2_; }
//
//};
//
//int main() {
//
//	vector<Player> v;
//	v.reserve(1000);
//
//
//	//v에 Player를 1000개 삽입하라
//	//s1 오름차순으로정렬하라
//	//각 게임에 대한 등수를 기록해야 한다.
//	//게임별로 내림차순으로 정렬하여야 한다.
//
//
//
//	random_device rd;
//	default_random_engine dre(rd()); //이것도 가능
//	//dre.seed(time(NULL));//시드를 줄 수있음
//	uniform_int_distribution<>uid1(0, 30000000);
//	uniform_int_distribution<>uid2(0, 400000000);
//
//
//	for(int i=0;i<1000;++i)
//	v.emplace_back(string("선수")+to_string(i), uid1(dre), uid2(dre));
//	/*int를 stirng으로 바꿔주는 to_string*/
//
//	/*
//	메모리가 붙어있는 자료형만 가능하다.!!!!!!!!!!!!!!!!!!!!!!!!!
//	[],array,vector,deque,string,
//	메모리가 연속(contiguous)
//	*/
//	/*      처음     끝    방법:호출가능타입으로한다.
//	sort는 디버깅모드에서는 느리다.
//	*/
//	int cnt=0;
//	sort(begin(v), end(v), [&cnt](const Player& a,const Player& b) {
//		cnt++;
//		return a.getS1() > b.getS1();
//
//	});
//	std::cout << "정렬에 필요한 비교연산의 수"<<cnt<< std::endl;
//	/*
//	람다가 함수와 다른점 
//	()<---sort가 람다한테 무엇을 전달할까??
//	
//	간결하다??? :No 함수하나를 쓰는게 더 좋음
//
//	1.가독성이 좋다:바로 눈에 뭐하는지 보인다. 함수로 하면 이게 무슨함수인지 찾아봐야함
//	2.함수호출오버헤더(동작,코드) 함수호출없이 생성할 가능성이 높다.
//	2.일반함수보다 매우빠르다.
//	*/
//
//	int rank = 1;
//	for (Player& d : v) {
//		d.setRank1(rank++);
//	}
//	/*
//	점수를 같을경우 생각해야함
//	*/
//
//
//	for (const Player& d : v) {
//		d.show();
//	}
//
//	ofstream out("과제1.dat", std::ios::binary);
//	// binary와 txt의 차이는??
//	out.write((const char*)v.data(),sizeof(Player)*1000);
//
//	ifstream in ("과제1.dat", std::ios::binary);
//	
//	in.read((char*)v.data(), sizeof(Player) * 1000);
//	
//	std::cout << v.size() << std::endl;
//
//	for (const Player&d : v)
//		d.show();
//
//}



















#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

/*
호출가능타입(callable Type)
-함수,멤버함수,함수포인터,람다,함수객체,bind로 생성한 객체(람다 때문에 사용안함),function으로 만든객체 등등 함수처럼 사용가능
-템플릿 때문에 호출가능타입이란 것이 생김
97쪽

*/

template<class T>
void f(T a) {
	a(); //전달된 a를 호출하였다. 인자가 없는 타입만 가능
}

int X() {
	std::cout << "나는 함수 X야" << std::endl;
	return 0;
}

class Test {
private:
	int member = 0;
public:
	void operator()() {
		member++;
		std::cout << "나는 클래스의 멤버함수야" << std::endl;
	}
};
/*
함수가 바깥세계와 소통해야 할때 필요하다
함수가 상태를 가지고 있다.
함수객체
*/

int main() {


	//부를 수 있다.
	int n = 100;
	f(X);
	f(*X);
	f([]() {std::cout << "나는 람다야" << std::endl; });

	Test t;
	f(t);


}