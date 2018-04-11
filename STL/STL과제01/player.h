#pragma once
#include<ostream>
using ostream = std::ostream;
using istream = std::istream;

class Player {
	
private:
	int uid_;
	int cookieScore_;
	int escapeScore_;

public:
	Player();
	int getCookieScore()const;
	int getEscapeScore()const;
	void setCookieScroe(int);
	void setEscapeScore(int);

	Player(int, int,int);
//	Player& operator=(const Player&);
	friend ostream& operator<<(ostream&, const Player&);
	friend istream& operator>>(istream&, Player&);

};

/*



*/