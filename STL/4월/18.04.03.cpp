#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;


int gid;
class Model {
	int id;
	char* data = nullptr;
	size_t size = 0;//초기값부여
public:
	Model() :id(++gid) { cout << id << "----기본 생성자" << endl; }
	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----생성자(정수) - " << size << "바이트 : " << static_cast<void*>(data) << endl; };

	Model& operator=(const Model&);
	Model(const Model&);
	friend ostream& operator<<(ostream&,const Model&);

	void show() {
	//	std::cout << "모델" << id << ",," << size << "바이트" << static_cast<void*>(data) << std::endl;
	}


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

ostream& operator<<(ostream& os, const Model& temp) {

	os << "연산자 오버로딩:" << temp.id;
	return os;

}






/*

associative container

map: key와 value값이 있고 key값의 정렬기준으로 value를 찾기 위해서

해쉬 컨테이너
상수 시간의 시간복잡도

//*/
//
//int main() {
//	
//	//vector<Model*> v;
//
//	//v.push_back(new Model{ 333 });
//	/*
//	모델 소멸자를 부를 수가 없다... 그럼 어떻게 해야하는가??
//
//	Model* p 이런 구닥다리 포인터가 아닌 스마트포인터를 사용해라.
//	*/
//
//	vector<unique_ptr<Model>>v;
//	v.push_back(unique_ptr<Model>(new Model{ 333 }));
//
//
//
//
//}

/*
컨테이너를 다양한 생성자를 이용하여 생성
예제 49쪽

int-> Model로 바꿔서 실행해보자

*/
//
//int main() {
//
//
//	vector<Model> vec = { 1,2,3};
//	/*
//	1.먼저 메모리칸을 만든다.
//	메모리가 붙어있다.
//	*/
//	std::cout << "------------------------------vec 생성 후----------------------------------" << std::endl;
//
//	/*
//	vector<int> vec  { 1,2,3,4,5,6,7,8,9 };
//	이문자는 할당(어싸인먼트)가 아닌 초기화(이닌셜라이저)이다.
//	*/
//	
//	for (auto v : vec)   /*Begin(vec),end(vec)*/
//	//	std::cout << v << " ";
//		v.show();
//	std::cout << "------------------------------vec2 생성 전----------------------------------" << std::endl;
//	vector<Model> vec2 = vec; // vec2 {vec2};
//	std::cout << "------------------------------vec2 생성 후----------------------------------" << std::endl;
//
//	std::cout << vec2.size() << std::endl; //원소의 갯수
//	std::cout << vec.size() << std::endl;
//
//
//
//}


/*
	컨테이너의 요소 접근
	소스.cpp의 내요을 단어단위로 읽어 벡터에 저장하자.

*/

int main() {
	vector<string> v;
	ifstream in("18.04.03.cpp");
	string s;

	while (in >> s)
		v.push_back(s);
	/*유효할떄 까지 돌리면서 v백터안에 읽어온 s값을 넣는다.*/


	auto beg=v.rbegin();   //cbegin 읽기전용   rbegin 거꾸로 crbegin 거꾸로(읽기전용)
	auto end = v.rend();

	for (auto i = beg; i < end; ++i) {
		string s = *i;
		for (auto j = s.rend(); j < s.rbegin(); ++j)
			std::cout << *j << std::endl;
		/*
		거꾸로 찍어보기
		*/
		std::cout << *i << std::endl;
	}
	/*공백단위로 잘림*/

}
