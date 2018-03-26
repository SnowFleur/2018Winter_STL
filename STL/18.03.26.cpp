//#include<iostream>
//#include<string>
//#include<vector> /*90%사용 */
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//초기값부여
//public:
//	Model() :id(++gid) { cout << id << "----기본 생성자" << endl; }
//	Model& operator=(const Model&);
//	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----생성자(정수) - " << size << "바이트 : " << static_cast<void*>(data) << endl; };
//
//	~Model() {
//		cout << id << "----소멸자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//		if (data != nullptr) {
//			delete[]data;
//		}
//	}
//	Model(const Model&);
//};
//
//Model::Model(const Model& other) :data(new char[other.size]), size(other.size), id(++gid) {
//	//strcpy_s(data, sizeof(data),other.data);
//
//	memcpy(data, other.data, size);
//	cout << id << "----복사 생성자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//}
//Model& Model::operator=(const Model& other) {
//	id = ++gid;
//	if (this == &other)
//		return *this;
//	size = other.size;
//
//	if (data != nullptr)
//		delete[] data;
//
//	data = new char[size];
//	memcpy(data, other.data, size);
//	cout << id << "----operator= " << size << "바이트 : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
//
//int main() {
//
//	//std::string s{ "안녕? 예전에 이동을 배웠지?" };
//	//std::string t(move(s));
//	///*S의 내용이 사라짐*/
//	//std::cout << s << std::endl;
//	//std::cout << t << std::endl;
//
//
//	vector<Model> v;
//
//	Model a{ 1000 };
//	//std::cout << "스택에 만들어지는 객체 a의번지" << (void*)&a << std::endl;
//	
//	Model b(777);
//	Model c{ 3333 };
//	//std::cout << "스택에 만들어지는 객체 b의번지" << (void*)&b << std::endl;
//	/*스텍에 복사되는거 이기때문에 비슷한 번지에 있음*/
//
//
//	std::cout << "--------------a를 Push_Back 하기전----------------" << std::endl;
//	v.push_back(a);
//	std::cout << "--------------b를 Push_Back 하기전----------------" << std::endl;
//	v.push_back(b);
//	std::cout << "--------------C를 Push_Back 하기전----------------" << std::endl;
//	v.push_back(c);
//	
//	/*
//	인자가 전달되는 과정에 복사생성자가 생성되지 않는다 함수 원형을 보면 &(레퍼런스)전달을 하고 있음
//	*/
//	std::cout << "--------------Main이 끝남----------------" << std::endl;
//
//}





/* 이동  */


/*
		-벡터는 동적배열이다.
		-벡터는 관리하는 객체의 갯수만큼 메모리를 동적으로 할당한다.
		-벡터가 관리하는 객체가 깊은 복사를 한다면 관찰하기에 어려운만큼
		 많은 메시지가 출력된다.
	-벡터는 새로운 객체가 추가 될때 필요에 따라 메모리를 새로 확보하고
	 새 객체를 제일 마지막 번지에 복사하고, 이전 객체를 모두 새 메모리에 복사한다.
	그런데, 새 메모리에 복사되는 객체는 프로그래머와는 아무 관계없이 벡터
	내부에서만 사용되는 객체들이다. 따라서 깊은 복사를 하지 않을 수 있다면 
	벡터는 더 효율적으로 동작할 것이다.

	c++ 11에서는 이와같은 경우 class가 이동을 지원한다면 벡터가 복사대신
	이동을 지원한다.

	***중요한말***
	당신이 소멸자,복사생성자,복사할당자,(이동생성자,이동할당자) 중 
	이 다섯개 멤버함수 중 한개라도 프로그램했다면 나머지도 다 프로그램해야만 한다.


*/

