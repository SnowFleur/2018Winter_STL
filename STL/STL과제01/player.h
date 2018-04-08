#pragma once
#include<ostream>
using ostream = std::ostream;
using istream = std::istream;

class Player {
	
private:
	int uid_;
	int cookie_score_;
	int escape_score_;

public:
	Player();
	Player(int, int,int);
	bool operator<(const Player&);
	friend ostream& operator<<(ostream&, Player&);
	friend istream& operator>>(istream&, Player&);

};