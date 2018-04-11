#include<iostream>
#include<fstream>
#include<map>
#include<unordered_map>
#include<random>
#include<vector>
#include<algorithm>
#include"player.h"

/*using �Լ��� �̿��Ͽ� ������*/
using load = std::ifstream; 
using save = std::ofstream;
using vector = std::vector<Player>;
using my_iterator = std::vector<Player>::iterator;
/*������*/
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
	std::default_random_engine dre{ rd() }; /*�޸��� Ʈ�����Ϳ���*/
	std::normal_distribution<float>nd(18500000, 18500000 / 2);
	my_iterator my_iter;


	

	/*����� ������ ������ 100,000���� �÷��̾ �����Ѵ�.*/
	if (! load.is_open() ) {
		std::cout << "������ �������� �ʽ��ϴ�." << std::endl;

		for (int i = 0; i <= USER_COUNT; i++) {
			unsigned int cookie_score;
			unsigned int escap_score;
			cookie_score = static_cast<unsigned int>(nd(rd));
			escap_score = static_cast<unsigned int>(nd(rd));

			vector.push_back(Player(i, cookie_score, escap_score));
		}
		/*�ӽ� ����*/
		vector.push_back(Player(100000, 999999, 999999));
		my_iter  = vector.end()-1 ;

		std::cout << "��" <<*my_iter << std::endl;
		std::cout << "-1�ּ�" << *(my_iter-1) << std::endl;
		std::cout << "�ּ�" << vector[100000-1] << std::endl;
		std::cout << "�ּ�" << vector[100000] << std::endl;



	}

	/*������ ����Load�Լ� ȣ��*/
	else {
		std::cout << "������ �����մϴ�." << std::endl;
		dataLoad(load, vector);

		/*�ݺ���*/
		 vector::const_iterator iter;
		






		for ( iter = vector.cbegin(); iter!=vector.cend(); ++iter) {
			static int i = 0;
			std::cout << *iter << std::endl;
			i++;

			if (i > 10)
				break;
		}
		std::cout << "---------------������ ������---------------" << std::endl;
		showRanking(vector);
		std::cout << "---------------������ ������---------------" << std::endl;


		for (iter = vector.cbegin(); iter != vector.cend(); ++iter) {
			static int i = 0;
			std::cout << *iter << std::endl;
			i++;

			if (i > 10)
				break;
		}




		// game = END;



	}

	
	

	/*���α׷��� �� ������ �ݺ��� �� �־���Ѵ�.*/
	while (game) {



		/*���� ����*/
	//	std::shuffle(vector.begin(), vector.end(), rd);

		/*1���� ���������*/

		/*��Ű*/
		std::transform(vector.begin(), vector.begin() + 10000, vector.begin(), [&](Player& temp) {

			temp.setCookieScroe(static_cast<unsigned int>(nd(rd)));
			return temp;
		});

		/*�ٽ� ����*/
	//	showRanking(vector);


		std::cout << "��" << *my_iter << std::endl;


		/*��� �� ������ ���*/
		std::cout << "��� �Ͻðڽ��ϱ�?:(Y/N)";
		std::cin >> answer;



		if (answer == 'Y' || answer == 'y')
			continue;
		else if (answer == 'N' || answer == 'n') {
			dataSave(vector);
			game = END;
		}


	}


	/*���������� ����Ͽ� �÷��̾��� ������ �����Ѵ�.*/





}

/*�����ͼ��̺� �Լ�*/
void dataSave(vector& vector) {
	save save_file("PlayerData.txt");
	vector::iterator iter;
	std::cout << "������.....";
	for (iter = vector.begin(); iter != vector.end(); ++iter)
		save_file << (*iter) << std::endl;
	std::cout << std::endl;
}
/*�����ͷε� �Լ�*/
void dataLoad(load& load_file,vector& vector) {
	Player temp;  
	std::cout << "�ҷ�������.....";
	for (int i = 0; i <= USER_COUNT+1; i++) {
		load_file >> temp;
		vector.push_back(temp);
	}
	std::cout << std::endl;
}

/*��ŷ��� �Լ�*/
void showRanking(vector& vector) {
	
	/*��Ű��*/
	std::sort(vector.begin(), vector.end(),[](const auto& left,const auto& right) {
		return left.getCookieScore() > right.getCookieScore();
	});
	

	/*Ż��*/
	std::sort(vector.begin(), vector.end(), [](const auto& left, const auto& right) {
		return left.getEscapeScore() > right.getEscapeScore();
	});

}

