#include<iostream>
#include<fstream>
#include<string>
#include<set>
#include<vector>
#include<map>

using namespace std;
int main() {

	string filename = "�̻��� ������ �ٸ���.txt";
	ifstream in(filename);

	if (!in) {
		std::cout << filename << "�� �� �� �����ϴ�." << std::endl;
		return 0;
	}

	char c;
	/*��ȿ�Ҷ�����*/
	while(in >> c) {
		std::cout << c << std::endl;


	}
}