/*
����
���� 10000���� ����� ��������.
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
//	os << "�̸�" << d.name << "����" << d.age << std::endl;
//	return os;
//}
//
//int main() {
//	srand(time(NULL));
//	Dog dogs[100000];
//	/*
//	Q:100000������ ���´�
//	A:�޸��� ���ы����� �迭�� ���������� �־�� �ϱ� ������(�� ����)
//	(��)
//	���α׷��Ӱ� ����� �� �ִ� �޸� ������
//	��������(����):�Ѱ谡 ������-�����޸𸮸� �������� �Űܵ� �ذ�
//	��:�����Ҵ�
//
//	������ ��°ſ� �������� ��°ſ� ���̴� ����??
//	
//	���α׷��� ����ȴٴ°�? ->�޸𸮿� �ö�� �ִ�.
//	*/
//
//
//
//	default_random_engine dre;
//	uniform_int_distribution<int>uid; //������ �������� ������ ǥ�� ������ ���� ���� ������������ ����ū �������� ���� ����
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





//�����Ҵ����� �ذ�



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
//	os << "�̸�" << d.name << "����" << d.age << std::endl;
//	return os;
//}
//
//
//int main() {
//	srand(time(NULL));
//
//	//�� 10������ ����
//	/*new�� �����ڸ� ȣ������*/
//
//	Dog* dogs;
//	dogs =new Dog[1000000];
//
//	/*
//	
//	���� ������ �ϳ��� ������ 1000000���� �ڷ����� �����Ծƴ϶�
//	������ 100000���� ������ �߱� ������ ���� �̻�����
//
//	Dog* dogs[1000000];
//	
//	*/
//
//
//	default_random_engine dre;
//	uniform_int_distribution<int>uid; //������ �������� ������ ǥ�� ������ ���� ���� ������������ ����ū �������� ���� ����
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
�츮�� ó���ؾ� �� �ڷ�� ��� �ٸ� ���� �ִ�.
�ڷᰡ ���Ͽ� �ִ� ��� �о�ͼ� ó���غ���
*/

/*
������ ����(0,10000)10000���� ����� ���Ͽ� ��������.
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
//	/*Ŭ���� �̱� ������ �����ڿ� �����̸� �Է°���
//	o:out
//	f:file
//	*/
//	std::ofstream out("����1000��.txt");
//
//
//	for(int i=0;i<1000;i++)
//	out << uid(dre) << std::endl;; /*�ѹ� ȣ��� 0~100000 ������ ���ڰ� ����*/
//
//}
//
//







#include<iostream>
#include<fstream>
#include<random>

/*
������ ������ "���� 1000�� txt"���Ͽ��ֵ�.
�о �����϶�

���� 1000���� ���Ͽ� �����ߴ�.
���Ͽ� 4000����Ʈ�� ����ϸ��� ���������� �׷��� �ʾҴ�.
4000����Ʈ�� ����Ϸ��� ��� �� �� ������?


*/
//
//int main() {
//	int n[1000];
//
//	std::ifstream in("����1000��.txt");
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
//���� 1000���� ����� ���Ͽ� ����϶�(4000 ����Ʈ�� �������)
//�޸𸮸� ����Ʈ�� �״�� write �Լ��� ����ϸ� �ȴ�.
//	? 4000 ����Ʈ�� �����ߴµ� 4010����Ʈ�� ��ϵǾ���. 10�� ����?
//
//	���̳ʸ� ���� �ؽ�Ʈ ����� ���� ������ 10����Ʈ�� �� ��ϵ�
//
//
//*/
//int main() {
//	std::ofstream out("���� 1000���޸� �״�� ����", std::ios::binary);
//			//st::ios::binary�� ���� ã�ƺ���
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
�����ð�- �������� ���Ͽ� �ִ� Dog�� �о�ͼ� �����غ���
����- å 2�忡 � ������ �ִ��� �о��
*/

/*
���� "���� 1000���� �޸𸮿� �״�� ����"�� �ִ� ���� 1000����
//�о�(read �Լ��� �о��) ������ �� ȭ�鿡 ����϶�.

*/
int main() {
	int* p=new int[10000];


	std::ifstream in("���� 1000���޸� �״�� ����",std::ios::binary);
	if (!in) {
		std::cout << "������ �����ϴ�." << std::endl;
		return 0;
	}
	in.read((char*)p, sizeof(int) * 1000);

	qsort(p, 1000, sizeof(int), [](const void* a, const void* b) {
		return *(int*)a - *(int*)b;
	});
}









