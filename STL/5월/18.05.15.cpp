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


/*
unordered_set -Ű ���� �ؽ��Ͽ� ����
unordered_map - Ű�� ����� ����, Ű���� �ؽ��Ͽ� ����� ������ ���� ����
*/




/*
unordered_set -�������� �ʴ´�.
Unordered:������ ����
�ؽ�:�߰� �丷���ٴ� ��
*/
//int main() {
//	unordered_set<int> us{3,1,2,5,4};
//
//	/*
//	���Ҹ� �����ϸ� ������ ��Ʈ���� �� �ִ�.
//	�� �ڿ� �����Ŷ�� ������ ����
//	
//	*/
//	for (const int data : us) {
//		std::cout << data << " ";
//	}
//	std::cout << std::endl;
//	
//	/*Int���� �� �ǹ̰� ������ ���ٴ°��� �������! */
//	us.emplace(3);
//	for (const int data : us) {
//		std::cout << data << " ";
//	}
//	std::cout << std::endl;
//
//
//	/*Int���� �� �ǹ̰� ������ ���ٴ°��� �������! */
//	us.emplace(15);
//
//	for (const int data : us) {
//		std::cout << data << " ";
//	}
//	std::cout << std::endl;
//
//
//
//}










//
//int main() {
//	/**/
//	unordered_set<int> us{1,3,5,7};
//
//
//	/*�����̳ʿ� ���Ҹ� �ϳ� �߰��ϰ� �޸� �׸��� �׷� ����*/
//	/*����ð��� ������ ���������� �޸𸮸� ���� ����Ѵ�.*/
//
//	while (true) {
//		int num;
//		std::cout << "�߰��� ������ �Է��ϼ���:(-1 �Է��ϸ� ������)";
//		std::cin >> num;
//		if (num == -1)
//			break;
//
//		us.emplace(num);
//
//		for (int i = 0; i < us.bucket_count(); ++i) {
//			cout << "[" << i << "]-";
//			for (auto p = us.cbegin(i); p != us.cend(i); ++p) {
//				cout << *p << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//		cout << "--------------------------------------------------------" << endl;
//		cout << endl;
//
//
//		/*
//		
//		*/
//		
//	}
//}










//class MyHash {
//private:
//
//public:
//	size_t operator()(const Model& a)const {
//		/*
//		int���� �־��ָ� 
//		*/
//		hash<int>hashVal;
//
//
//		return hashVal(a.getSize());
//	}
//
//};

//
//int main() {
//	/*
//	���� ���� �𵨵����Ͱ� ��� ��Ŷ�� �����ϴ��� �˾ƾ��ϴµ� ���� �����ؾ��Ѵ�.
//	����X,�̷��� �ִ� ������ �˾ƵѰ�
//	���� ���� �ڷ����� �������� �ؽ��� �������Ѵ�.
//	*/
//
//	/* �� 3������ �ʿ��� �����̳��� �ڷ���,�ؽ��Լ�,�Ȱ����� ǥ���� �� �ִ� �Լ� == */
//	unordered_set<Model, MyHash > us;
//	
//	us.emplace(1);
//	us.emplace(22);
//	us.emplace(333);
//
//
//	/*
//	a<b
//	less�����ڰ� set�� �⺻
//
//	a<b �� �����̰�  b>a�� �����̸�
//	a==b����
//
//	*/
//
//}





/***********************************************************
*****************************�ݺ���*****************************
***********************************************************/
//����,����Ʈ,���,��,��������Ʈ
//set map
//unordered set unodered map


/*

�ݺ���(��� ������ �ݺ��ڰ� ����)��� �����ؾ� �ϴ� ����
*, : ������(dereferenicing)
== : ��(comaprision)
=  : �Ҵ�(assignment)


�ݺ����� ����(category)
����¹ݺ���
�����ݺ��� :++
�������ݺ���(�����ݺ���)++,--
�����ݺ��� +=,-= (�޸𸮰� �پ��ִ°Ÿ� ��밡��)

*/


//int main() {
//	/*
//	STL�����̳ʴ� �������� �ݺ��ڸ� ��û�ϸ� �� �� �־����
//	
//	*/
//	
//	/*
//	�ҽ�.cpp�� �а� ���
//	����� �ݺ��ڸ� ����ؼ� �ۼ��� ���ϴ�.
//	*/
//	ifstream_iterator in("�ҽ�.cpp");
//
//	
//
//}
//













