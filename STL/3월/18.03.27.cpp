//
//
//#include<iostream>
//#include<thread>
//#include<vector>
//#include<memory> //unique_ptr사용에 필요
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
//	//이동 생성자 ***예외를 던지지 않는다는 약속을 해야한다. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
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
///*
//
//
//*/
//int main() {
//
//	vector<Model>v;
//	
//	
//	//v.push_back(Model(1111));
//
//
//	Model a(1);
//	Model b(22);
//	Model c(333);
//
//	v.push_back(a);
//	v.push_back(b);
//	v.push_back(c);
//	/*주인 있는 객체가 있기때문에 R-value가 안됨 
//	move를 쓰지않고 자동으로 실행되는 것이 이동이다.
//	*/
//
//
//	/*
//	이름이 없는 임시객체라는걸 알기 때문에 이동생성자를 이용한다 R-value(주인없는 객체)
//	*/
//
//	v.push_back(Model(222));
//
//
//}


















//
//
///*
//포인터
//*/
//
//
//
//#include<iostream>
//#include<thread>
//#include<vector>
//#include<memory> //unique_ptr사용에 필요
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
//	//이동 생성자 ***예외를 던지지 않는다는 약속을 해야한다. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
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
//
//int main() {
//
//
//
////	unique_ptr<Model>p(new Model(333));
////	unique_ptr<Model> q = p;
//	/*
//	유니크 포인터 이기 때문에 공유가 불가느으응
//	이게 논리적으로 될려면 어떻게 해야할까??
//	move를 사용한다.
//	*/
//
//
////	vector<Model>v;
////	unique_ptr<Model> p(new Model(333));
//	/*다른 포인터터와 같이 사용 불가*/
//
//
//	Model a;
//	vector<Model> v;
//	v.push_back(a); //원본을 복사해서 넣겠다. 장난을 쳐도 원본이 그대로이다.
//	vector<Model*> vp;
//	vp.push_back(&a); //원본이 바뀌어두 되는경우 이렇게 이게 훨쒼 좋은 프로그래밍 이다.
//}
//
//
//








/*
쉐이더 포인터
*/




/*
포인터
*/
//
//
//
//#include<iostream>
//#include<thread>
//#include<vector>
//#include<memory> //unique_ptr사용에 필요
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
//	//이동 생성자 ***예외를 던지지 않는다는 약속을 해야한다. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
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
//
//int main() {
//
//	shared_ptr<Model> sp(new Model(333));
//	std::cout << sizeof(sp) << std::endl;
//	/*쉐이더 포인터는 용량이 좀더 크다.*/
//
//
//	unique_ptr<Model> up(new Model(333));
//	std::cout << sizeof(up) << std::endl;
//
//	/*자동으로 해제가 될 수 있도록 사용하는것이다.
//	생성과 삭제 까지는 오랜시간과 공간이 걸리기 때문에 잊어먹을 수 있다.*/
//
//	shared_ptr<Model> sp2 = sp;
//	shared_ptr<Model> sp3 = sp2;
//	/*몇개의 포인터가 같은 메모리를 가리키고 있는지 알아야 하기 때문에 용량이 좀더 크다.
//	자기가 사라질때 가리키는 포인터가 몇개인지 본다음 -1하면서 사라진다.
//	마지막 포인터는 사라질때 같이 사라진다.
//	*/
//
//	cout<<sp3.use_count() << endl;
//	/*몇개의 포인터가 있는지 알 수 있음*/
//	sp3.reset();
//	/*손절*/
//
//}
//
//





//
///*
//
//형실특질(type traits)
//
//지역에서 namespace를 사용해라*/
//
//
//
//#include<iostream>
//#include<type_traits>
//#include<vector> //붹터
//#include<memory> //unique_ptr사용에 필요
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
//	//이동 생성자 ***예외를 던지지 않는다는 약속을 해야한다. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
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
///*
//두 인자의 값을 더해 결과를 리턴하는 함수를 만들어라.
//불편한점은 무엇인가??????????
//*/
//
//template <class T>
//T add(T number, T number2) {
//	/*T가'+'가 가능한 타입이니??
//	거부할때 사용
//	전달된 형식에 따라서 더 효율적인(타입에 맞춘)만들때 사용
//	*/
//	static_assert(is_arithmetic<T>::value, "안돼안돼");
////	if (is_arithmetic<T>::value)
//		return number + number2;
//
//	else
//		return number;
//		/*같은 타입을 리턴해야하기때문에 return 0 은 불가능 하다.*/
//
//}
//int main() {
//
//	std::cout << add(10, 15) << std::endl;
//	
//	add(Model(3), Model(5));//C233 오류
//
//	std::cout<<boolalpha<<is_arithmetic<Model>::value << std::endl;
//	/*이게 정수니?*/
//	std::cout << boolalpha << is_class<Model>::value << std::endl;
//	/*이게 클래스 이니??*/
//
//
//
////	int number1 = 5, number2 = 10;
//	//add(Model(5.0), Model(1.0));
////	add(3,5);
//
//}

















/*

형실특질(type traits)
너 함수니 호출해두 되겄니?

*/

//
//
//#include<iostream>
//#include<type_traits>
//#include<vector> //붹터
//#include<memory> //unique_ptr사용에 필요
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
//	//이동 생성자 ***예외를 던지지 않는다는 약속을 해야한다. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
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
//template<class T>
//void f(T t) {
//
//	//전달된 T가 함수이면 호출하는 코드를 생성하자
//
//	if (is_function<T()>::value) {
//		std::cout << "함수가 전달되었습니다." << std::endl;
//		t();  //이것도 가능하다. 함수안에 함수 호출이가능
//		// m()()
//	}
//		return;
//}
//void test() {
//	std::cout << "나는 함수야" << std::endl;
//}
//class Mouse {
//private:
//
//public:
//	void operator()() { //함수 오출연산자
//		std::cout << "안녕 나는 마우스야? 너는 치즈야" << std::endl;
//	}
//
//};
//
//int main() {
//	//f([]() {std::cout << "안녕 나는 람다야" << std::endl; }); //a가 함소라면 호출해라	
//	Mouse m;
////	m();
////	m.operator()();
//
//	f(Mouse());
//	/*펑터  펑션오브젝트 함수호출을 하는 임시객체*/
//
//}





/*

3장

*/





#include<iostream>
#include<type_traits>
#include<vector> //붹터
#include<list>
#include<set>
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
	//이동 생성자 ***예외를 던지지 않는다는 약속을 해야한다. noexcept
	Model(Model&& other) noexcept:id(++gid) {
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


/*
동일한 타입의 자료형을 가지고 있는 자료형==컨테이너
	Sequence Container
		array,vector,deque,forward_list,list

	Associative Container
		set,multiset,map,multimap(트리)

	Unordered Associative Container(Hash 자료구조)
		Unorderse_set,Unordered_multiset
		Unorderse_map,Unordered_mmultimap




*/
int main() {

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int>v2{ begin(a),end(a) };
	

	vector<int >v;
	list<int >v;
	set<int >v;


}