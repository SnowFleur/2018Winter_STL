#include"Cookie.hpp"

Cookie::Cookie(int score) :cookieScore_(score), oldCookieScore_(0) {}


Cookie::~Cookie() {

	std::cout << "��Ű �Ҹ��� ȣ��" << std::endl;
}


int Cookie::getScore()const {
	std::cout << "������ �׽�Ʈ ��Ű�Ʒü�" << std::endl;

	return this->cookieScore_;
}

void Cookie::setScore(const int score) {
	std::cout << "������ �׽�Ʈ ��Ű�Ʒü�" << std::endl;
	this->cookieScore_ = score;
}


void Cookie::compereScore() {
	if (this->oldCookieScore_ < this->cookieScore_)
		this->oldCookieScore_ = this->cookieScore_;
}