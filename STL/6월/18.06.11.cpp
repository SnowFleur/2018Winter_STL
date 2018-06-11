

/*
partition-���ǿ� �´� �Ͱ� �ƴѰ��� �и��Ѵ�.
	Ȧ¦������,3�ǹ��,�ѱ����� �ܱ����� ������
sort-��ü�� ����(�⺻<)�� ���� �����Ѵ�.
partial_srot-�� ������� �����Ѵ�.
	
nth_elemnet-����ȿ� ��� �Ͱ� �ƴ� ���� �и��Ѵ�.
*/
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<fstream>
#include<string>
#include<iterator>
using namespace std;

//int main() {
//	vector<int >v(10000);
//	std::iota(v.begin(), v.end(), 1);
//	random_shuffle(v.begin(), v.end());
//
//	sort(v.begin(), v.end());
//	/*�ִ��� ������ ���θ� �˷��ְ� ��ġ���� �������� �ʴ´�.*/
//	cout << boolalpha << binary_search(v.begin(), v.end(), 7777) << std::endl;
//
//	/*9777�� 3���ִ°�쿡 upper_bound�� ����ϸ� 3���� ���� �� ����*/
//	auto p=lower_bound(v.begin(), v.end(), 9777);
//
//	if (p != v.end()) {
//		std::cout << p - v.begin() + 1 << "�� �Դϴ�" << std::endl;
//	}
//
//
//	/*�� �Լ��� �̿��ؾ� ��ġ�� �˷��ش�.*/
//	/*���������ε� ���� set,�ʿ��� ��������� ����*/
//	auto iter = std::equal_range(v.begin(), v.end(), 9777);
//	std::cout << iter.second - iter.first << "���� �ֽ��ϴ�" << std::endl;
//	/*
//	���Ͽ��� lowbound
//	������: upperbound
//	equal_range
//	*/
//	system("pause");
//
//}



