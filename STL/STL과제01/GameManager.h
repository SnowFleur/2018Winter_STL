#pragma once
#include<iostream>
#include<vector>
#include<memory>
#include"Escape.h"
#include"Cookie.h"
#include"player.h"
#include"Game.h"

class GameManager {
private:
	vector vector;
	int playerCount = 0;
	enum GameKind {COOKIE=0,ESCAPE=1,GAMEKIND=2};
	enum Player_Count { USER_COUNT = 100000, ME = 0, USER_MAX = 1000000 };
public:
	GameManager();
	~GameManager();
	void addScore();
	void showVector() {
	
	for(auto iter=vector.begin();iter!=vector.end();++iter){
	//	Game** temp = iter->second;
//		std::cout << "�ּҰ�1:" <<static_cast<void*>(temp[0]) << std::endl;
//		std::cout << "�ּҰ�2:" << static_cast<void*>(temp[1]) << std::endl << std::endl;

	}
	}
};
/*
���������
�̵�������
�̵��Ҵ翬����
���Կ�����
�Ҹ���
*/