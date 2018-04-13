#pragma once
#include<ostream>
using ostream = std::ostream;
using istream = std::istream;

class Player {

private:
	int uid_;
	int cookieScore_;
	int escapeScore_;
	int oldCookieScore_=0;
	int oldEscapeScore_=0;
public:
	enum PlayerCount { USER_COUNT = 100000, ME = 0, USER_MAX = 1000000 };

	Player();
	Player(int, int, int);

	int getUid()const;
	int getCookieScore()const;
	int getEscapeScore()const;
	void compereScore();
	void setCookieScroe(int);
	void setEscapeScore(int);
	bool operator==(const int)const;

	friend ostream& operator<<(ostream&, const Player&);
	friend istream& operator>>(istream&, Player&);

};

/*
std::cout << "측정시작" << std::endl;
auto start = std::chrono::high_resolution_clock::now();

std::chrono::duration<double> elapsed = std::chrono::high_resolution_clock::now() - start;

std::cout << "걸린시간:" << elapsed.count() << std::endl;


해야할것
1.파일입출력 에 올드점수 넣기 클리어
2.파일 세이브를 통해서 값이 잘 바뀌는지 확인  txt
3.함수더 만들고 main 의존도 낮추기
4.다시 숫자 뽑았을때 랜덤값이 잘 나오나확인
5.정규분포 예외처리
*/
/*
오류 생김
1. 반복자가 나를 찾지 못함

*/