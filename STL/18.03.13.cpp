/*
복습
개를 10000마리 만들고 정렬하자.
*/
//#include<iostream>
//#include<string>
//#include<random>
//#include<time.h>
//using namespace std;
//class Dog {
//private:
//	int age;
//	std::string name{};
//public:
//	int GetAge()const { return age; }
//	void SetAge(int n) { age = n; }
//	friend std::ostream& operator<<(std::ostream&, const Dog&);
//};
//std::ostream& operator<<(std::ostream& os, const Dog& d) {
//	os << "이름" << d.name << "나이" << d.age << std::endl;
//	return os;
//}
//
//int main() {
//	srand(time(NULL));
//	Dog dogs[100000];
//	/*
//	Q:100000마리는 뻗는다
//	A:메모리의 제한떄문에 배열은 연속적으로 있어야 하기 때문에(내 생각)
//	(답)
//	프로그래머가 사용할 수 있는 메모리 영역은
//	지역변수(스텍):한계가 존재함-지역메모리를 전역으로 옮겨도 해결
//	힙:동적할당
//
//	힙으로 잡는거와 전역으로 잡는거에 차이는 뭘까??
//	
//	프로그램이 실행된다는건? ->메모리에 올라와 있다.
//	*/
//
//
//
//	default_random_engine dre;
//	uniform_int_distribution<int>uid; //범위를 제한하지 않으면 표현 가능한 가장 작은 음의정수부터 가장큰 양의정수 까지 나옴
//	
//	for (Dog& d : dogs) {
//		d.SetAge(uid(dre));
//	}
//
//	for (auto& d : dogs)
//		std::cout << d << std::endl;
//}
//
//





//동적할당으로 해결



//
//#include<iostream>
//#include<string>
//#include<random>
//#include<time.h>
//using namespace std;
//enum COUNT { NUMBER = 100000 };
//
//class Dog {
//private:
//	int age;
//	std::string name{};
//public:
//	Dog() {  }
//	int GetAge()const { return age; }
//	void SetAge(int n) { age = n; }
//	friend std::ostream& operator<<(std::ostream&, const Dog&);
//
//};
//std::ostream& operator<<(std::ostream& os, const Dog& d) {
//	os << "이름" << d.name << "나이" << d.age << std::endl;
//	return os;
//}
//
//
//int main() {
//	srand(time(NULL));
//
//	//개 10만마리 동적
//	/*new는 생성자를 호출해줌*/
//
//	Dog* dogs;
//	dogs =new Dog[1000000];
//
//	/*
//	
//	나는 포인터 하나를 가지고 1000000개의 자료형을 잡은게아니라
//	포인터 100000개를 가지고 했기 때문에 값이 이상했음
//
//	Dog* dogs[1000000];
//	
//	*/
//
//
//	default_random_engine dre;
//	uniform_int_distribution<int>uid; //범위를 제한하지 않으면 표현 가능한 가장 작은 음의정수부터 가장큰 양의정수 까지 나옴
//
//
//
//	for (int i = 0; i < NUMBER; i++)
//		dogs[i].SetAge(uid(dre));
//
//
//		qsort(dogs, NUMBER, sizeof(Dog), [](const void* a, const void* b) {
//			return static_cast<const Dog*>(a)->GetAge() -static_cast<const Dog*>(b)->GetAge();
//	});
//
//	for (int i = 0; i < NUMBER; i++)
//		std::cout << dogs[i] << std::endl;
//
//	delete[] dogs;
//
//}








/*
우리가 처리해야 할 자료는 어딘가 다른 곳에 있다.
자료가 파일에 있는 경우 읽어와서 처리해보자
*/

/*
임의의 정수(0,10000)10000개를 만들어 파일에 저장하자.
*/
//
//
//#include<iostream>
//#include<fstream>
//#include<random>
//int main() {
//	std::default_random_engine dre;
//	std::uniform_int_distribution<> uid(0,100000);
//
//	/*클래스 이기 때문에 생성자에 파일이름 입력가능
//	o:out
//	f:file
//	*/
//	std::ofstream out("정수1000개.txt");
//
//
//	for(int i=0;i<1000;i++)
//	out << uid(dre) << std::endl;; /*한번 호출당 0~100000 사이의 숫자가 나옴*/
//
//}
//
//







#include<iostream>
#include<fstream>
#include<random>

/*
임의의 정수가 "정수 1000개 txt"파일에있따.
읽어서 정렬하라

정수 1000개를 파일에 저장했다.
파일에 4000바이트를 기록하리라 예상했지만 그렇지 않았다.
4000바이트를 기록하려면 어떻게 할 수 있을까?


*/
//
//int main() {
//	int n[1000];
//
//	std::ifstream in("정수1000개.txt");
//
//	if (!in) {
//		return 0;
//	}
//
//	for (int i = 0; i < 1000; i++)
//		in >> n[i];
//
//	for (int i = 0; i < 10; i++)
//		std::cout << n[i] << std::endl;
//
//
//}
//
//



//
///*
//정수 1000개를 만들어 파일에 기록하라(4000 바이트를 기록하자)
//메모리를 바이트를 그대로 write 함수로 기록하면 된다.
//	? 4000 바이트를 예상했는데 4010바이트가 기록되었다. 10은 뭘까?
//
//	바이너리 모드와 텍스트 모드의 차이 때문에 10바이트가 더 기록됨
//
//
//*/
//int main() {
//	std::ofstream out("정수 1000개메모리 그대로 저장", std::ios::binary);
//			//st::ios::binary가 정답 찾아볼것
//	
//	int n[1000];
//
//
//
//	std::default_random_engine dre;
//	std::uniform_int_distribution<int> uid(0,100000);
//
//	for (int i = 0; i < 1000; i++)
//		n[i] = uid(dre);
//	
//	out.write((const char*)n, sizeof(int) * 1000);
//
//
//}
//




/*
다음시간- 정수말고 파일에 있는 Dog를 읽어와서 정렬해보자
숙제- 책 2장에 어떤 내용이 있는지 읽어보자
*/

/*
파일 "정수 1000개를 메모리에 그대로 저장"에 있는 정수 1000개를
//읽어(read 함수로 읽어라) 정렬한 후 화면에 출력하라.

*/
int main() {
	int* p=new int[10000];


	std::ifstream in("정수 1000개메모리 그대로 저장",std::ios::binary);
	if (!in) {
		std::cout << "파일이 없습니다." << std::endl;
		return 0;
	}
	in.read((char*)p, sizeof(int) * 1000);

	qsort(p, 1000, sizeof(int), [](const void* a, const void* b) {
		return *(int*)a - *(int*)b;
	});
}









