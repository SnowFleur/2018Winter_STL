

#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<fstream>
#include<string>
#include<iterator>
#include<map>
#include<list>
using namespace std;


struct PS : pair<string, string> {
public:
	PS(string s) :pair<string, string>(s, s) {
		sort(first.begin(), first.end());
	}
	operator string()const { return second; }
};


int main() {

	std::ifstream open("�ܾ��.txt");
	std::vector<string>v{ istream_iterator<string>(open), istream_iterator<string>() };

	std::cout << v.size() << "���� ǥ��� �о����ϴ�." << std::endl;

	vector<PS> pv{ v.begin(),v.end() };

	/*first �������� �����Ѵ�(��������).*/
	sort(pv.begin(), pv.end(), [](const PS& a, const PS& b) {
		return a.first < b.first;
	});


	///*����ڰ� �Է��� �ܾ��� �ֳʱ׷��� ��� ����ϼ���*/
	//for (int i = 20000; i < 20200;++i) {
	//	std::cout << pv[i].first << "  " << pv[i].second << std::endl;
	//}

	/*����ڰ� �Է��� �ܾ��� �ֳʱ׷����� ����϶�
	dog god
	equal_range
	*/

	//while (true) {
	//	string s;
	//	std::cout << "�ܾ��?";
	//	std::cin >> s;
	//	sort(s.begin(), s.end());
	//	/*���ĵ� ���������� �۵�
	//	S�� �ְ������ ��� ������ ������ �ȱ����� �����ϴ�?
	//	*/
	//	auto p = equal_range(pv.begin(), pv.end(), PS{ s }, [](const PS& a, const PS& b) {
	//		return a.first < b.first;
	//	});
	//	if (p.first != p.second) {
	//		std::cout << s << "�� �ֳʱ׷����Դϴ�.-" << std::endl;

	//		for (auto i = p.first; i < p.second; ++i)
	//			cout << i->second << " ";
	//		std::cout << std::endl;

	//	}
	//}





		//vector<PS>::const_iterator j, k, e;
		//j = pv.begin();
		//e = pv.end();

		//int i = 1;
		//while (true) {
		//	j=adjacent_find(j, e, [](const PS&a, const PS& b) {
		//		return a.first == b.first;
		//	});

		//	if (j == e)
		//		break;
		//	k=find_if_not(j, e, [j](const PS& a) {
		//		/*�޶����� ��*/
		//		return a.first == j->first;
		//	});

		//	/*[j,k)�� �ֳʱ׷��̴�. j���� K������ �ֳʱ׷��̴�.*/
		//	cout << "[" << i++ << "]";
		//	copy(j, k, ostream_iterator<string>(cout, " "));
		//	cout << endl;
		//	j = k;

		//}







	///*���� ã�� ���Ͽ� ����϶�*/
	//ofstream out("�ֳʱ׷���.txt");

	//vector<PS>::const_iterator j, k, e;
	//j = pv.begin();
	//e = pv.end();

	//int i = 1;
	//while (true) {
	//	j = adjacent_find(j, e, [](const PS&a, const PS& b) {
	//		return a.first == b.first;
	//	});

	//	if (j == e)
	//		break;
	//	k = find_if_not(j, e, [j](const PS& a) {
	//		/*�޶����� ��*/
	//		return a.first == j->first;
	//	});

	//	/*[j,k)�� �ֳʱ׷��̴�. j���� K������ �ֳʱ׷��̴�.*/
	//	out << "[" << i++ << "]";
	//	copy(j, k, ostream_iterator<string>(out, "   "));
	//	out << endl;
	//	j = k;

	//}



	/*�ֳʱ׷����� ã�� ������ �����̳ʿ� �����϶�*/
	map<string, list<string>>m;




	vector<PS>::const_iterator j, k, e;
	j = pv.begin();
	e = pv.end();

	int i = 1;
	while (true) {
		j = adjacent_find(j, e, [](const PS&a, const PS& b) {
			return a.first == b.first;
		});

		if (j == e)
			break;
		k = find_if_not(j, e, [j](const PS& a) {
			/*�޶����� ��*/
			return a.first == j->first;
		});

		m.insert(make_pair(j->first, list<string>{ j,k }));

		j = k;

	}
	/*����ڰ� �Է��� �ܾ��� anagram�� ã����*/

	while (true) {
		string s;
		cout << "�ܾ �Է��ϼ���:";
		cin >> s;

		string sort_s(s);
		sort(sort_s.begin(), sort_s.end());
		auto p = m.find(sort_s);

		std::cout << "������̰� �� �ֳʱ׷���--->";
		auto iter = m.begin();




		if (p != m.end()) {
			cout << s << "�� anagrame�Դϴ�.-->";
			for (auto i = p->second.begin(); i != p->second.end(); ++i)
				std::cout << *i << " ";
			std::cout << std::endl;


		}
		else {
			std::cout << "anagrame�� ���� �ܾ��Դϴ�." << std::endl;
		}
	}


	system("pause");
}