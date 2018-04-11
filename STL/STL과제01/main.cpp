#include<iostream>
#include<fstream>
#include<map>
#include<unordered_map>
#include<random>
#include<vector>
#include<algorithm>
#include"player.h"

/*using 함수를 이용하여 재정의*/
using load = std::ifstream; 
using save = std::ofstream;
using vector = std::vector<Player>;
using my_iterator = std::vector<Player>::iterator;
/*열거형*/
enum Game { END=0, CONTINUE=1};
enum PlayerCount {USER_COUNT=99999,ME= 100000,USER_MAX=100000};





std::default_random_engine& rng() {
	static std::default_random_engine engine{ std::random_device()() };
	return engine;
}







void dataSave(vector&);
void dataLoad(load&, vector&);
void showRanking(vector&);
int main() {
	bool game = CONTINUE;
	char answer;
	load load("PlayerData.txt");
	vector vector;
	vector.reserve(USER_MAX);


	std::random_device rd;
	std::default_random_engine dre{ rd() }; /*메르센 트위스터엔진*/
	std::normal_distribution<float>nd(18500000, 18500000 / 2);
	my_iterator my_iter;


	

	/*저장된 파일이 없으면 100,000명의 플레이어를 생성한다.*/
	if (! load.is_open() ) {
		std::cout << "파일이 존재하지 않습니다." << std::endl;

		for (int i = 0; i <= USER_COUNT; i++) {
			unsigned int cookie_score;
			unsigned int escap_score;
			cookie_score = static_cast<unsigned int>(nd(rd));
			escap_score = static_cast<unsigned int>(nd(rd));

			vector.push_back(Player(i, cookie_score, escap_score));
		}
		/*임시 본인*/
		vector.push_back(Player(100000, 999999, 999999));
		my_iter  = vector.end()-1 ;

		std::cout << "나" <<*my_iter << std::endl;
		std::cout << "-1주소" << *(my_iter-1) << std::endl;
		std::cout << "주소" << vector[100000-1] << std::endl;
		std::cout << "주소" << vector[100000] << std::endl;



	}

	/*파일이 있음Load함수 호출*/
	else {
		std::cout << "파일이 존재합니다." << std::endl;
		dataLoad(load, vector);

		/*반복자*/
		 vector::const_iterator iter;
		






		for ( iter = vector.cbegin(); iter!=vector.cend(); ++iter) {
			static int i = 0;
			std::cout << *iter << std::endl;
			i++;

			if (i > 10)
				break;
		}
		std::cout << "---------------정렬전 데이터---------------" << std::endl;
		showRanking(vector);
		std::cout << "---------------정렬후 데이터---------------" << std::endl;


		for (iter = vector.cbegin(); iter != vector.cend(); ++iter) {
			static int i = 0;
			std::cout << *iter << std::endl;
			i++;

			if (i > 10)
				break;
		}




		// game = END;



	}

	
	

	/*프로그램은 이 과정을 반복할 수 있어야한다.*/
	while (game) {



		/*벡터 셔플*/
	//	std::shuffle(vector.begin(), vector.end(), rd);

		/*1만개 랜덤만들고*/

		/*쿠키*/
		std::transform(vector.begin(), vector.begin() + 10000, vector.begin(), [&](Player& temp) {

			temp.setCookieScroe(static_cast<unsigned int>(nd(rd)));
			return temp;
		});

		/*다시 정렬*/
	//	showRanking(vector);


		std::cout << "나" << *my_iter << std::endl;


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


	/*랜덤엔진을 사용하여 플레이어의 점수를 생성한다.*/





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
void dataLoad(load& load_file,vector& vector) {
	Player temp;  
	std::cout << "불러오는중.....";
	for (int i = 0; i <= USER_COUNT+1; i++) {
		load_file >> temp;
		vector.push_back(temp);
	}
	std::cout << std::endl;
}

/*랭킹출력 함수*/
void showRanking(vector& vector) {
	
	/*쿠키런*/
	std::sort(vector.begin(), vector.end(),[](const auto& left,const auto& right) {
		return left.getCookieScore() > right.getCookieScore();
	});
	

	/*탈출*/
	std::sort(vector.begin(), vector.end(), [](const auto& left, const auto& right) {
		return left.getEscapeScore() > right.getEscapeScore();
	});

}