//#include<iostream>
//#include<string>
//#include<vector> /*90%사용 */
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//초기값부여
//public:
//	Model() :id(++gid) { cout << id << "----기본 생성자" << endl; }
//	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----생성자(정수) - " << size << "바이트 : " << static_cast<void*>(data) << endl; };
//
//	Model& operator=(const Model&);
//	Model(const Model&);
//	//이동 생성자
//	Model(Model&& other) :id(++gid) {
//		size = other.size;
//		data = other.data;
//		//원본은 well-Known 상태로 만들어주자.(default 값)
//		other.size = 0;
//		other.data = nullptr;
//		cout << id << "----이동 생성자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//	}
//	//이동 할당연산자
//	Model& operator=(Model&& other) {
//		id = ++gid;
//		if (this == &other)
//			return *this;
//		size = other.size;
//
//		if (data != nullptr)
//			delete[] data;
//
//		data = other.data;
//
//		//원본은 well-Known 상태로 만들어주자.(default 값)
//		other.size = 0;
//		other.data = nullptr;
//
//		cout << id << "----이동할당연산자" << size << "바이트 : " << static_cast<void*>(data) << endl;
//		return *this;
//	}
//
//	~Model() {
//		cout << id << "----소멸자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//		if (data != nullptr) {
//			delete[]data;
//		}
//	}
//};
//
//
//
//Model::Model(const Model& other) :data(new char[other.size]), size(other.size), id(++gid) {
//	//strcpy_s(data, sizeof(data),other.data);
//
//	memcpy(data, other.data, size);
//	cout << id << "----복사 생성자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//}
//Model& Model::operator=(const Model& other) {
//	id = ++gid;
//	if (this == &other)
//		return *this;
//	size = other.size;
//
//	if (data != nullptr)
//		delete[] data;
//
//	data = new char[size];
//	memcpy(data, other.data, size);
//	cout << id << "----operator= " << size << "바이트 : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
///*
//복사생성자 호출자체를 막는법
//X(const &x)=delete;
//
//*/
//class X {
//public:
//	X() = default;
//	~X() = default;
//	X(const X&) = default;
//	X& operator=(const X&) = default;
//};
//
//
//
//int main() {
//	vector<Model> v;
//	Model a{ 1000 };
//	Model b(777);
//	Model c(888);
//
//
//	v.push_back(a);
//	v.push_back(b);
//	v.push_back(c);
//
//}



/*
2장내용
move();
//forward- 완벽전달(perfect forwarding),&&
std:;bind,std:;function 은 람다함수로 대체하면 됨
pair,tuple 
ref,cref(참조래퍼)
smart pointer= unique_ptr,shared_ptr
순환참조?
*/




#include<iostream>
#include<thread>
#include<memory> //unique_ptr사용에 필요
using namespace std;
int gid = 0;
class Model {
	int id;
	char* data = nullptr;
	size_t size = 0;//초기값부여
public:
	Model() :id(++gid) { cout << id << "----기본 생성자" << endl; }
	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----생성자(정수) - " << size << "바이트 : " << static_cast<void*>(data) << endl; };

	Model& operator=(const Model&);
	Model(const Model&);
	//이동 생성자
	Model(Model&& other) :id(++gid) {
		size = other.size;
		data = other.data;
		//원본은 well-Known 상태로 만들어주자.(default 값)
		other.size = 0;
		other.data = nullptr;
		cout << id << "----이동 생성자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
	}
	//이동 할당연산자
	Model& operator=(Model&& other) {
		id = ++gid;
		if (this == &other)
			return *this;
		size = other.size;

		if (data != nullptr)
			delete[] data;

		data = other.data;

		//원본은 well-Known 상태로 만들어주자.(default 값)
		other.size = 0;
		other.data = nullptr;

		cout << id << "----이동할당연산자" << size << "바이트 : " << static_cast<void*>(data) << endl;
		return *this;
	}

	~Model() {
		cout << id << "----소멸자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
		if (data != nullptr) {
			delete[]data;
		}
	}
};



Model::Model(const Model& other) :data(new char[other.size]), size(other.size), id(++gid) {
	//strcpy_s(data, sizeof(data),other.data);

	memcpy(data, other.data, size);
	cout << id << "----복사 생성자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
}
Model& Model::operator=(const Model& other) {
	id = ++gid;
	if (this == &other)
		return *this;
	size = other.size;

	if (data != nullptr)
		delete[] data;

	data = new char[size];
	memcpy(data, other.data, size);
	cout << id << "----operator= " << size << "바이트 : " << static_cast<void*>(data) << endl;
	return *this;
}

// 어떤 인자던지 인자의 값을 2배로 만들어주는 함수
template<class T>
void f(T n) {
	n *= 2;
}


int main() {
	int n = 100;
	f(ref(n));
	/*
	ref==템플릿을 사용할때만 해당됨
	이렇게 주는순간 자료는 int&가 됨
	함수를 바꾸기 위해 사용??
	1.함수의 상태란 static으로 정의 되어있을때
	2.함수 호출 연산자를 오버로딩한 클래스
	*/
	std::cout << n << std::endl;

	unique_ptr<Model>p(new Model{ 7777 });
	/*이름자체가 포인터라고 알려주기 때문에(*)를 사용할 필요가 없음  */
}
