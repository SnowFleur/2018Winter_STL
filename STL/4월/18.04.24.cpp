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

	void show()const { std::cout << "�̸�: " << name << ", ����" << score << endl;  }

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

	/*1������*/
	out.open("2018�� STL �߰�����.txt");
	while (out >> name >> score) {
		cont.push_back(Player(name, score));
	}
	


	/*2������*/
	unsigned int sum = 0;
	for (auto iter = cont.begin(); iter != cont.end(); ++iter) {
		sum += iter->getScore();
	}
	std::cout << "��հ�:"<<sum/100000 << std::endl;
	

	/* 
	���� 3��
	������������ ������ ������ �̿��Ͽ� �迭ó�� ���������� �����ϴ�.
	����2�� �ذ��ϴµ� �������ϴٰ� �����ϴ� �����̳ʴ� 10������ �޸𸮰� �����̶�� �ϸ� array�̴�.
	*/


	/*����*/
	std::sort(cont.begin(), cont.end(), [](const auto& left, const auto& right) {
		return left.getScore() > right.getScore();
	});

	/*4������*/
	int max=0;
	auto iter = std::find_if(cont.begin(), cont.end(), [&max](const Player& temp) {
		
		if (max <= temp.getScore()) {
		}
	});

	/*5������*/
	




	/*��ũ �ο�*/
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







	///*6������*/
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

	ofstream out("2018�� STL �߰�����.txt");
	out << "masterplayer" << '\n' << 99999 << endl;

	auto p = s.begin();
	for (int i = 0; i < 100000 - 1; ++i) {
		out << *p++ << '\n';
		out << static_cast<int>(abs(nd(dre)*50000)) << endl;
	}

	std::cout << "100000���� �ڷḦ �����Ͽ� ���Ͽ� ����Ͽ���" << std::endl;
}

