//#include<iostream>
//using namespace std;
//class Model {
//	char* data = nullptr;
//	size_t size = 0;//초기값부여
//public:
//	Model() {cout << "default ctor" << endl;}
//	Model& operator=(const Model&);
//	Model(int n) : size(n) {data = new char[n];cout << "ctor - " << size << "바이트 : " << static_cast<void*>(data) << endl;};
//
//	~Model() {cout << "dtor - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//		if (data != nullptr) {
//			delete[]data;
//		}
//	}
//	Model(const Model&);
//
//
//};
//
//Model::Model(const Model& other):data(new char [other.size]),size(other.size) {
//	//strcpy_s(data, sizeof(data),other.data);
//
//	memcpy(data, other.data, size);
//	cout << " copy ctor - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//}
//Model& Model::operator=(const Model& other) {
//	if (this == &other)
//		return *this;
//	size=other.size;
//
//	if (data != nullptr) 
//		delete[] data;
//
//	data = new char[size];
//	memcpy(data, other.data, size);
//	cout << " operator= " << size << "바이트 : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
//
//int main() {
//	Model a;
//	Model b{ 1000 };
//	Model c = b; // c(b) //c를 b를 복사하여 생성
//
//	a = c; // a.operator=(c) Copy Assignment operator를 프로그램해야 함
//
//	cout << "메인이 끝남" << endl;
//}
/*
허공 포인터 dangling 포인터

*/





//고유의 번호 ID를 붙여보자








//
//
//#include<iostream>
//#include<chrono>
//#include<thread>
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//초기값부여
//public:
//	Model() {cout << "default ctor" << endl;}
//	Model& operator=(const Model&);
//	Model(int n) : size(n) {data = new char[n];cout << "ctor - " << size << "바이트 : " << static_cast<void*>(data) << endl;};
//
//	~Model() {cout << "dtor - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//		if (data != nullptr) {
//			delete[]data;
//		}
//	}
//	Model(const Model&);
//
//
//};
//
//Model::Model(const Model& other):data(new char [other.size]),size(other.size) {
//	//strcpy_s(data, sizeof(data),other.data);
//
//	memcpy(data, other.data, size);
//	cout << " copy ctor - " << size << "바이트 : " << static_cast<void*>(data) << endl;
//}
//Model& Model::operator=(const Model& other) {
//	if (this == &other)
//		return *this;
//	size=other.size;
//
//	if (data != nullptr) 
//		delete[] data;
//
//	data = new char[size];
//	memcpy(data, other.data, size);
//	cout << " operator= " << size << "바이트 : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
//
//int main() {
//	/*
//	프로그램의 경과시간을 측정하는 코드
//	*/
//	
//	/*측정시작 
//	high_resolution_clock
//	시간을 제일 많이 자를 수 있음 
//	*/
//	auto start=chrono::high_resolution_clock::now();
//	//많이 쓰임
//	this_thread::sleep_for(5s); /*시간을 세운다.*/
//
//	auto elapsedTime=chrono::high_resolution_clock::now()-start;
//	/*측정끝*/
//	std::cout << chrono::duration<double>(elapsedTime).count() << "초가 경과함" << std::endl;
//
//}























#include<iostream>
#include<vector> /*90%사용 */
using namespace std;
int gid = 0;
class Model {
	int id;
	char* data = nullptr;
	size_t size = 0;//초기값부여
public:
	Model():id(++gid) { cout <<id<<"----기본 생성자" << endl; }
	Model& operator=(const Model&);
	Model(int n) : size(n),id(++gid) { data = new char[n]; cout<<id << "----생성자(정수) - " << size << "바이트 : " << static_cast<void*>(data) << endl; };

	~Model() {
		cout<<id<< "----소멸자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
		if (data != nullptr) {
			delete[]data;
		}
	}
	Model(const Model&);
};

Model::Model(const Model& other) :data(new char[other.size]), size(other.size),id(++gid) {
	//strcpy_s(data, sizeof(data),other.data);

	memcpy(data, other.data, size);
	cout<<id<< "----복사 생성자 - " << size << "바이트 : " << static_cast<void*>(data) << endl;
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
	cout <<id<< "----operator= " << size << "바이트 : " << static_cast<void*>(data) << endl;
	return *this;
}



int main() {

	vector<Model> v;

	Model a{ 111 };
//	Model b{ 222 };


	v.push_back(a);
//	v.push_back(b);

//	v.push_back( Model(1111)); 진짜 임시객체가 되었다. 하지만 복사가 됨
//	std::cout << "--------------------메인 끝" << std::endl;
}
