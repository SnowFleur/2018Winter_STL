#pragma once
#include<iostream>
#include"Game.hpp"
class Cookie :public Game {
private:
	int cookieScore_;
	int oldCookieScore_;
public:
	Cookie() {}
	Cookie(int);
	virtual ~Cookie();

	virtual int getScore()const;
	virtual void setScore(const int);
	virtual void compereScore();
};