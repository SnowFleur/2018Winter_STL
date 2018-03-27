//
//
//#include<iostream>
//#include<thread>
//#include<vector>
//#include<memory> //unique_ptr��뿡 �ʿ�
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//�ʱⰪ�ο�
//public:
//	Model() :id(++gid) { cout << id << "----�⺻ ������" << endl; }
//	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };
//
//	Model& operator=(const Model&);
//	Model(const Model&);
//	//�̵� ������ ***���ܸ� ������ �ʴ´ٴ� ����� �ؾ��Ѵ�. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
//		size = other.size;
//		data = other.data;
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//		cout << id << "----�̵� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	}
//	//�̵� �Ҵ翬����
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
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//
//		cout << id << "----�̵��Ҵ翬����" << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//		return *this;
//	}
//
//	~Model() {
//		cout << id << "----�Ҹ��� - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----���� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	/*���� �ִ� ��ü�� �ֱ⶧���� R-value�� �ȵ� 
//	move�� �����ʰ� �ڵ����� ����Ǵ� ���� �̵��̴�.
//	*/
//
//
//	/*
//	�̸��� ���� �ӽð�ü��°� �˱� ������ �̵������ڸ� �̿��Ѵ� R-value(���ξ��� ��ü)
//	*/
//
//	v.push_back(Model(222));
//
//
//}


















//
//
///*
//������
//*/
//
//
//
//#include<iostream>
//#include<thread>
//#include<vector>
//#include<memory> //unique_ptr��뿡 �ʿ�
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//�ʱⰪ�ο�
//public:
//	Model() :id(++gid) { cout << id << "----�⺻ ������" << endl; }
//	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };
//
//	Model& operator=(const Model&);
//	Model(const Model&);
//	//�̵� ������ ***���ܸ� ������ �ʴ´ٴ� ����� �ؾ��Ѵ�. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
//		size = other.size;
//		data = other.data;
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//		cout << id << "----�̵� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	}
//	//�̵� �Ҵ翬����
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
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//
//		cout << id << "----�̵��Ҵ翬����" << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//		return *this;
//	}
//
//	~Model() {
//		cout << id << "----�Ҹ��� - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----���� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	����ũ ������ �̱� ������ ������ �Ұ�������
//	�̰� �������� �ɷ��� ��� �ؾ��ұ�??
//	move�� ����Ѵ�.
//	*/
//
//
////	vector<Model>v;
////	unique_ptr<Model> p(new Model(333));
//	/*�ٸ� �������Ϳ� ���� ��� �Ұ�*/
//
//
//	Model a;
//	vector<Model> v;
//	v.push_back(a); //������ �����ؼ� �ְڴ�. �峭�� �ĵ� ������ �״���̴�.
//	vector<Model*> vp;
//	vp.push_back(&a); //������ �ٲ��� �Ǵ°�� �̷��� �̰� �ξ� ���� ���α׷��� �̴�.
//}
//
//
//








/*
���̴� ������
*/




