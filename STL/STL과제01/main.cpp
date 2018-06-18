#include<iostream>
#include<fstream>
#include<iomanip>
#include<random>
#include<vector>
#include<chrono>
#include<algorithm>
#include<memory>
#include"player.hpp"
#include"Game.hpp"
#include"Escape.hpp"
#include"Cookie.hpp"
/*using �Լ��� �̿��Ͽ� ������*/
using load = std::ifstream;
using save = std::ofstream;
// using vector = std::vector<Player>;
//using my_iterator = std::vector<Player>::iterator;
/*������*/
enum GAME { END = 0, CONTINUE = 1 };



using pair = std::pair<Player, Game*>;
using vector = std::vector<pair>;

void dataSave(vector&);
void dataLoad(load&, vector&);
void showRanking(vector&);


int main() {
	
	std::unique_ptr<Game> p = std::make_unique<Game>(new Cookie,new Escape);



	std::vector<pair> v;
	



	//gamemanager.showVector();



	

	//bool game = CONTINUE;
	//char answer;
	//load load("PlayerData.txt");
	//vector vector;
	//vector.reserve(Player::USER_MAX);

	//std::random_device rd;
	//std::default_random_engine dre{ rd() }; /*�޸��� Ʈ�����Ϳ���*/
	//std::normal_distribution<float>nd(18500000, 18500000 / 2);
	//my_iterator my_iter;

	///*����� ������ ������ 100,000���� �÷��̾ �����Ѵ�.*/
	//if (!load.is_open()) {
	//	std::cout << "������ �������� �ʽ��ϴ�." << std::endl;
	//	/*�ӽ� ����*/
	//	vector.emplace_back(Player(Player::ME,1500000, 1500000));
	//	my_iter = vector.begin();

	//	for (int i = 1; i <= Player::USER_COUNT; ++i) {
	//		unsigned int cookie_score;
	//		unsigned int escap_score;
	//		cookie_score = static_cast<unsigned int>(nd(rd));
	//		escap_score = static_cast<unsigned int>(nd(rd));

	//		vector.emplace_back(Player(i, cookie_score, escap_score));
	//	}

	//}


	///*������ ����Load�Լ� ȣ��*/
	//else {
	//	std::cout << "������ �����մϴ�." << std::endl;
	//	dataLoad(load, vector);
	//}

	///*���α׷��� �� ������ �ݺ��� �� �־���Ѵ�.*/
	//while (game) {  //���߿� ���ξ� �����غ���




	//	/*��Ű�� �÷��̸� ���� 10������ ����*/
	//	std::shuffle(vector.begin() + 1, vector.end(), rd);


	//	std::cout << "������" << my_iter->getCookieScore() << std::endl;
	//	std::cout << "�ּҰ�:" << my_iter._Ptr << std::endl;
	//	std::cout <<"���Ͱ�:"<< vector[0] << std::endl;

	//	/*1���� ��Ű�� �÷��� */
	//	std::transform(vector.begin() + 1, vector.begin() + 10000, vector.begin()+1, [&](Player& temp) {

	//		temp.setCookieScroe(static_cast<unsigned int>(nd(rd)));
	//		temp.compereScore();
	//		return temp;
	//	});
	//

	//	/* ��Ż�� �÷��̸� ���� 10������ ����*/
	//	std::shuffle(vector.begin() + 1, vector.end(), rd);

	//	/*1���� ��Ż�� �÷��� */
	//	std::transform(vector.begin() + 1, vector.begin() + 10000, vector.begin()+1, [&](Player& temp) {

	//		temp.setEscapeScore(static_cast<unsigned int>(nd(rd)));
	//		temp.compereScore();
	//		return temp;
	//	});

	//	/*�� �ڽ��� �� �ٽ� �ֱ�(�÷��� �ϴ� ����)*/
	//*	my_iter->setEscapeScore(static_cast<unsigned int>(nd(rd)));
	//	my_iter->setCookieScroe(static_cast<unsigned int>(nd(rd)));
	//	my_iter->compereScore();*/


	//	/*��Ű�� ��ŷ����*/
	//



	//	/*10���� ���� ����*/
	//	showRanking(vector);








	//	/*��� �� ������ ���*/
	//	std::cout << "��� �Ͻðڽ��ϱ�?:(Y/N)";
	//	std::cin >> answer;

	//	if (answer == 'Y' || answer == 'y')
	//		continue;
	//	else if (answer == 'N' || answer == 'n') {
	//		dataSave(vector);
	//		game = END;
	//	}
	//}
}
//
///*�����ͼ��̺� �Լ�*/
//void dataSave(vector& vector) {
//	save save_file("PlayerData.txt");
//	vector::iterator iter;
//	std::cout << "������.....";
//	for (iter = vector.begin(); iter != vector.end(); ++iter)
//		save_file << (*iter) << std::endl;
//	std::cout << std::endl;
//}
//
///*�����ͷε� �Լ�*/
//void dataLoad(load& load_file, vector& vector) {
//	Player temp;
//	std::cout << "�ҷ�������.....";
//	for (int i = 0; i <= Player::USER_COUNT + 1; i++) {
//		load_file >> temp;
//		vector.push_back(temp);
//	}
//	std::cout << std::endl;
//
//
//}
//
///*��ŷ��� �Լ�*/
//void showRanking(vector& vector) {
//
//
//
//
//	/*��Ű�Ʒü� ��ũ����*/
//	std::sort(vector.begin(), vector.end(), [](const auto& left, const auto& right) {
//		return left.getCookieScore() > right.getCookieScore();
//	});
//
//
//
//
//	/*��Ż�� ��ũ����*/
//	std::sort(vector.begin(), vector.end(), [](const auto& left, const auto& right) {
//		return left.getEscapeScore() > right.getEscapeScore();
//	});
//
//
//	/*�ӽ� ��ũ ����*/
//	for (auto iter = vector.begin(); iter != vector.end(); ++iter) {
//		int rank=0;
//		iter->setRank(++rank);
//	}
//
//	/*��ã��*/
//	my_iterator my_iter = std::find(vector.begin(), vector.end(), Player::ME);
//
//
//
//
//
//	std::cout << "----------------------------------------------------" << std::endl;
//	std::cout << "------------------��Ű�Ʒü� ����ǥ---------------------" << std::endl;
//	std::cout << "----------------------------------------------------" << std::endl;
//
//	
//
//	/*��Ű ���� ���*/
//	 std::cout <<"���� ���:"<<my_iter->getRank()<< "������" << my_iter->getCookieScore() << std::endl;
//	if (  my_iter != vector.begin())
//		std::cout << "�� ������" << (my_iter - 1)->getCookieScore() << std::endl;
//	if ((my_iter + 1) < vector.end())
//		std::cout << "�� ������" << (my_iter + 1)->getCookieScore() << std::endl;
//
//
//	std::cout << "----------------------------------------------------" << std::endl;
//	std::cout << "------------------��Ż��� ����ǥ---------------------" << std::endl;
//	std::cout << "----------------------------------------------------" << std::endl;
//
//	/*��Ż�� ���� ���*/
//	std::cout << "������" << my_iter->getEscapeScore() << std::endl;
//	if (my_iter != vector.begin())
//		std::cout << "�� ������" << (my_iter - 1)->getEscapeScore() << std::endl;
//	if ((my_iter + 1) < vector.end())
//		std::cout << "�� ������" << (my_iter + 1)->getEscapeScore() << std::endl;
//
//
//
//}
//
