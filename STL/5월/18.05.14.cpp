//#include<iostream>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<functional>
//using namespace std;
//
//
//
///*
//1�� ���� �󵵼� ����
//*/
//
////int main() {
////
////	/*�� ������ (UTF-8) ������ ���Ϸ� BOM(Byte order mark) 3����Ʈ�� ��ϵǾ��ִ�.
////	3����Ʈ�� �����ؾ� ��¥ �ؽ�Ʈ�� ���� �� �ִ�.
////	
////	���� ������ BOM�� ����� ����ϱ⸦ �ϸ� ����TEXT���� ��밡��??
////	*/
////	string filename = "�̻��� ������ �ٸ���.txt";
////
////	ifstream in(filename);
////
////	if (!in) {
////		std::cout << filename << "�� �� �� �����ϴ�." << std::endl;
////		return 0;
////	}
////
////	char c;
////
////	/*BOM�� �����Ѵ�.*/
////	in >> c >> c >> c; 
////
////	map<char, int>cimap;
////	/*��ȿ�Ҷ�����*/
////	while(in>>c) {
////		/*�����迭ó�� �̿��� �� �ִ�.*/
////		cimap[c]++;
////
////		/*c�������� �ִ� ���۷����� �������ش�.
////		  �� ���� �� ���ش�.*/
////		cimap.operator[](c)++;
////
////		}
////
////	/*ö���� ���� �󵵱������� ����
////	���Ϳ� �ű�ų� Ȥ�� �������� ����°� ����
////	���� ����°� �� ����
////	
////	1.��ü�ǻ���
////	2.��ü�Ǻ���
////	3.��ü�ǿ���
////	*/
////	multimap<int, char,greater<int>>icmap;
////
////	for (const auto& d : cimap) {
////		/*��ü�� �����̳ʰ� ������ �� �ΰ��� ���ڸ� ������*/
////		icmap.emplace(d.second, d.first);
////	}
////
////	/*����غ���*/
////	/*auto& auto�� �ڷ����� �����Ѵ�.   */
////	for (const pair<int, char>&d : icmap) 
////		std::cout << "[" << d.second << "] - " << d.first << endl;
////
////
////		/*c=in.get()�̷��� ����ϸ� �״�� �о�´�. ��������*/
////		/*  in>>c   char���·� �о���� ������ ������ �����Ѵ�.*/
////
////
////}
//
////
/////*
////2��
////*/
////
////int main() {
////
////	/*�� ������ (UTF-8) ������ ���Ϸ� BOM(Byte order mark) 3����Ʈ�� ��ϵǾ��ִ�.
////	3����Ʈ�� �����ؾ� ��¥ �ؽ�Ʈ�� ���� �� �ִ�.
////
////	���� ������ BOM�� ����� ����ϱ⸦ �ϸ� ����TEXT���� ��밡��??
////	*/
////	string filename = "�̻��� ������ �ٸ���.txt";
////
////	ifstream in(filename);
////
////	if (!in) {
////		std::cout << filename << "�� �� �� �����ϴ�." << std::endl;
////		return 0;
////	}
////
////	string c;
////
////	/*BOM�� �����Ѵ�.*/
////	in >> c >> c >> c;
////
////	map<string, int>simap;
////	/*��ȿ�Ҷ�����*/
////	while (in >> c) {
////		simap[c]++;
////	}
////	in.close();
////
////
////	multimap<int, string, greater<int>>ismap;
////
////	for (const auto& d : simap) {
////		/*��ü�� �����̳ʰ� ������ �� �ΰ��� ���ڸ� ������*/
////		ismap.emplace(d.second, d.first);
////	}
////	/*�տ��� 100����*/
////	
////	 auto p = ismap.cbegin();
////	for (int i = 0; i < 100; ++i) {
////		std::cout << "[" << p->second << "] - " << p->first << endl;
////		++p;
////	}
////
////}
//
//
//
//
//
//
//
///*
//ã�� �ܾ �� �� �����ϴ��� �˷��ּ���
//*/
////
////int main() {
////
////	/*�� ������ (UTF-8) ������ ���Ϸ� BOM(Byte order mark) 3����Ʈ�� ��ϵǾ��ִ�.
////	3����Ʈ�� �����ؾ� ��¥ �ؽ�Ʈ�� ���� �� �ִ�.
////
////	���� ������ BOM�� ����� ����ϱ⸦ �ϸ� ����TEXT���� ��밡��??
////	*/
////	string filename = "�̻��� ������ �ٸ���.txt";
////
////	ifstream in(filename);
////
////	if (!in) {
////		std::cout << filename << "�� �� �� �����ϴ�." << std::endl;
////		return 0;
////	}
////
////	string c;
////
////	/*BOM�� �����Ѵ�.*/
////	in >> c >> c >> c;
////
////	map<string, int>simap;
////	/*��ȿ�Ҷ�����*/
////	while (in >> c) {
////		simap[c]++;
////	}
////	in.close();
////
////	string word;
////	std::cout << "ã���� �ܾ�¿�?";
////	cin >> word;
////
////
////
////	/*�����Լ� find�� ����ϸ� �� ��������. ���� �׻� ������ �ϰ� �ְ� �������� �˻��� �Ϸ��� �ϸ�
////	  ���������� ã���ش�. log�ð� �ϳ��� �ݺ��ڸ� �ѱ� ������ ����.
////	
////	���� �ð��� ������Ѵ�. ���� �˻��ϱ� ���� �Է��ϴ� �ð��� ����Ѵ�.
////	*/
////
////	/*ã�����ϴ� �ܾ key���̴�.*/
////	const auto iter=simap.find(word);
////	multimap<int, string, greater<int>>ismap;
////
////	if(iter!=simap.end())
////	cout << word << "��";
////	else
////	cout << word << "�� �̻��� ������ �ٸ����� �����";
////
////}
//
//
//
//
///*
//3��
//*/
//
//int main() {
//
//	/*�� ������ (UTF-8) ������ ���Ϸ� BOM(Byte order mark) 3����Ʈ�� ��ϵǾ��ִ�.
//	3����Ʈ�� �����ؾ� ��¥ �ؽ�Ʈ�� ���� �� �ִ�.
//
//	���� ������ BOM�� ����� ����ϱ⸦ �ϸ� ����TEXT���� ��밡��??
//	*/
//	string filename = "�̻��� ������ �ٸ���.txt";
//
//	ifstream in(filename);
//
//	if (!in) {
//		std::cout << filename << "�� �� �� �����ϴ�." << std::endl;
//		return 0;
//	}
//
//	string c;
//
//	/*BOM�� �����Ѵ�.*/
//	in >> c >> c >> c;
//
//	map<string, int>simap;
//	/*��ȿ�Ҷ�����*/
//	while (in >> c) {
//		simap[c]++;
//	}
//	in.close();
//
//
//	multimap<int, string, greater<int>>ismap;
//
//	/*���� ���̰� �� �ܾ��? (�ܾ�� �������� �и���)*/
//
//	/*
//	STL���� �����ϸ�(�װ� �ȶ��ϴٸ�) for loop�� ������� �ʴ´�.(����� �˰����� �ִ°�쿡 �ش��ϴ¸�)
//	*/
//	auto p=max_element(simap.cbegin(), simap.cend(), [](const auto& a,const auto& b) {
//	
//		return a.first.lenghth() < b.first.lenghth();
//	});
//	if (p != simap.cend()) {
//		std::cout<<"���� �� �ܾ��"<< p->first << std::endl;
//	}
//
//}
//