/*
������
*/
//
//
//
//#include<iostream>
//#include<thread>
//#include<vector>
//#include<memory> //unique_ptr��뿡 �ʿ�
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//�ʱⰪ�ο�
//public:
//	Model() :id(++gid) { cout << id << "----�⺻ ������" << endl; }
//	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };
//
//	Model& operator=(const Model&);
//	Model(const Model&);
//	//�̵� ������ ***���ܸ� ������ �ʴ´ٴ� ����� �ؾ��Ѵ�. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
//		size = other.size;
//		data = other.data;
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//		cout << id << "----�̵� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	}
//	//�̵� �Ҵ翬����
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
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//
//		cout << id << "----�̵��Ҵ翬����" << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//		return *this;
//	}
//
//	~Model() {
//		cout << id << "----�Ҹ��� - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----���� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
//
//int main() {
//
//	shared_ptr<Model> sp(new Model(333));
//	std::cout << sizeof(sp) << std::endl;
//	/*���̴� �����ʹ� �뷮�� ���� ũ��.*/
//
//
//	unique_ptr<Model> up(new Model(333));
//	std::cout << sizeof(up) << std::endl;
//
//	/*�ڵ����� ������ �� �� �ֵ��� ����ϴ°��̴�.
//	������ ���� ������ �����ð��� ������ �ɸ��� ������ �ؾ���� �� �ִ�.*/
//
//	shared_ptr<Model> sp2 = sp;
//	shared_ptr<Model> sp3 = sp2;
//	/*��� �����Ͱ� ���� �޸𸮸� ����Ű�� �ִ��� �˾ƾ� �ϱ� ������ �뷮�� ���� ũ��.
//	�ڱⰡ ������� ����Ű�� �����Ͱ� ����� ������ -1�ϸ鼭 �������.
//	������ �����ʹ� ������� ���� �������.
//	*/
//
//	cout<<sp3.use_count() << endl;
//	/*��� �����Ͱ� �ִ��� �� �� ����*/
//	sp3.reset();
//	/*����*/
//
//}
//
//





//
///*
//
//����Ư��(type traits)
//
//�������� namespace�� ����ض�*/
//
//
//
//#include<iostream>
//#include<type_traits>
//#include<vector> //����
//#include<memory> //unique_ptr��뿡 �ʿ�
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//�ʱⰪ�ο�
//public:
//	Model() :id(++gid) { cout << id << "----�⺻ ������" << endl; }
//	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };
//
//	Model& operator=(const Model&);
//	Model(const Model&);
//	//�̵� ������ ***���ܸ� ������ �ʴ´ٴ� ����� �ؾ��Ѵ�. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
//		size = other.size;
//		data = other.data;
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//		cout << id << "----�̵� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	}
//	//�̵� �Ҵ翬����
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
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//
//		cout << id << "----�̵��Ҵ翬����" << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//		return *this;
//	}
//
//	~Model() {
//		cout << id << "----�Ҹ��� - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----���� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
//
///*
//�� ������ ���� ���� ����� �����ϴ� �Լ��� ������.
//���������� �����ΰ�??????????
//*/
//
//template <class T>
//T add(T number, T number2) {
//	/*T��'+'�� ������ Ÿ���̴�??
//	�ź��Ҷ� ���
//	���޵� ���Ŀ� ���� �� ȿ������(Ÿ�Կ� ����)���鶧 ���
//	*/
//	static_assert(is_arithmetic<T>::value, "�ȵžȵ�");
////	if (is_arithmetic<T>::value)
//		return number + number2;
//
//	else
//		return number;
//		/*���� Ÿ���� �����ؾ��ϱ⶧���� return 0 �� �Ұ��� �ϴ�.*/
//
//}
//int main() {
//
//	std::cout << add(10, 15) << std::endl;
//	
//	add(Model(3), Model(5));//C233 ����
//
//	std::cout<<boolalpha<<is_arithmetic<Model>::value << std::endl;
//	/*�̰� ������?*/
//	std::cout << boolalpha << is_class<Model>::value << std::endl;
//	/*�̰� Ŭ���� �̴�??*/
//
//
//
////	int number1 = 5, number2 = 10;
//	//add(Model(5.0), Model(1.0));
////	add(3,5);
//
//}

















/*

����Ư��(type traits)
�� �Լ��� ȣ���ص� �ǰδ�?

*/

