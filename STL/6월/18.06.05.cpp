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
//9�� �˰���
//1. ���Ҹ� �������� �ʴ� �˰���
//2, ���Ҹ� �����ϴ� �˰���
//3. ���İ� ���� �˰���
//*/
//
////int main() {
////	/*
////	transform
////	�ҽ�.cpp�� �Է¹޾� �����ڸ� �빮�ڷ� ��ȯ�Ͽ� �ҽ�.cpp�� �����Ͻÿ�
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
////	// a[]* b[] �� ����� ȭ�鿡 ����� ������
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
////	/*�̷����ϸ� ������� ȣ���� �������� ������ �ƴϴ�.
////	stable_
////	*/
////
////	//auto p=stable_partition(begin(a), end(a), [](int number) {
////	//	return number & 1;
////	//});
////
////	//std::cout << "Ȧ���� ����:" << std::distance(begin(a), p) << std::endl;
////
////	//std::cout << "Ȧ����:";
////	//for (auto i = begin(a); i < p; ++i) 
////	//	std::cout << *i << " ";
////	//std::cout << std::endl;
////
////	//std::cout << "¦����:";
////	//for (auto i = p; i < end(a); ++i)
////	//	std::cout << *i << " ";
////	//std::cout << std::endl;
////
////
////
//////	��Ȱ: Ȧ���� ¦���� ����� ���� odd, even�� �Űܶ�
////	/*�⺻������ stable�� �����ϴ°����� ����*/
////	 partition_copy(begin(a), end(a), back_inserter(odd), back_inserter(even), [](int a) {
////		 return a & 1;
////	 });
////
////
////	 cout << "Ȧ���� ����" << odd.size() << std::endl;
////
////	 cout << "Ȧ����";
////	 for (int n : odd)
////		 cout << n << " ";
////	 std::cout << std::endl;
////
////	 cout << "¦����";
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
////	//	��Ȱ: Ȧ���� ¦���� ����� ���� odd, even�� �Űܶ�
////	/*�⺻������ stable�� �����ϴ°����� ����*/
////	partition_copy(begin(a), end(a), back_inserter(odd), back_inserter(even), [](int a) {
////		return a & 1;
////	});
////
////
////	cout << "Ȧ���� ����" << odd.size() << std::endl;
////
////	cout << "Ȧ����";
////	for (int n : odd)
////		cout << n << " ";
////	std::cout << std::endl;
////
////	cout << "¦����";
////	for (int n : even)
////		cout << n << " ";
////	std::cout << std::endl;
////
////	std::cout << "a�� �����ִ� ������ ������:" << a.size() << std::endl;
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
////	//v�� ������������ �����ϰ� ����϶�
////	std::sort(v.begin(), v.end(), greater<int>());
////
////	for (auto a : v)
////		std::cout << a << " ";
////	std::cout << std::endl;
////
////	//1����� 10������� ������ ��
////		/*��Ʈ�迭�Լ��� �޸𸮰� �پ��ֱ� ������
////		v.begin()+10�� ������
////		*/
////
////	//	partial_sort(v.begin(), v.begin() + 10, v.end());
////
////	/*
////	�����Լ��� ����Լ��̱� ������ ��������
////	�����Լ��� �����Ѵ�.
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
//	V�� ������������ �����϶�.
//	V���� 7777�̶�� ���� �ִ��� ã�ƺ���
//	��� �ִ���(�������) ����غ���
//	*/
//
//	auto iter=std::find(v.begin(), v.end(), 7777);
//
//	if (iter != v.end()) {
//	/*distance�� ó���� ó���� 0�̱⶧���� +1���ؾ���*/
//		std::cout << "���� �����մϴ�" << std::endl;
//		std::cout << std::distance(v.begin(), iter) + 1 << "���Դϴ�." << std::endl;
//		//p-v.begin()+1
//	}
//	else
//		std::cout << "���� ���������ʽ��ϴ�" << std::endl;
//
//	/*�ִ��� ������ ���θ� �˷��ְ� ��ġ���� �������� ���礤��.*/
//	cout << boolalpha << binary_search(v.begin(), v.end(), 7777) << std::endl;
//
//
//	/*
//	���Ͽ��� lowbound
//	������: upperbound
//	equal_range
//	*/
//
//	/*���������ε� ���� set,�ʿ��� ��������� ����*/
//	auto iter=std::equal_range(v.begin(), v.end(), 9777);
//
//
//	system("pause");
//
//}