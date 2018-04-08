#include<iostream>
#include<fstream>
#include<map>
#include<unordered_map>
#include<random>
#include<vector>
#include<algorithm>
#include"player.h"

/*using �Լ��� �̿��Ͽ� ������*/
using Load = std::ifstream; 
using Save = std::ofstream;
using Map = std::map<int,Player>;
using Vector = std::vector<Player>;

/*������*/
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
	std::default_random_engine dre{ rd() }; /*�޸��� Ʈ�����Ϳ���*/
	std::normal_distribution<float>nd(18500000, 18500000 / 2);





	/*����� ������ ������ 100,000���� �÷��̾ �����Ѵ�.*/
	if (! load.is_open() ) {
		std::cout << "������ �������� �ʽ��ϴ�." << std::endl;

		for (int i = 0; i <= USER_COUNT; i++) {
			int cookie_score;
			int escap_score;
			cookie_score = static_cast<int>(nd(rd));
			escap_score = static_cast<int>(nd(rd));

			vector.push_back(Player(i, cookie_score, escap_score));
		}
		vector.push_back(Player(100000, 999999, 999999));

	}

	/*������ ����Load�Լ� ȣ��*/
	else {
		std::cout << "������ �����մϴ�." << std::endl;
		DataLoad(load, vector);

		/*�ݺ���*/
		Vector::iterator iter;
		
		/*�ӽ� ��� Ȯ�� for��*/

		std::sort(vector.begin(), vector.end(), [](auto left, auto& right ) {
			
		});


		for (iter = vector.begin(); iter!=vector.end(); iter++) {
			static int i = 0;
			std::cout << (*iter) << std::endl;
			i++;

			if (i > 10)
				break;
		}
		std::cout << "---------------������ ������---------------" << std::endl;
		ShowRanking(vector);
		std::cout << "---------------������ ������---------------" << std::endl;

		game = END;
	}

	
	

	/*���α׷��� �� ������ �ݺ��� �� �־���Ѵ�.*/
	while (game) {
		
		/*�ӽ� ������ ȣ�� for��*/
		for (int i = 0; i<100; i++)
			std::cout << (int)nd(dre) << std::endl;
		

		/*��� �� ������ ���*/
		std::cout << "��� �Ͻðڽ��ϱ�?:(Y/N)";
		std::cin >> answer;



		if (answer == 'Y' || answer == 'y')
			continue;
		else if (answer == 'N' || answer == 'n') {
			DataSave(vector);
			game = END;
		}


	}


	/*���������� ����Ͽ� �÷��̾��� ������ �����Ѵ�.*/





}

/*�����ͼ��̺� �Լ�*/
void DataSave(Vector& vector) {
	Save save("PlayerData.txt");
	Vector::iterator iter;
	std::cout << "������.....";
	for (iter = vector.begin(); iter != vector.end(); ++iter)
		save << (*iter) << std::endl;
	std::cout << std::endl;
}
/*�����ͷε� �Լ�*/
void DataLoad(Load& load,Vector& vector) {
	Player temp;  
	std::cout << "�ҷ�������.....";
	for (int i = 0; i <= USER_COUNT+1; i++) {
		load >> temp;
		vector.push_back(temp);
	}
	std::cout << std::endl;
}

/*��ŷ��� �Լ�*/
void ShowRanking(Vector& vector) {
	





}