//
//
//#include<iostream>
//#include<type_traits>
//#include<vector> //����
//#include<memory> //unique_ptr��뿡 �ʿ�
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//�ʱⰪ�ο�
//public:
//	Model() :id(++gid) { cout << id << "----�⺻ ������" << endl; }
//	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };
//
//	Model& operator=(const Model&);
//	Model(const Model&);
//	//�̵� ������ ***���ܸ� ������ �ʴ´ٴ� ����� �ؾ��Ѵ�. noexcept
//	Model(Model&& other) noexcept:id(++gid) {
//		size = other.size;
//		data = other.data;
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//		cout << id << "----�̵� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	}
//	//�̵� �Ҵ翬����
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
//		//������ well-Known ���·� ���������.(default ��)
//		other.size = 0;
//		other.data = nullptr;
//
//		cout << id << "----�̵��Ҵ翬����" << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//		return *this;
//	}
//
//	~Model() {
//		cout << id << "----�Ҹ��� - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//		if (data != nullptr) {
//			delete[]data;
//		}
//	}
//};
//Model::Model(const Model& other) :data(new char[other.size]), size(other.size), id(++gid) {
//	//strcpy_s(data, sizeof(data),other.data);
//
//	memcpy(data, other.data, size);
//	cout << id << "----���� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << id << "----operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
//template<class T>
//void f(T t) {
//
//	//���޵� T�� �Լ��̸� ȣ���ϴ� �ڵ带 ��������
//
//	if (is_function<T()>::value) {
//		std::cout << "�Լ��� ���޵Ǿ����ϴ�." << std::endl;
//		t();  //�̰͵� �����ϴ�. �Լ��ȿ� �Լ� ȣ���̰���
//		// m()()
//	}
//		return;
//}
//void test() {
//	std::cout << "���� �Լ���" << std::endl;
//}
//class Mouse {
//private:
//
//public:
//	void operator()() { //�Լ� ���⿬����
//		std::cout << "�ȳ� ���� ���콺��? �ʴ� ġ���" << std::endl;
//	}
//
//};
//
//int main() {
//	//f([]() {std::cout << "�ȳ� ���� ���پ�" << std::endl; }); //a�� �ԼҶ�� ȣ���ض�	
//	Mouse m;
////	m();
////	m.operator()();
//
//	f(Mouse());
//	/*����  ��ǿ�����Ʈ �Լ�ȣ���� �ϴ� �ӽð�ü*/
//
//}





/*

3��

*/





#include<iostream>
#include<type_traits>
#include<vector> //����
#include<list>
#include<set>
#include<memory> //unique_ptr��뿡 �ʿ�
using namespace std;
int gid = 0;
class Model {
	int id;
	char* data = nullptr;
	size_t size = 0;//�ʱⰪ�ο�
public:
	Model() :id(++gid) { cout << id << "----�⺻ ������" << endl; }
	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };

	Model& operator=(const Model&);
	Model(const Model&);
	//�̵� ������ ***���ܸ� ������ �ʴ´ٴ� ����� �ؾ��Ѵ�. noexcept
	Model(Model&& other) noexcept:id(++gid) {
		size = other.size;
		data = other.data;
		//������ well-Known ���·� ���������.(default ��)
		other.size = 0;
		other.data = nullptr;
		cout << id << "----�̵� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
	}
	//�̵� �Ҵ翬����
	Model& operator=(Model&& other) {
		id = ++gid;
		if (this == &other)
			return *this;
		size = other.size;

		if (data != nullptr)
			delete[] data;

		data = other.data;

		//������ well-Known ���·� ���������.(default ��)
		other.size = 0;
		other.data = nullptr;

		cout << id << "----�̵��Ҵ翬����" << size << "����Ʈ : " << static_cast<void*>(data) << endl;
		return *this;
	}

	~Model() {
		cout << id << "----�Ҹ��� - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
		if (data != nullptr) {
			delete[]data;
		}
	}
};
Model::Model(const Model& other) :data(new char[other.size]), size(other.size), id(++gid) {
	//strcpy_s(data, sizeof(data),other.data);

	memcpy(data, other.data, size);
	cout << id << "----���� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
	cout << id << "----operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
	return *this;
}


/*
������ Ÿ���� �ڷ����� ������ �ִ� �ڷ���==�����̳�
	Sequence Container
		array,vector,deque,forward_list,list

	Associative Container
		set,multiset,map,multimap(Ʈ��)

	Unordered Associative Container(Hash �ڷᱸ��)
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