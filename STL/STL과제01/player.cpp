#include"player.h"
#include<iostream>

/*����Ʈ ������*/
Player::Player() {
}

/*���ڰ��� 3���� ������*/
Player::Player(int uid, int cookie_score,int escape_score):
	uid_(uid),cookieScore_(cookie_score),escapeScore_(escape_score)
{}

/*Cookie������ ��ȯ���ִ� ����Լ�*/
int Player::getCookieScore()const{
	return this->cookieScore_;
}

/*��Ż�������� ��ȯ���ִ� ����Լ�*/
int Player::getEscapeScore()const {
	return this->escapeScore_;
}


/*Cookie������ �������ִ� ����Լ�*/
void Player:: setCookieScroe(int random) {
	this->cookieScore_ = random;
}

/*Esacpe������ �������ִ� ����Լ�*/
void Player::setEscapeScore(int random) {
	this->escapeScore_ = random;
}


/*operator= ������ �����ε�*/
//Player& Player:: operator=(const Player&) {
//
//}


/*operator>> ������ �����ε�*/
istream& operator>>(istream& is, Player& temp) {
	is >> temp.uid_ >> temp.cookieScore_ >> temp.escapeScore_;
	return is;
}

/*operator<< ������ �����ε�*/
ostream& operator<<(ostream& os, const Player& temp) {

	os << &temp;
	//os << temp.uid_ << " " << temp.cookieScore_ << " " << temp.escapeScore_;
	return os;
}





 /*
 ���� ����Ȥ�� �����غ���


 1.Ŭ���� ������� �뷮 ����ȭ 
 2.Move

 */

 /*
 ���� ���

 1.���Ժ��� ����

 */



/*
1. ���� �̱���� �ϰ�

�ҷ��ö��� ������(find ����Ұ� ����)

2. �״��� ����%�� �� �������� ��


sort�� ������ ������ �ƴ� �� ������ ���ͷ����� �� ����Ű�� �ִ� �ּҰ��� ����������
���� �ٲ�

  ����
  10���� ������ ����
    	|
    	v
      ����
    	|
    	v
  1���� ������ ����
		|
		v
	  ����
		|
		v
	 �� ã��
    

*/