#include"Escape.hpp"

Escape::Escape(int score) :escapeScore_(score), oldEscapeScore_(0) {}

Escape::~Escape() {
	std::cout << "¶¼Å»Ãâ ¼Ò¸êÀÚ È£Ãâ" << std::endl;
}

 int Escape::getScore()const {
	 std::cout << "´ÙÇü¼º Å×½ºÆ® ¶¼Å»Ãâ" << std::endl;

	 return this->escapeScore_;
}

void Escape::setScore(const int score) {
	this->escapeScore_ = score;
	std::cout << "´ÙÇü¼º Å×½ºÆ® ¶¼Å»Ãâ" << std::endl;
}


void Escape::compereScore() {
	if (this->oldEscapeScore_ < this->escapeScore_)
		this->oldEscapeScore_ = this->escapeScore_;
}