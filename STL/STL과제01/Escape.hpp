#pragma once
#include<iostream>
#include"Game.hpp"
class Escape:public Game {
private:
	int escapeScore_;
	int oldEscapeScore_;
public:
	Escape() {}
	Escape(int);
	virtual ~Escape();


	virtual int getScore()const;
	virtual void setScore(const int);
	virtual void compereScore();
};
