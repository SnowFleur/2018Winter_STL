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
////전세계 모든언어를 출력함 한글은 깨져서 나오지만 출력은 됨
////	system("chcp 437");
//
//	/*  소스.cpp를 읽고 출력
//		입출력 반복자를 사용해서 작성해 봅니다.
//	*/
//	ifstream in("18.05.01.cpp");
//	//copy(어디부터,어디까지를,어디로)
//
//
//	//copy(파일 시작부터,끝까지,화면으로)
//	copy(istream_iterator<char>(in), istream_iterator<char>(), ostream_iterator<char>(cout));
//
//	/*
//	?가 나오는 이유:
//	코드페이지 때문
//	한글이 나올려면 유니코드가아닌 코드페이지야함
//	*/
//
//}



/*
반복자
반복자 종류에 따라 다른 점
반복자의 종률를 판단하고 효율적인 알고리즘을 작성하는 법
*/


//int main() {
//	int a[]{1,2,3};
//
//
//
//	/*
//	메모리가 붙어있으면
//	for 조건에 <=이런거 라던지
//	증감조건에 p+=2등
//	연산이 가능하다.
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
//// std::vector<int>::iterator, std::vector<int>::iterator 이렇게 두개로 할 수도있음
////f(a.begin(),a.begin()+1);
//void f(int*, int*);
//int main() {
//
//	vector<int>a{ 1,2,3 };
//	f(begin(a)); //f는 반복자가 가리키는 값을 2배로 만든다.
//	f(&a[0], &a[1]); //f는 두 반복자의 값을 교환한다.
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
//	//f는 어떤 반복자라도 반복자를 받아 값을 교환한다.
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
//	/*객체가 전달되어야 하기떄문에 iterator의 객체를 넘긴다.*/
//	f(vector<int>::iterator());
//
////	f(p); //이 함수는 반복자의 종류를 화면에 출력한다.
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
//	/*반복자의 종류를 나눈 이유는 메모리가 붙어있냐 아니냐의 차이*/
//	if (Iter의 종류가 랜덤이라면)
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