#pragma once
#include<ostream>
using ostream = std::ostream;
using istream = std::istream;

class Player {

private:
	int uid_;
	int cookieScore_;
	int escapeScore_;
	int oldCookieScore_=0;
	int oldEscapeScore_=0;
public:
	enum PlayerCount { USER_COUNT = 100000, ME = 0, USER_MAX = 1000000 };

	Player();
	Player(int, int, int);

	int getUid()const;
	int getCookieScore()const;
	int getEscapeScore()const;
	void compereScore();
	void setCookieScroe(int);
	void setEscapeScore(int);
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
���� ����
1. �ݺ��ڰ� ���� ã�� ����

*/