#pragma once
#include<ostream>
#include<iostream>
#include<iomanip>

using ostream = std::ostream;
using istream = std::istream;

class Game;
class Player {

private:
	int uid_;  //id
	int cookieScore_=0;  //��Ű�Ʒü� ���� 
	int escapeScore_=0;  //��Ż�� ���� 
	int oldCookieScore_=0;  // ���� ����
	int oldEscapeScore_=0;  //���� ����
	int myRank_ = 0;  //�÷��̾� ���
public:
	enum PlayerCount { USER_COUNT = 100000, ME = 0, USER_MAX = 1000000 };

	Player();
	Player(int, int, int);
	~Player() { std::cout << "�÷��̾� �Ҹ��� ȣ��" << std::endl; }
	int getUid()const;
	int getCookieScore()const;
	int getEscapeScore()const;
	int getRank()const;
	void setRank(const int);
	void setCookieScroe(const int);
	void setEscapeScore(const int);
	
	void compereScore();
	bool operator==(const int)const;

	friend ostream& operator<<(ostream&, const Player&);
	friend istream& operator>>(istream&, Player&);

};

/*
std::cout << "��������" << std::endl;
auto start = std::chrono::high_resolution_clock::now();

std::chrono::duration<double> elapsed = std::chrono::high_resolution_clock::now() - start;

std::cout << "�ɸ��ð�:" << elapsed.count() << std::endl;


�ؾ��Ұ�
1.��������� �� �õ����� �ֱ� Ŭ����
2.���� ���̺긦 ���ؼ� ���� �� �ٲ���� Ȯ��  txt  
3.�Լ��� ����� main ������ ���߱�
4.�ٽ� ���� �̾����� �������� �� ������Ȯ��
5.���Ժ��� ����ó��
*/

/*
��ũ ���͸� ���� ���ϰ� ��������� ��������Ű�� ����ȯ??

*/