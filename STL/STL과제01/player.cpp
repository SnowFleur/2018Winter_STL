#include"player.hpp"



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

/*UID�� ��ȯ���ִ� ����Լ�*/
int Player::getUid()const {
	return this->uid_;
}

/*myRank�� ��ȯ���ִ� ����Լ�*/
int Player::getRank()const {
	return this->myRank_;
}
void Player::setRank(const int rank) {
	this->myRank_ = rank;
}

/*Cookie������ �������ִ� ����Լ�*/
void Player:: setCookieScroe(const int random) {
	this->cookieScore_ = random;
}

/*Esacpe������ �������ִ� ����Լ�*/
void Player::setEscapeScore(const int random) {
	this->escapeScore_ = random;
}




/*���� ������ ���Ͽ� �� ũ�� �ٲٴ� ��� �Լ�*/
void Player::compereScore() {
	if (this->oldCookieScore_ < this->cookieScore_)
		this->oldCookieScore_ = this->cookieScore_;
		
	if (this->oldEscapeScore_ < this->escapeScore_)
		this->oldEscapeScore_ = this->escapeScore_;
}


/*operator== ������ �����ε�*/
bool Player::operator==(const int me)const {

	return me == this->uid_;
}

/*operator>> ������ �����ε�*/
istream& operator>>(istream& is, Player& temp) {
	is >> temp.uid_ >> temp.cookieScore_ >> temp.escapeScore_;
	is >> temp.oldCookieScore_ >> temp.oldEscapeScore_;
	return is;
}

/*operator<< ������ �����ε�*/
ostream& operator<<(ostream& os, const Player& temp) {

	//os <<"    �ּҰ�"<< &temp<<"    ID"<<temp.uid_;
	/*UID,��Ű����,��Ż������,������Ű����,������Ż������,��ũ*/
	//os << std::setw(10) << temp.uid_ << " " << std::setw(10) << temp.cookieScore_ << " " << temp.escapeScore_;
	//os << " " << temp.oldCookieScore_ << " " << temp.oldEscapeScore_ << " " << temp.myRank_;
	os << " " << temp.uid_ << " " << temp.cookieScore_ << " " << temp.myRank_;

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
 ���ͼ��� �� 1���� ��Ű�� �÷���
    	|
    	v
 ���ͼ��� �� 1���� ��Ż�� �÷���
		|
		v
	  ����
		|
		v
	 �� ã��
    

*/