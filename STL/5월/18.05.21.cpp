//#include<iostream>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<unordered_set>
//#include<functional>
//#include<iterator>
//#include"Model.h"
//using namespace std;

//
//int main() {
//
////������ ���� ����� �ѱ��� ������ �������� ����� ��
////	system("chcp 437");
//
//	/*  �ҽ�.cpp�� �а� ���
//		����� �ݺ��ڸ� ����ؼ� �ۼ��� ���ϴ�.
//	*/
//	ifstream in("18.05.01.cpp");
//	//copy(������,��������,����)
//
//
//	//copy(���� ���ۺ���,������,ȭ������)
//	copy(istream_iterator<char>(in), istream_iterator<char>(), ostream_iterator<char>(cout));
//
//	/*
//	?�� ������ ����:
//	�ڵ������� ����
//	�ѱ��� ���÷��� �����ڵ尡�ƴ� �ڵ�����������
//	*/
//
//}



/*
�ݺ���
�ݺ��� ������ ���� �ٸ� ��
�ݺ����� ������ �Ǵ��ϰ� ȿ������ �˰����� �ۼ��ϴ� ��
*/


//int main() {
//	int a[]{1,2,3};
//
//
//
//	/*
//	�޸𸮰� �پ�������
//	for ���ǿ� <=�̷��� �����
//	�������ǿ� p+=2��
//	������ �����ϴ�.
//	*/
//
//
//	for (auto p = begin(a); p != end(a); ++p)
//		std::cout << *p << std::endl;
//
//}





//
//void f( std::vector<int>::iterator);
//
//// std::vector<int>::iterator, std::vector<int>::iterator �̷��� �ΰ��� �� ��������
////f(a.begin(),a.begin()+1);
//void f(int*, int*);
//int main() {
//
//	vector<int>a{ 1,2,3 };
//	f(begin(a)); //f�� �ݺ��ڰ� ����Ű�� ���� 2��� �����.
//	f(&a[0], &a[1]); //f�� �� �ݺ����� ���� ��ȯ�Ѵ�.
//
//	for (int d : a)
//		std::cout << d << " ";
//	std::cout << std::endl;
//}
//
//void f(std::vector<int>::iterator iter) {
//	//	(*iter) *= 2;
//}
//
//void f(int* first, int* second) {
//	//int temp = *first;
//	//*first = *second;
//	//*second = temp;
//}
//







//template<class Iter>
//void f(Iter a, Iter b) {
//	
//
///* auto */
////	iterator_traits<Iter>::value_type temp = *a;
//
//
//	auto temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	vector<int>a{ 1,2,3 };
//	//f�� � �ݺ��ڶ� �ݺ��ڸ� �޾� ���� ��ȯ�Ѵ�.
//	f(a.begin(), a.begin() + 1);
////	f(&a[0], &a[1]);
//	
//	for (int d : a)
//		std::cout << d << " ";
//	std::cout << std::endl;
//
//}






//template<class Iter>
//void f(Iter);
//
//template<class Iter>
//void f(Iter a) {
//	iterator_traits<Iter>::iterator_category c;
//
//	std::cout<<typeid(c).name() << std::endl;
//
//}
//
//int main() {
//
//	istream_iterator<char>p(cin);
//
//	/*��ü�� ���޵Ǿ�� �ϱ⋚���� iterator�� ��ü�� �ѱ��.*/
//	f(vector<int>::iterator());
//
////	f(p); //�� �Լ��� �ݺ����� ������ ȭ�鿡 ����Ѵ�.
//
//}



//
//template<class T>
//iterator_traits<T>::difference_type mydistance(T,T);
//
//template<class T>
//iterator_traits<T>::difference_type mydistance(T beg, T end) {
//
//
//	/*�ݺ����� ������ ���� ������ �޸𸮰� �پ��ֳ� �ƴϳ��� ����*/
//	if (Iter�� ������ �����̶��)
//		return end - beg;
//	else
//		int cnt{ 0 };
//	while (beg != end) {
//		cnt++;
//		++beg;
//
//	}
//	return cnt;
//
//}
//
//
//
//int main() {
//
//	int* p = reinterpret_cast<int*>(1000);
//	int* q = reinterpret_cast<int*>(2000);
//	
//
//
//	std::cout << mydistance(p, q) << std::endl;
//
//
//}