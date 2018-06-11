//
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<iterator>
//#include<vector>
//#include<fstream>
//#include<numeric>
//#include<functional>
//using namespace std;
///*
//9장 알고리즘
//1. 원소를 수정하지 않는 알고리즘
//2, 원소를 수정하는 알고리즘
//3. 정렬과 관련 알고리즘
//*/
//
////int main() {
////	/*
////	transform
////	소스.cpp를 입력받아 영문자를 대문자로 변환하여 소스.cpp에 저장하시오
////	*/
////	std::string name{ "abcdefghijklmn" };
////
////	ifstream in("18.06.05.cpp");
////	ofstream out("18.06.05X.cpp");
////	
////	std::transform(istream_iterator<char>(in), istream_iterator<char>(), ostream_iterator<char>(out), [](char c) {
////		return toupper(c);
////	});
////
////
////}
//
//
////int main() {
////	int a[]{ 1,2,3,4,5,6,7,8,9 };
////	int b[]{ 1,2,3,4,5,6,7,8,9,10,11,12 };
////	// a[]* b[] 한 결과를 화면에 출력해 보세요
////
////	std::transform(std::begin(a), std::end(a), begin(b), ostream_iterator<int>(cout, " "), [](int a,int b) {
////	
////		return a * b;
////	});
////
////
////	for (auto v : b)
////		std::cout << v << " ";
////
////}
//
////
////
////int main() {
////	/*int a[100];
////	std::iota(begin(a), end(a), 1);
////	for (int num : a)
////		std::cout << num << " ";
////	std::cout << std::endl;
////*/
////
////	int a[100];
////	iota(begin(a), end(a), 1);
////
////	vector<int> a(100);
////	vector<int> odd, even;
////
////
////	/*이렇게하면 순서대로 호출을 해주지만 정렬은 아니다.
////	stable_
////	*/
////
////	//auto p=stable_partition(begin(a), end(a), [](int number) {
////	//	return number & 1;
////	//});
////
////	//std::cout << "홀수의 갯수:" << std::distance(begin(a), p) << std::endl;
////
////	//std::cout << "홀수들:";
////	//for (auto i = begin(a); i < p; ++i) 
////	//	std::cout << *i << " ";
////	//std::cout << std::endl;
////
////	//std::cout << "짝수들:";
////	//for (auto i = p; i < end(a); ++i)
////	//	std::cout << *i << " ";
////	//std::cout << std::endl;
////
////
////
//////	분활: 홀수와 짝수로 나누어서 벡터 odd, even에 옮겨라
////	/*기본적으로 stable을 지원하는것으로 보임*/
////	 partition_copy(begin(a), end(a), back_inserter(odd), back_inserter(even), [](int a) {
////		 return a & 1;
////	 });
////
////
////	 cout << "홀수의 갯수" << odd.size() << std::endl;
////
////	 cout << "홀수들";
////	 for (int n : odd)
////		 cout << n << " ";
////	 std::cout << std::endl;
////
////	 cout << "짝수들";
////	 for (int n : even)
////		 cout << n << " ";
////	 std::cout << std::endl;
////
////
////	system("pause");
////}
//
////
////int main() {
////	vector<int> a(100);
////	iota(begin(a), end(a), 1);
////
////	vector<int> odd, even;
////
////	//	분활: 홀수와 짝수로 나누어서 벡터 odd, even에 옮겨라
////	/*기본적으로 stable을 지원하는것으로 보임*/
////	partition_copy(begin(a), end(a), back_inserter(odd), back_inserter(even), [](int a) {
////		return a & 1;
////	});
////
////
////	cout << "홀수의 갯수" << odd.size() << std::endl;
////
////	cout << "홀수들";
////	for (int n : odd)
////		cout << n << " ";
////	std::cout << std::endl;
////
////	cout << "짝수들";
////	for (int n : even)
////		cout << n << " ";
////	std::cout << std::endl;
////
////	std::cout << "a에 남아있는 원소의 갯수는:" << a.size() << std::endl;
////
////
////	system("pause");
////}
//
////
////
////int main() {
////	vector<int> v(100);
////
////	iota(v.begin(), v.end(), 1);
////	random_shuffle(v.begin(), v.end());
////
////	//v를 내림차순으로 정렬하고 출력하라
////	std::sort(v.begin(), v.end(), greater<int>());
////
////	for (auto a : v)
////		std::cout << a << " ";
////	std::cout << std::endl;
////
////	//1등부터 10등까지만 정렬해 줘
////		/*소트계열함수는 메모리가 붙어있기 떄문에
////		v.begin()+10이 가능함
////		*/
////
////	//	partial_sort(v.begin(), v.begin() + 10, v.end());
////
////	/*
////	정렬함수는 비싼함수이기 때문에 여러가지
////	보조함수가 존재한다.
////	is_sort
////	*/
////
////
////
////}
//
//
//
//
//int main() {
//	vector<int >v(10000);
//	std::iota(v.begin(), v.end(), 1);
//	random_shuffle(v.begin(), v.end());
//
//	sort(v.begin(), v.end());
//	/*
//	V를 오름차순으로 정렬하라.
//	V에서 7777이라는 값이 있는지 찾아보고
//	어디에 있는지(몇등인지) 출력해보라
//	*/
//
//	auto iter=std::find(v.begin(), v.end(), 7777);
//
//	if (iter != v.end()) {
//	/*distance는 처음과 처음은 0이기때문에 +1을해야함*/
//		std::cout << "값은 존재합니다" << std::endl;
//		std::cout << std::distance(v.begin(), iter) + 1 << "등입니다." << std::endl;
//		//p-v.begin()+1
//	}
//	else
//		std::cout << "값은 존재하지않습니다" << std::endl;
//
//	/*있는지 없는지 여부만 알려주고 위치값을 돌려주지 안흔ㄴ다.*/
//	cout << boolalpha << binary_search(v.begin(), v.end(), 7777) << std::endl;
//
//
//	/*
//	제일왼쪽 lowbound
//	오른쪽: upperbound
//	equal_range
//	*/
//
//	/*전역변수로도 존재 set,맵에서 멤버변수로 존재*/
//	auto iter=std::equal_range(v.begin(), v.end(), 9777);
//
//
//	system("pause");
//
//}