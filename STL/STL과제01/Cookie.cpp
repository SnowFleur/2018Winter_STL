#include"Cookie.hpp"

Cookie::Cookie(int score) :cookieScore_(score), oldCookieScore_(0) {}


Cookie::~Cookie() {

	std::cout << "ÄíÅ° ¼Ò¸êÀÚ È£Ãâ" << std::endl;
}


int Cookie::getScore()const {
	std::cout << "´ÙÇü¼º Å×½ºÆ® ÄíÅ°ÈÆ·Ã¼Ò" << std::endl;

	return this->cookieScore_;
}

void Cookie::setScore(const int score) {
	std::cout << "´ÙÇü¼º Å×½ºÆ® ÄíÅ°ÈÆ·Ã¼Ò" << std::endl;
	this->cookieScore_ = score;
}


void Cookie::compereScore() {
	if (this->oldCookieScore_ < this->cookieScore_)
		this->oldCookieScore_ = this->cookieScore_;
}