#include<iostream>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<random>
#include<memory>
#include<set>
#include<string>
#include<vector>
using namespace std;

void setupData();

class Player {
	string name;
	int score;
	int rankOld;
	int rankNew;
public:
	Player() = default;
	Player(string s, int n) :name{ s }, score{ n } {};
	const string& getName()const { return name; }
	int getScore()const { return score; }
	int getRankOld()const { return rankOld; }
	int getRankNew()const { return rankNew; }


	void setScore(int n) { score = n; }
	void setRankOld(int n) { rankOld = n; }
	void setRankNew(int n) { rankNew = n; }

	void show()const { std::cout << "이름: " << name << ", 점수" << score << endl;  }

	bool operator==(const Player& me)const {
		
		return me.name == this->name;

	}
};



int main() {

	std::vector<int>::iterator iter;
	// setupData();
	ifstream out;
	std::vector<Player>cont;
	cont.reserve(100000);
	string name;
	int score;

	/*1번문제*/
	out.open("2018년 STL 중간시험.txt");
	while (out >> name >> score) {
		cont.push_back(Player(name, score));
	}
	


	/*2번문제*/
	unsigned int sum = 0;
	for (auto iter = cont.begin(); iter != cont.end(); ++iter) {
		sum += iter->getScore();
	}
	std::cout << "평균값:"<<sum/100000 << std::endl;
	

	/* 
	문제 3번
	랜덤엑세스가 가능한 장점을 이용하여 배열처럼 순차접근이 가능하다.
	문제2를 해결하는데 적합한하다고 생각하는 컨테이너는 10만명의 메모리가 고정이라고 하면 array이다.
	*/


	/*정렬*/
	std::sort(cont.begin(), cont.end(), [](const auto& left, const auto& right) {
		return left.getScore() > right.getScore();
	});

	/*4번문제*/
	int max=0;
	auto iter = std::find_if(cont.begin(), cont.end(), [&max](const Player& temp) {
		
		if (max <= temp.getScore()) {
		}
	});

	/*5번문제*/
	




	/*랭크 부여*/
	int rank = 0;
	int same;
	for (auto iter = cont.begin(); iter != cont.end(); ++iter) {

		iter->setRankNew(++rank);
	}
	auto iter = std::find_if(cont.begin(), cont.end(), [](const Player& temp) {
	
		return temp.getName() == "masterplayer";
	});


	if (iter != cont.end()) {
		std::cout << iter->getName() << iter->getRankNew();
	}







	///*6번문제*/
	//default_random_engine dre;
	//dre.seed(12345678);
	//uniform_int_distribution<>uid(0, 1000000);
	//for (int i = 0; i < 100000; ++i) {
	//	cont[i].setScore(uid(dre));
	//}
		






}
void setupData() {

	string name;
	int score;
	default_random_engine dre;
	dre.seed(20180424);
	uniform_int_distribution<>uia('a', 'z');
	uniform_int_distribution<>uin('0', '9');
	uniform_int_distribution<>len('5', '10');

	normal_distribution<>nd(2, 2.0);

	set<string>s;
	while (s.size() != 100000 - 1) {
		
		for (int i = 0; i < len(dre); ++i)
			name += uia(dre);
		for (int i = 0; i < 5; ++i)
			name += uin(dre);

		s.insert(name);
		name.clear();
	}

	ofstream out("2018년 STL 중간시험.txt");
	out << "masterplayer" << '\n' << 99999 << endl;

	auto p = s.begin();
	for (int i = 0; i < 100000 - 1; ++i) {
		out << *p++ << '\n';
		out << static_cast<int>(abs(nd(dre)*50000)) << endl;
	}

	std::cout << "100000개의 자료를 생성하여 파일에 기록하였음" << std::endl;
}

