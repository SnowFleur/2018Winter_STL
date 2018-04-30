//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<deque>
//#include<list>
//#include<string>
//#include<algorithm>
//using namespace std;
///*중간고사*/
///*
//
//문제에 출력하라는게 있는지 꼭 보고 출력값 쓸것 !!! (문제지를 읽어봐라)
//복사가 있는지 없을지도 생각
//
//*/
//class Player {
//private:
//	string name;
//	int score;
//public:
//	Player(const Player& otehr) {
//		std::cout << "복사" << std::endl;
//	}
//	int getScore()const {}
//	string getName()const {};
//	string show()const;
//
//};
//void setupData();
///* 1.    */
//int main() {
//	setupData();
//	
//	vector<Player>v;
//	v.reserve(1000000);
//	ifstream in("2018 STL 중간시험.txt");
//	string name;
//	int n;
//	while (in >> name >> n) {
//		v.emplace_back(name, n);
//	/*한번도 복사생성이 생기지않고 객체를 넣을 수 있다. (Player(name,n))이렇게 안해두됨
//	  생성자 인자만 넣어서 쓸데없는 복사를 없앤다.
//	*/
//	}
//}
///* 2.    */
//int main() {
//	vector<Player>v;
//	long long sum = 0;
//	for ( const Player& d : v)  //const 와&꼭 넣기 const는 확인해봐야할듯
//		sum += d.getScore();
//		
//	for (int i = 0; i < v.size(); ++i)
//		sum+=v[i].getScore();
//	std::cout << "평균값:" << (double)sum / v.size() << std::endl;
// 
//}
///* 3.    */
//int main() {
//	/*
//	deque를 쓰면 rserve할 수 없고
//	벡터에 좋은정점:랜덤엑세스가 가능함 이 자리든 저 자리든 접근하는 속도가 동일함
//
//	순차적으로 접근하면 가능하기 때문에 어느컨테이더는 상관없지만
//	리스트는 메모리가 더 들어갔을거임
//	*/
//}
///* 4.    */
//int main() {
//	/*
//	소팅을 쓸필요가 없다 한번만 순서대로 흟어보면 되는데 구지 소팅하고 처음값을 가리키는건 비효율 
//	*/
//	vector<Player> v;
//
//	Player& p = v[0];  //레퍼런스를 사용하면 안됨 값이 바꾸게 된다 생각해봐라
//	for (const Player& d : v) {
//		if (d.getScore() > p.getScore())
//			p = d;
//	}
//	p.show();
//	/*
//	max엘리먼트 라는것이 있음
//	*/
//
//}
///* 5.    */
//int main() {
//	vector<Player> v;
//
//	std::sort(v.begin(), v.end(), []() {});
//
//	auto f=std::find_if(v.begin(), v.end(), [](const Player& p) {
//		return p.getName() == "masterPlayer";
//	});
//	if (f != v.end()) {
//		std::cout << "등수:" << distance(v.begin(), f) + 1 << "등";
//	}
//	else{
//		std::cout << "없을때에는 없다고 말을해라" << std::endl;
//	}
//
//}
///* 6.    */
//int main() {
//
//
//}
