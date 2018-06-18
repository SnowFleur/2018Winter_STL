#pragma once

class Game {
public:
	virtual ~Game()=0;
	virtual int getScore()const=0;
	virtual void setScore(const int)=0;
	virtual void  compereScore()=0;
};
