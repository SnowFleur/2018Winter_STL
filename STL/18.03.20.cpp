//#include<iostream>
//using namespace std;
//class Model {
//	char* data = nullptr;
//	size_t size = 0;//�ʱⰪ�ο�
//public:
//	Model() {cout << "default ctor" << endl;}
//	Model& operator=(const Model&);
//	Model(int n) : size(n) {data = new char[n];cout << "ctor - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;};
//
//	~Model() {cout << "dtor - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << " copy ctor - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << " operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
//
//int main() {
//	Model a;
//	Model b{ 1000 };
//	Model c = b; // c(b) //c�� b�� �����Ͽ� ����
//
//	a = c; // a.operator=(c) Copy Assignment operator�� ���α׷��ؾ� ��
//
//	cout << "������ ����" << endl;
//}
/*
��� ������ dangling ������

*/





//������ ��ȣ ID�� �ٿ�����








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
//	size_t size = 0;//�ʱⰪ�ο�
//public:
//	Model() {cout << "default ctor" << endl;}
//	Model& operator=(const Model&);
//	Model(int n) : size(n) {data = new char[n];cout << "ctor - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;};
//
//	~Model() {cout << "dtor - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << " copy ctor - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
//	cout << " operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
//	return *this;
//}
//
//
//
//int main() {
//	/*
//	���α׷��� ����ð��� �����ϴ� �ڵ�
//	*/
//	
//	/*�������� 
//	high_resolution_clock
//	�ð��� ���� ���� �ڸ� �� ���� 
//	*/
//	auto start=chrono::high_resolution_clock::now();
//	//���� ����
//	this_thread::sleep_for(5s); /*�ð��� �����.*/
//
//	auto elapsedTime=chrono::high_resolution_clock::now()-start;
//	/*������*/
//	std::cout << chrono::duration<double>(elapsedTime).count() << "�ʰ� �����" << std::endl;
//
//}























#include<iostream>
#include<vector> /*90%��� */
using namespace std;
int gid = 0;
class Model {
	int id;
	char* data = nullptr;
	size_t size = 0;//�ʱⰪ�ο�
public:
	Model():id(++gid) { cout <<id<<"----�⺻ ������" << endl; }
	Model& operator=(const Model&);
	Model(int n) : size(n),id(++gid) { data = new char[n]; cout<<id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };

	~Model() {
		cout<<id<< "----�Ҹ��� - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
		if (data != nullptr) {
			delete[]data;
		}
	}
	Model(const Model&);
};

Model::Model(const Model& other) :data(new char[other.size]), size(other.size),id(++gid) {
	//strcpy_s(data, sizeof(data),other.data);

	memcpy(data, other.data, size);
	cout<<id<< "----���� ������ - " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
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
	cout <<id<< "----operator= " << size << "����Ʈ : " << static_cast<void*>(data) << endl;
	return *this;
}



int main() {

	vector<Model> v;

	Model a{ 111 };
//	Model b{ 222 };


	v.push_back(a);
//	v.push_back(b);

//	v.push_back( Model(1111)); ��¥ �ӽð�ü�� �Ǿ���. ������ ���簡 ��
//	std::cout << "--------------------���� ��" << std::endl;
}
