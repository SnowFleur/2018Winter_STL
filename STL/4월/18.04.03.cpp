#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;


int gid;
class Model {
	int id;
	char* data = nullptr;
	size_t size = 0;//�ʱⰪ�ο�
public:
	Model() :id(++gid) { cout << id << "----�⺻ ������" << endl; }
	Model(int n) : size(n), id(++gid) { data = new char[n]; cout << id << "----������(����) - " << size << "����Ʈ : " << static_cast<void*>(data) << endl; };

	Model& operator=(const Model&);
	Model(const Model&);
	friend ostream& operator<<(ostream&,const Model&);

	void show() {
	//	std::cout << "��" << id << ",," << size << "����Ʈ" << static_cast<void*>(data) << std::endl;
	}


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

ostream& operator<<(ostream& os, const Model& temp) {

	os << "������ �����ε�:" << temp.id;
	return os;

}






/*

associative container

map: key�� value���� �ְ� key���� ���ı������� value�� ã�� ���ؼ�

�ؽ� �����̳�
��� �ð��� �ð����⵵

//*/
//
//int main() {
//	
//	//vector<Model*> v;
//
//	//v.push_back(new Model{ 333 });
//	/*
//	�� �Ҹ��ڸ� �θ� ���� ����... �׷� ��� �ؾ��ϴ°�??
//
//	Model* p �̷� ���ڴٸ� �����Ͱ� �ƴ� ����Ʈ�����͸� ����ض�.
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
�����̳ʸ� �پ��� �����ڸ� �̿��Ͽ� ����
���� 49��

int-> Model�� �ٲ㼭 �����غ���

*/
//
//int main() {
//
//
//	vector<Model> vec = { 1,2,3};
//	/*
//	1.���� �޸�ĭ�� �����.
//	�޸𸮰� �پ��ִ�.
//	*/
//	std::cout << "------------------------------vec ���� ��----------------------------------" << std::endl;
//
//	/*
//	vector<int> vec  { 1,2,3,4,5,6,7,8,9 };
//	�̹��ڴ� �Ҵ�(����θ�Ʈ)�� �ƴ� �ʱ�ȭ(�̴Ѽȶ�����)�̴�.
//	*/
//	
//	for (auto v : vec)   /*Begin(vec),end(vec)*/
//	//	std::cout << v << " ";
//		v.show();
//	std::cout << "------------------------------vec2 ���� ��----------------------------------" << std::endl;
//	vector<Model> vec2 = vec; // vec2 {vec2};
//	std::cout << "------------------------------vec2 ���� ��----------------------------------" << std::endl;
//
//	std::cout << vec2.size() << std::endl; //������ ����
//	std::cout << vec.size() << std::endl;
//
//
//
//}


/*
	�����̳��� ��� ����
	�ҽ�.cpp�� ������ �ܾ������ �о� ���Ϳ� ��������.

*/

int main() {
	vector<string> v;
	ifstream in("18.04.03.cpp");
	string s;

	while (in >> s)
		v.push_back(s);
	/*��ȿ�ҋ� ���� �����鼭 v���;ȿ� �о�� s���� �ִ´�.*/


	auto beg=v.rbegin();   //cbegin �б�����   rbegin �Ųٷ� crbegin �Ųٷ�(�б�����)
	auto end = v.rend();

	for (auto i = beg; i < end; ++i) {
		string s = *i;
		for (auto j = s.rend(); j < s.rbegin(); ++j)
			std::cout << *j << std::endl;
		/*
		�Ųٷ� ����
		*/
		std::cout << *i << std::endl;
	}
	/*��������� �߸�*/

}
