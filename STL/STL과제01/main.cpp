#include<iostream>
#include<fstream>
#include<iomanip>
#include<random>
#include<vector>
#include<chrono>
#include<algorithm>
#include"player.h"

/*using 함수를 이용하여 재정의*/
using load = std::ifstream;
using save = std::ofstream;
using vector = std::vector<Player>;
using my_iterator = std::vector<Player>::iterator;
/*열거형*/
enum Game { END = 0, CONTINUE = 1 };

void dataSave(vector&);
void dataLoad(load&, vector&);
void showRanking(vector&);
int main() {
	bool game = CONTINUE;
	char answer;
	load load("PlayerData.txt");
	vector vector;
	vector.reserve(Player::USER_MAX);

	std::random_device rd;
	std::default_random_engine dre{ rd() }; /*메르센 트위스터엔진*/
	std::normal_distribution<float>nd(18500000, 18500000 / 2);
	my_iterator my_iter;

	/*저장된 파일이 없으면 100,000명의 플레이어를 생성한다.*/
	if (!load.is_open()) {
		std::cout << "파일이 존재하지 않습니다." << std::endl;
		/*임시 본인*/
		vector.emplace_back(Player(Player::ME, 999999, 999999));
		my_iter = vector.begin();
		for (int i = 0; i <= Player::USER_COUNT; i++) {
			unsigned int cookie_score;
			unsigned int escap_score;
			cookie_score = static_cast<unsigned int>(nd(rd));
			escap_score = static_cast<unsigned int>(nd(rd));

			vector.emplace_back(Player(i, cookie_score, escap_score));
		}
	}

	/*파일이 있음Load함수 호출*/
	else {
		std::cout << "파일이 존재합니다." << std::endl;
		dataLoad(load, vector);
	}

	/*프로그램은 이 과정을 반복할 수 있어야한다.*/
	while (game) {

		/*쿠키런 플레이를 위한 10만명벡터 셔플*/
		std::shuffle(vector.begin() + 1, vector.end(), rd);

		/*1만명 쿠키런 플레이 */
		std::transform(vector.begin() + 1, vector.begin() + 10000, vector.begin(), [&](Player& temp) {

			temp.setCookieScroe(static_cast<unsigned int>(nd(rd)));
			temp.compereScore();
			return temp;
		});

		/* 뗴탈출 플레이를 위한 10만명벡터 셔플*/
		std::shuffle(vector.begin() + 1, vector.end(), rd);

		/*1만명 떼탈출 플레이 */
		std::transform(vector.begin() + 1, vector.begin() + 10000, vector.begin(), [&](Player& temp) {

			temp.setEscapeScore(static_cast<unsigned int>(nd(rd)));
			temp.compereScore();
			return temp;
		});
		/*나 자신의 값 다시 주기(플레이 하는 개념)*/
		my_iter->setEscapeScore(static_cast<unsigned int>(nd(rd)));
		my_iter->setCookieScroe(static_cast<unsigned int>(nd(rd)));
		my_iter->compereScore();

		/*10만명 순위 정렬*/
		showRanking(vector);

		/*나찾기*/
		my_iter = std::find(vector.begin(), vector.end(), Player::ME);

		std::cout << "내점수" << my_iter->getCookieScore() << std::endl;
		if ((my_iter + 1) > vector.begin())
			std::cout << "내 앞점수" << (my_iter - 1)->getCookieScore() << std::endl;
		if ((my_iter + 1) < vector.end())
			std::cout << "내 뒤점수" << (my_iter + 1)->getCookieScore() << std::endl;

		/*계속 할 것인지 물어봄*/
		std::cout << "계속 하시겠습니까?:(Y/N)";
		std::cin >> answer;

		if (answer == 'Y' || answer == 'y')
			continue;
		else if (answer == 'N' || answer == 'n') {
			dataSave(vector);
			game = END;
		}
	}
}

/*데이터세이브 함수*/
void dataSave(vector& vector) {
	save save_file("PlayerData.txt");
	vector::iterator iter;
	std::cout << "저장중.....";
	for (iter = vector.begin(); iter != vector.end(); ++iter)
		save_file << (*iter) << std::endl;
	std::cout << std::endl;
}
/*데이터로드 함수*/
void dataLoad(load& load_file, vector& vector) {
	Player temp;
	std::cout << "불러오는중.....";
	for (int i = 0; i <= Player::USER_COUNT + 1; i++) {
		load_file >> temp;
		vector.push_back(temp);
	}
	std::cout << std::endl;
}

/*랭킹출력 함수*/
void showRanking(vector& vector) {

	/*쿠키런*/
	std::sort(vector.begin(), vector.end(), [](const auto& left, const auto& right) {
		return left.getCookieScore() > right.getCookieScore();
	});


	/*탈출*/
	std::sort(vector.begin(), vector.end(), [](const auto& left, const auto& right) {
		return left.getEscapeScore() > right.getEscapeScore();
	});

}

