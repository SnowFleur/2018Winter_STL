

#include<iostream>
#include<iomanip>
#include<random>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>
#include"Model.h"
using namespace std;


/*
���¸� ������ �ִ� ��ü
*/

//int main() {
//
//
//	default_random_engine dre;
//	normal_distribution<> nd(0, 1);
//	/*
//	�ڿ� �ñ׸�
//	*/
//
//	/*��ü �ε� ȣ�Ⱑ���� ��ü(32��Ʈ��)*/
//	
//	for (int i = 0; i < 100; ++i)
//		std::cout << setw(20) << nd(dre);
//	/*operato()()
//	���¸� ������ ����
//	*/
//
//}







/*  deque  */




/*
array,vextor,deque�� �پ��ִ� �޸�
���������� ������ �����ð����� �����ϴ�.

��:�հ������� �޸� ���Ի����� �����Ӵ�.
ť


*/

//int main() {
//
//	deque<int>d;
//	d.operator[](0);
//	/*
//	STL�� ���ܸ�ó���� ���ϱ⶧���� ����ó���� �Ϸ��� at�� ����ؾ��Ѵ�.
//
//	try catch�� �� �Ⱦ�
//	*/
//	try{
//
//		//std::cout << d.operator[](0) << std::endl;
//		// std::cout <<d.at(0) << std::endl;
//	}
//	catch (const std::exception& e){
//		std::cout << e.what() << std::endl;
//		
//	}
//
//}
//
//int main() {
//
//	deque<int>d(10);
//	/*ĭ�� 10�� �ִµ�, ���⿡ ����� ������ ���Ժ����� ������ �غ���*/
//	
//	random_device rd;
//	default_random_engine dre(rd());
//	normal_distribution<> nd(0, 0.1);
//	uniform_int_distribution<> uid(0,9);
//	/*
//	�ڿ����� Ŀ������ ��� Ŀ����.
//	*/
//
//	/* -1���� 1������ ���� �̿��ϵ��� ����*/
//	for (int i = 0; i < 10000000; ++i) {
//		//double val = uid(dre);
//		//if (val < -1.0 || 1.0 < val)
//		//	continue;
//
//		//val += 1.0; //0~2���̰�
//		//val *= 5.0;// 0~10
//
//		++d[uid(dre)];
//
//		//++d[(int)val];
//		/*���� ����Ѵ�*/
//	}
//
//		for (int i = 0; i < d.size(); ++i)
//			std::cout << "["<<i<<"]:"<<d[i] << std::endl;
//
//
//}



/*
List   �ݺ��ڼҸ��̶� �����ΰ�?? (�߰���� ��������?)
*/
//
//int main() {
//
//	list<int> v;
//	vector<int> v2;
//	v2.reserve(100);
//
//	v.push_back(1);
//	auto p = v.begin();
//	std::cout << *p << std::endl;
//
//
//	v.push_back(2);
//	std::cout << *p << std::endl;
//	
//
//	p++;
//	std::cout << *p << std::endl;
//}







//
///*
//�����̳ʿ��� Ư���� ���Ҹ� ã�ƺ���.
//
//���׸� ���α׷���
//*/
//vector<int>::iterator f(int );
//
//int main() {
//
//	vector<int> v{ 1,3,5,7,9,2,4,6,8,10 };
//
//	//v�� 9��� ���� �ִ��� ã�ƺ��ÿ�
//	
//	auto p= f(19);
//	if (p != v.end())
//		std::cout << "ã��" << std::endl;
//	else
//		std::cout << "���ϴ°��� ����" << std::endl;
//
////	distance(v.bggin(), p) + 1; //����� ã�� �� ����
//
//
//	std::find(v.begin(), v.end(), 9);
//
//
//}
//auto f(int) {
//
//}





/*
���ø��� �̿��� find����
*/



//
//
///*
//�����̳ʿ��� Ư���� ���Ҹ� ã�ƺ���.
//
//���׸� ���α׷���
//*/
///*�ݺ��� f �ݺ��� b,�ݺ��� e,�� v*/
//template<class  Iter,class Val>
//Iter f(Iter b, Iter e, Val v);
//
//
//int main() {
//
//	vector<int> v{ 1,3,5,7,9,2,4,6,8,10 };
//
//	//v�� 9��� ���� �ִ��� ã�ƺ��ÿ�
//
//	vector<int>::iterator p = f(v.begin(),v.end(),  19);
//	if (p != v.end())
//		std::cout << "ã��" << std::endl;
//	else
//		std::cout << "���ϴ°��� ����" << std::endl;
//
//	//	distance(v.bggin(), p) + 1; //����� ã�� �� ����
//
//
//	std::find(v.begin(), v.end(), 9);
//
//
//}
//template<class Iter, class Val>
//Iter f(Iter b, Iter e, Val v) {
//	while (b != e) {
//		if (*b == v)
//			return b;
//		else
//			++b;
//	}
//	return e;
//}





void f();
int main() {

	list<int> v{ 1,3,5,7,9,2,4,6,8,10 };

	//v���� ù Ȧ���� ��ġ�� ã�ƶ�.
	list<int>::iterator p = std::find(v.begin(), v.end(), []( int a)->bool {


		return a & 1;

	
	});


	if (p != v.end())
		std::cout << "ã��" << std::endl;
	else
		std::cout << "���ϴ°��� ����" << std::endl;
}
