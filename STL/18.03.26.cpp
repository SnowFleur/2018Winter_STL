//#include<iostream>
//#include<string>
//#include<vector> /*90%��� */
//using namespace std;
//int gid = 0;
//class Model {
//	int id;
//	char* data = nullptr;
//	size_t size = 0;//�ʱⰪ�ο�
//public:
//	Model() :id(++gid) { cout << id << "----�⺻ ������" << endl; }
//	Model& operator=(const Model&);
//	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };
//
//	~Model() {
//		cout << id << "----�Ҹ��� - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	//std::string s{ "�ȳ�? ������ �̵��� �����?" };
//	//std::string t(move(s));
//	///*S�� ������ �����*/
//	//std::cout << s << std::endl;
//	//std::cout << t << std::endl;
//
//
//	vector<Model> v;
//
//	Model a{ 1000 };
//	//std::cout << "���ÿ� ��������� ��ü a�ǹ���" << (void*)&a << std::endl;
//	
//	Model b(777);
//	Model c{ 3333 };
//	//std::cout << "���ÿ� ��������� ��ü b�ǹ���" << (void*)&b << std::endl;
//	/*���ؿ� ����Ǵ°� �̱⶧���� ����� ������ ����*/
//
//
//	std::cout << "--------------a�� Push_Back �ϱ���----------------" << std::endl;
//	v.push_back(a);
//	std::cout << "--------------b�� Push_Back �ϱ���----------------" << std::endl;
//	v.push_back(b);
//	std::cout << "--------------C�� Push_Back �ϱ���----------------" << std::endl;
//	v.push_back(c);
//	
//	/*
//	���ڰ� ���޵Ǵ� ������ ��������ڰ� �������� �ʴ´� �Լ� ������ ���� &(���۷���)������ �ϰ� ����
//	*/
//	std::cout << "--------------Main�� ����----------------" << std::endl;
//
//}





/* �̵�  */


/*
		-���ʹ� �����迭�̴�.
		-���ʹ� �����ϴ� ��ü�� ������ŭ �޸𸮸� �������� �Ҵ��Ѵ�.
		-���Ͱ� �����ϴ� ��ü�� ���� ���縦 �Ѵٸ� �����ϱ⿡ ����ŭ
		 ���� �޽����� ��µȴ�.
	-���ʹ� ���ο� ��ü�� �߰� �ɶ� �ʿ信 ���� �޸𸮸� ���� Ȯ���ϰ�
	 �� ��ü�� ���� ������ ������ �����ϰ�, ���� ��ü�� ��� �� �޸𸮿� �����Ѵ�.
	�׷���, �� �޸𸮿� ����Ǵ� ��ü�� ���α׷��ӿʹ� �ƹ� ������� ����
	���ο����� ���Ǵ� ��ü���̴�. ���� ���� ���縦 ���� ���� �� �ִٸ� 
	���ʹ� �� ȿ�������� ������ ���̴�.

	c++ 11������ �̿Ͱ��� ��� class�� �̵��� �����Ѵٸ� ���Ͱ� ������
	�̵��� �����Ѵ�.

	***�߿��Ѹ�***
	����� �Ҹ���,���������,�����Ҵ���,(�̵�������,�̵��Ҵ���) �� 
	�� �ټ��� ����Լ� �� �Ѱ��� ���α׷��ߴٸ� �������� �� ���α׷��ؾ߸� �Ѵ�.


*/

//#include<iostream>
//#include<string>
//#include<vector> /*90%��� */
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
//	//�̵� ������
//	Model(Model&& other) :id(++gid) {
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
///*
//��������� ȣ����ü�� ���¹�
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
2�峻��
move();
//forward- �Ϻ�����(perfect forwarding),&&
std:;bind,std:;function �� �����Լ��� ��ü�ϸ� ��
pair,tuple 
ref,cref(��������)
smart pointer= unique_ptr,shared_ptr
��ȯ����?
*/




#include<iostream>
#include<thread>
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
	//�̵� ������
	Model(Model&& other) :id(++gid) {
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

// � ���ڴ��� ������ ���� 2��� ������ִ� �Լ�
template<class T>
void f(T n) {
	n *= 2;
}


int main() {
	int n = 100;
	f(ref(n));
	/*
	ref==���ø��� ����Ҷ��� �ش��
	�̷��� �ִ¼��� �ڷ�� int&�� ��
	�Լ��� �ٲٱ� ���� ���??
	1.�Լ��� ���¶� static���� ���� �Ǿ�������
	2.�Լ� ȣ�� �����ڸ� �����ε��� Ŭ����
	*/
	std::cout << n << std::endl;

	unique_ptr<Model>p(new Model{ 7777 });
	/*�̸���ü�� �����Ͷ�� �˷��ֱ� ������(*)�� ����� �ʿ䰡 ����  */
}
