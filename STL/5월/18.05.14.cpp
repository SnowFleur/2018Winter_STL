#include<iostream>
#include<fstream>
#include<string>
#include<set>
#include<vector>
#include<map>

using namespace std;
int main() {

	string filename = "이상한 나라의 앨리스.txt";
	ifstream in(filename);

	if (!in) {
		std::cout << filename << "을 열 수 없습니다." << std::endl;
		return 0;
	}

	char c;
	/*유효할때까지*/
	while(in >> c) {
		std::cout << c << std::endl;


	}
}