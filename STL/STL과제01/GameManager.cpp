
#include"GameManager.h"
GameManager::GameManager() {
	vector.reserve(USER_MAX);


}
GameManager::~GameManager() {
	std::cout << "�����ڵ����" << std::endl;


	
}

void GameManager::addScore() {

	
	auto ptr = std::make_unique<Game*[]>(GAMEKIND);

	ptr[COOKIE] = new Cookie;
	ptr[ESCAPE] = new Escape;

	std::cout << "������ �ּ�:" << &ptr << std::endl;
	std::cout << "�����Ҵ� �ּ�1:" << ptr[COOKIE] << std::endl;
	std::cout << "�����Ҵ� �ּ�2:" << ptr[ESCAPE] << std::endl << std::endl;
	
	ptr[COOKIE]->setScore(1);
	ptr[ESCAPE]->setScore(1);




	//vector.push_back(pair(Player(1, 1, 1),std::move(ptr)));

	
	
	/*for (int i = 0; i < 10; ++i) {
		Game** ptr = new Game*[2];
		ptr[0] = new Escape;
		ptr[1] = new Cookie;
		
		std::cout<<"������ �ּ�:" << ptr << std::endl;
		std::cout << "�����Ҵ� �ּ�1:" << ptr[0] << std::endl;
		std::cout << "�����Ҵ� �ּ�2:" << ptr[1] << std::endl << std::endl;

		
		
		vector.push_back(pair(Player(1,1,1),ptr));
	}*/
}


