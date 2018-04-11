#include"player.h"
#include<iostream>

/*디폴트 생성자*/
Player::Player() {
}

/*인자값이 3개인 생성자*/
Player::Player(int uid, int cookie_score,int escape_score):
	uid_(uid),cookieScore_(cookie_score),escapeScore_(escape_score)
{}

/*Cookie점수를 반환해주는 멤버함수*/
int Player::getCookieScore()const{
	return this->cookieScore_;
}

/*떼탈출점수를 반환해주는 멤버함수*/
int Player::getEscapeScore()const {
	return this->escapeScore_;
}


/*Cookie점수를 저장해주는 멤버함수*/
void Player:: setCookieScroe(int random) {
	this->cookieScore_ = random;
}

/*Esacpe점수를 저장해주는 멤버함수*/
void Player::setEscapeScore(int random) {
	this->escapeScore_ = random;
}


/*operator= 연산자 오버로딩*/
//Player& Player:: operator=(const Player&) {
//
//}


/*operator>> 연산자 오버로딩*/
istream& operator>>(istream& is, Player& temp) {
	is >> temp.uid_ >> temp.cookieScore_ >> temp.escapeScore_;
	return is;
}

/*operator<< 연산자 오버로딩*/
ostream& operator<<(ostream& os, const Player& temp) {

	os << &temp;
	//os << temp.uid_ << " " << temp.cookieScore_ << " " << temp.escapeScore_;
	return os;
}





 /*
 추후 수정혹은 생각해볼것


 1.클래스 멤버변수 용량 최적화 
 2.Move

 */

 /*
 남은 목록

 1.정규분포 범위

 */



/*
1. 나를 뽑기부터 하고

불러올때가 문제임(find 써야할거 같음)

2. 그다음 상위%를 내 기준으로 함


sort는 포인터 정렬이 아닌 값 정렬임 이터레이터 가 가리키고 있는 주소값은 동일하지만
값은 바뀜

  순서
  10만명 랜덤값 생성
    	|
    	v
      정렬
    	|
    	v
  1만명 랜덤값 생성
		|
		v
	  정렬
		|
		v
	 나 찾기
    

*/