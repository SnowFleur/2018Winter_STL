#include"player.h"
#include<iostream>
Player::Player() {
}


Player::Player(int uid, int cookie_score,int escape_score):
	uid_(uid),cookie_score_(cookie_score),escape_score_(escape_score)
{}

bool Player::operator<(const Player& temp) {
	return this->cookie_score_ <= temp.cookie_score_;
}
ostream& operator<<(ostream& os, Player& temp) {

	os <<temp.uid_ << " " <<temp.cookie_score_ << " "<< temp.escape_score_;
	return os;
}
 istream& operator>>(istream& is, Player& temp) {
	 is >> temp.uid_ >> temp.cookie_score_ >> temp.escape_score_;
	 return is;

 }



/*
�ٽ� ã�ƺ��� ���� Ű������
1.���漱��
2.�Լ�������Ʈ
*/


 /*
 1. map���� ������ �� 1������ ���Ϳ� �ű�� sort�� �����Ѵ�.

 2. vector���� ���� 10���� �����͸� �������� �����ϸ鼭 �ߺ��� ���ȵǴ� map�� �̿��Ѵ�.
 

 */