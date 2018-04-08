#include<iostream>
#include<fstream>
#include<map>
#include<unordered_map>
#include<random>
#include<vector>
#include<algorithm>
#include"player.h"

/*using 함수를 이용하여 재정의*/
using Load = std::ifstream; 
using Save = std::ofstream;
using Map = std::map<int,Player>;
using Vector = std::vector<Player>;

/*열거형*/
enum Game { END=0, CONTINUE=1};
enum PlayerCount {USER_COUNT=99999,ME= 100000,USER_MAX=100000};





std::default_random_engine& rng() {
	static std::default_random_engine engine{ std::random_device()() };
	return engine;
}







void DataSave(Vector&);
void DataLoad(Load&, Vector&);
void ShowRanking(Vector&);
int main() {
	bool game = CONTINUE;
	char answer;
	Load load("PlayerData.txt");
	Vector vector;
	vector.reserve(USER_MAX);


	std::random_device rd;
	std::default_random_engine dre{ rd() }; /*메르센 트위스터엔진*/
	std::normal_distribution<float>nd(18500000, 18500000 / 2);





	/*저장된 파일이 없으면 100,000명의 플레이어를 생성한다.*/
	if (! load.is_open() ) {
		std::cout << "파일이 존재하지 않습니다." << std::endl;

		for (int i = 0; i <= USER_COUNT; i++) {
			int cookie_score;
			int escap_score;
			cookie_score = static_cast<int>(nd(rd));
			escap_score = static_cast<int>(nd(rd));

			vector.push_back(Player(i, cookie_score, escap_score));
		}
		vector.push_back(Player(100000, 999999, 999999));

	}

	/*파일이 있음Load함수 호출*/
	else {
		std::cout << "파일이 존재합니다." << std::endl;
		DataLoad(load, vector);

		/*반복자*/
		Vector::iterator iter;
		
		/*임시 출력 확인 for문*/

		std::sort(vector.begin(), vector.end(), [](auto left, auto& right ) {
			
		});


		for (iter = vector.begin(); iter!=vector.end(); iter++) {
			static int i = 0;
			std::cout << (*iter) << std::endl;
			i++;

			if (i > 10)
				break;
		}
		std::cout << "---------------정렬전 데이터---------------" << std::endl;
		ShowRanking(vector);
		std::cout << "---------------정렬후 데이터---------------" << std::endl;

		game = END;
	}

	
	

	/*프로그램은 이 과정을 반복할 수 있어야한다.*/
	while (game) {
		
		/*임시 랜덤값 호출 for문*/
		for (int i = 0; i<100; i++)
			std::cout << (int)nd(dre) << std::endl;
		

		/*계속 할 것인지 물어봄*/
		std::cout << "계속 하시겠습니까?:(Y/N)";
		std::cin >> answer;



		if (answer == 'Y' || answer == 'y')
			continue;
		else if (answer == 'N' || answer == 'n') {
			DataSave(vector);
			game = END;
		}


	}


	/*랜덤엔진을 사용하여 플레이어의 점수를 생성한다.*/





}

/*데이터세이브 함수*/
void DataSave(Vector& vector) {
	Save save("PlayerData.txt");
	Vector::iterator iter;
	std::cout << "저장중.....";
	for (iter = vector.begin(); iter != vector.end(); ++iter)
		save << (*iter) << std::endl;
	std::cout << std::endl;
}
/*데이터로드 함수*/
void DataLoad(Load& load,Vector& vector) {
	Player temp;  
	std::cout << "불러오는중.....";
	for (int i = 0; i <= USER_COUNT+1; i++) {
		load >> temp;
		vector.push_back(temp);
	}
	std::cout << std::endl;
}

/*랭킹출력 함수*/
void ShowRanking(Vector& vector) {
	





}

