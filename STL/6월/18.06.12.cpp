

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

	std::ifstream open("단어들.txt");
	std::vector<string>v{ istream_iterator<string>(open), istream_iterator<string>() };

	std::cout << v.size() << "개의 표제어를 읽었습니다." << std::endl;

	vector<PS> pv{ v.begin(),v.end() };

	/*first 기준으로 정렬한다(오름차순).*/
	sort(pv.begin(), pv.end(), [](const PS& a, const PS& b) {
		return a.first < b.first;
	});


	///*사용자가 입력한 단어의 애너그램을 모두 출력하세요*/
	//for (int i = 20000; i < 20200;++i) {
	//	std::cout << pv[i].first << "  " << pv[i].second << std::endl;
	//}

	/*사용자가 입력한 단어의 애너그램들을 출력하라
	dog god
	equal_range
	*/

	//while (true) {
	//	string s;
	//	std::cout << "단어는?";
	//	std::cin >> s;
	//	sort(s.begin(), s.end());
	//	/*정렬된 구간에서만 작동
	//	S를 넣고싶은데 어디에 넣으면 정렬이 안깨지고 가능하니?
	//	*/
	//	auto p = equal_range(pv.begin(), pv.end(), PS{ s }, [](const PS& a, const PS& b) {
	//		return a.first < b.first;
	//	});
	//	if (p.first != p.second) {
	//		std::cout << s << "의 애너그램들입니다.-" << std::endl;

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
		//		/*달라지는 곳*/
		//		return a.first == j->first;
		//	});

		//	/*[j,k)는 애너그램이다. j부터 K까지가 애너그램이다.*/
		//	cout << "[" << i++ << "]";
		//	copy(j, k, ostream_iterator<string>(cout, " "));
		//	cout << endl;
		//	j = k;

		//}







	///*쌍을 찾아 파일에 기록하라*/
	//ofstream out("애너그램들.txt");

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
	//		/*달라지는 곳*/
	//		return a.first == j->first;
	//	});

	//	/*[j,k)는 애너그램이다. j부터 K까지가 애너그램이다.*/
	//	out << "[" << i++ << "]";
	//	copy(j, k, ostream_iterator<string>(out, "   "));
	//	out << endl;
	//	j = k;

	//}



	/*애너그램쌍을 찾아 적당한 컨테이너에 저장하라*/
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
			/*달라지는 곳*/
			return a.first == j->first;
		});

		m.insert(make_pair(j->first, list<string>{ j,k }));

		j = k;

	}
	/*사용자가 입력한 단어의 anagram을 찾아줘*/

	while (true) {
		string s;
		cout << "단어를 입력하세요:";
		cin >> s;

		string sort_s(s);
		sort(sort_s.begin(), sort_s.end());
		auto p = m.find(sort_s);

		std::cout << "가장길이가 긴 애너그램은--->";
		auto iter = m.begin();




		if (p != m.end()) {
			cout << s << "의 anagrame입니다.-->";
			for (auto i = p->second.begin(); i != p->second.end(); ++i)
				std::cout << *i << " ";
			std::cout << std::endl;


		}
		else {
			std::cout << "anagrame이 없는 단어입니다." << std::endl;
		}
	}


	system("pause");
}