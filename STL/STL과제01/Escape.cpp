#include"Escape.hpp"

Escape::Escape(int score) :escapeScore_(score), oldEscapeScore_(0) {}

Escape::~Escape() {
	std::cout << "��Ż�� �Ҹ��� ȣ��" << std::endl;
}

 int Escape::getScore()const {
	 std::cout << "������ �׽�Ʈ ��Ż��" << std::endl;

	 return this->escapeScore_;
}

void Escape::setScore(const int score) {
	this->escapeScore_ = score;
	std::cout << "������ �׽�Ʈ ��Ż��" << std::endl;
}


void Escape::compereScore() {
	if (this->oldEscapeScore_ < this->escapeScore_)
		this->oldEscapeScore_ = this->escapeScore_;
}