/*
�а� �ڷ�ǿ��� "�ܾ��.txt"�� �ٿ�޾� vector<stirng>�� �о��ּ���

*/
int main() {

	std::vector<string> v;
	v.reserve(100000);
	std::ifstream open("�ܾ��.txt");

	//std::string n;

	//while (open >>n) {
	//	v.emplace_back(n);
	//}

	//for (auto iter = v.cbegin(); iter != v.cbegin()+100; ++iter) {
	//	std::cout <<*iter << std::endl;
	//}



	//�ߺ��� �ܾ�� ���°�?


	/*�̷��� ����� ������� �̷��� �ض�*/
	std::vector<string>v2{ istream_iterator<string>(open), istream_iterator<string>() };

	std::cout << v2.size() << "���� ǥ��� �о����ϴ�." << std::endl;

	
	//������ ���ĵǾ� �ֳ�?
	std::cout << "�� �ܾ���� ���ĵǾ��ֳ���?:" << boolalpha << is_sorted(v.begin(), v.end()) << std::endl;

	/*���ĵǾ� �������� ��밡��*/
	auto p=std::unique(v2.begin(), v2.end());

	if (p != v2.end()) {
		std::cout << "�ߺ��� �ܾ �ֳ׿�" << std::endl;
	}
	else {
		std::cout << "�ߺ��� �ܾ �����ϴ�" << std::endl;
	}

	/*
	1. game�̶�� �ܾ �ֳ� ã�ƺ�!
		�ִٸ� �� ��° �ܾ����� ����� ��
	*/
	/*auto result=std::binary_search(v2.begin(), v2.end(), "game");
	if (result) {
		std::cout << "���� �����մϴ�" << std::endl;
		auto iter=std::lower_bound(v2.begin(), v2.end(), "game");

		std::cout << iter - v2.begin() + 1<<"��°�� �ֽ��ϴ�."<< std::endl;

	}
*/




	/*��� �ִ������� ����� ������ equal_range�� �� ȿ�����̴�.*/
	//auto iter=equal_range(v2.begin(), v2.end(), string{ "game" });
	///*���Ѽ��� ���Ѽ��� ����==�����̶� �ܾ�� �������� �ʴ´�.*/
	//if (iter.first == iter.second) {
	//	std::cout << "�׷� �ܾ� �����ϴ�" << std::endl;
	//}
	//else {
	//	std::cout << iter.first - v2.begin() + 1 << "���� �ܾ��Դϴ�." << std::endl;
	//}





	/*
	2. ����ڰ� ã�� �ܾ �ֳ�?
		�ִٸ� �� ��° �ܾ����� ����� ��, - ������
	*/

	//while (1) {
	//	string s;
	//	std::cout << "�ܾ �Է��ϼ���:";
	//	cin >> s;

	//	auto iter = equal_range(v2.begin(), v2.end(), s);
	//	/*���Ѽ��� ���Ѽ��� ����==�����̶� �ܾ�� �������� �ʴ´�.*/
	//	if (iter.first == iter.second) {
	//		std::cout << "�׷� �ܾ� �����ϴ�" << std::endl;
	//	}
	//	else {
	//		std::cout << iter.first - v2.begin() + 1 << "���� �ܾ��Դϴ�." << std::endl;
	//	}

	//}

	/*
	3. �� �������� ���� ���̰� �� �ܾ ã�� ����϶�.
	*/
	

	auto iter = max_element(v2.cbegin(), v2.cend(), [](const auto& first,const string& second) {
		return first.length()<second.length();
			//�Ǵ� size���
	});
	std::cout <<"���̰� ���� �� �ܾ��:"<< *iter << std::endl;

	/*
	4.�� �������� ���̰� �� �ܾ� 20���� ��� ����϶�.
	*/
	/*�پ��ִ� �ڷ����� ����*/
	/*���ĵȰ�ó�� �������� �����Ѱ� �ƴϴ�.*/
	
	/*
	nth�� parital�� �� Ȯ���غ���
	*/
	/*partial_sort(v2.begin(), v2.begin() + 100, v2.end(), [](const string& a, const string& b) {

	};*/
	//nth_element(v2.begin(), v2.begin() + 100, v2.end(), [](const string& a,const string& b) {
	//	return a.size() > b.size();
	//});
	///*������ ������������ ���̱����� ��������ش�?*/
	//cout << "���̰� ��ܾ� 20��" << std::endl;
	//for (auto i = v2.cbegin(); i < v2.cbegin() + 100; ++i) {
	//	std::cout << *i << std::endl;
	//}


	/*
	�� �������� s�� �����ϴ� �ܾ��� ������?
	*/

	/*std::cout<<"s�ν����ϴ� �ܾ�"<<count_if(v2.begin(), v2.end(), [](const string& s) {
		return *s.begin() == 's';
	}) << std::endl;
*/


/*
	auto a=equal_range(v2.begin(), v2.end(), string{ "s" });
	auto b=equal_range(v2.begin(), v2.end(), string{ "t" });
	std::cout << b.first - a.first << std::endl;

	�⸻���� ����������� ���´�. ���̳ʸ������̷��� ���� �� �ֳ�??
*/


	/*
	dog-god: anagram
	
	����ڰ� �Է��� �ܾ��� �ֳʱ׷��� ��� ����ϼ���.

	*/
	/*������ ����*/
	while (true) {
		/*�̷��� �ϸ� �� ������ �����Ϸ��� �˾Ƽ� ���ش�.*/
		string s;
		std::cout << "�ܾ �Է��ϼ���:";
		std::cin >> s;
		sort(s.begin(), s.end());
		do {

			/*s�� �ִ��� ����϶�*/
			if(binary_search(v2.begin(), v2.end(), s))
			std::cout << s << std::endl;

			/*
			�ܾ���� �þ�� �׸�ŭ ��������. ��� �ؾ��ұ�??
			*/
		}while(next_permutation(s.begin(), s.end()));

	}




	system("pause");
}