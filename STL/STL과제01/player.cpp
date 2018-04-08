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
다시 찾아보면 좋을 키워드목록
1.전방선언
2.함수오브젝트
*/


 /*
 1. map에서 셔플한 값 1만개를 벡터에 옮긴뒤 sort를 진행한다.

 2. vector에서 만든 10만개 데이터를 랜덤으로 접근하면서 중복이 허용안되는 map을 이용한다.
 

 */