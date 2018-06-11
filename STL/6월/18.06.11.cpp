

/*
partition-조건에 맞는 것과 아닌것을 분리한다.
	홀짝나누기,3의배수,한국유저 외국유저 나누기
sort-전체를 기준(기본<)에 따라 정렬한다.
partial_srot-몇 등까지만 정렬한다.
	
nth_elemnet-등수안에 드는 것과 아닌 것을 분리한다.
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
//	/*있는지 없는지 여부만 알려주고 위치값을 돌려주지 않는다.*/
//	cout << boolalpha << binary_search(v.begin(), v.end(), 7777) << std::endl;
//
//	/*9777이 3개있는경우에 upper_bound를 사용하면 3개가 나올 수 있음*/
//	auto p=lower_bound(v.begin(), v.end(), 9777);
//
//	if (p != v.end()) {
//		std::cout << p - v.begin() + 1 << "등 입니다" << std::endl;
//	}
//
//
//	/*이 함수를 이용해야 위치를 알려준다.*/
//	/*전역변수로도 존재 set,맵에서 멤버변수로 존재*/
//	auto iter = std::equal_range(v.begin(), v.end(), 9777);
//	std::cout << iter.second - iter.first << "개가 있습니다" << std::endl;
//	/*
//	제일왼쪽 lowbound
//	오른쪽: upperbound
//	equal_range
//	*/
//	system("pause");
//
//}



/*
학과 자료실에서 "단어들.txt"를 다운받아 vector<stirng>에 읽어주세요

*/
int main() {

	std::vector<string> v;
	v.reserve(100000);
	std::ifstream open("단어들.txt");

	//std::string n;

	//while (open >>n) {
	//	v.emplace_back(n);
	//}

	//for (auto iter = v.cbegin(); iter != v.cbegin()+100; ++iter) {
	//	std::cout <<*iter << std::endl;
	//}



	//중복된 단어는 없는가?


	/*이러한 방법을 배웠으니 이렇게 해라*/
	std::vector<string>v2{ istream_iterator<string>(open), istream_iterator<string>() };

	std::cout << v2.size() << "개의 표제어를 읽었습니다." << std::endl;

	
	//사전은 정렬되어 있나?
	std::cout << "이 단어들은 정렬되어있나요?:" << boolalpha << is_sorted(v.begin(), v.end()) << std::endl;

	/*정렬되어 있을때만 사용가능*/
	auto p=std::unique(v2.begin(), v2.end());

	if (p != v2.end()) {
		std::cout << "중복된 단어가 있네요" << std::endl;
	}
	else {
		std::cout << "중복된 단어가 없습니다" << std::endl;
	}

	/*
	1. game이라는 단어가 있나 찾아봐!
		있다면 몇 번째 단어인지 출력해 줘
	*/
	/*auto result=std::binary_search(v2.begin(), v2.end(), "game");
	if (result) {
		std::cout << "값이 존재합니다" << std::endl;
		auto iter=std::lower_bound(v2.begin(), v2.end(), "game");

		std::cout << iter - v2.begin() + 1<<"번째에 있습니다."<< std::endl;

	}
*/




	/*어디에 있는지까지 물어보기 떄문에 equal_range가 더 효울적이다.*/
	//auto iter=equal_range(v2.begin(), v2.end(), string{ "game" });
	///*상한선과 하한선이 같다==게임이란 단어는 존재하지 않는다.*/
	//if (iter.first == iter.second) {
	//	std::cout << "그런 단어 없습니다" << std::endl;
	//}
	//else {
	//	std::cout << iter.first - v2.begin() + 1 << "번쨰 단어입니다." << std::endl;
	//}





	/*
	2. 사용자가 찾는 단어가 있나?
		있다면 몇 번째 단어인지 출력해 줘, - 영원히
	*/

	//while (1) {
	//	string s;
	//	std::cout << "단어를 입력하세요:";
	//	cin >> s;

	//	auto iter = equal_range(v2.begin(), v2.end(), s);
	//	/*상한선과 하한선이 같다==게임이란 단어는 존재하지 않는다.*/
	//	if (iter.first == iter.second) {
	//		std::cout << "그런 단어 없습니다" << std::endl;
	//	}
	//	else {
	//		std::cout << iter.first - v2.begin() + 1 << "번쨰 단어입니다." << std::endl;
	//	}

	//}

	/*
	3. 이 사전에서 가장 길이가 긴 단어를 찾아 출력하라.
	*/
	

	auto iter = max_element(v2.cbegin(), v2.cend(), [](const auto& first,const string& second) {
		return first.length()<second.length();
			//또는 size사용
	});
	std::cout <<"길이가 가장 긴 단어는:"<< *iter << std::endl;

	/*
	4.이 사전에서 길이가 긴 단어 20개만 골라 출력하라.
	*/
	/*붙어있는 자료형만 가능*/
	/*정렬된것처럼 보이지만 정렬한게 아니다.*/
	
	/*
	nth와 parital비교 꼭 확인해보기
	*/
	/*partial_sort(v2.begin(), v2.begin() + 100, v2.end(), [](const string& a, const string& b) {

	};*/
	//nth_element(v2.begin(), v2.begin() + 100, v2.end(), [](const string& a,const string& b) {
	//	return a.size() > b.size();
	//});
	///*개수는 보장해주지만 길이까지는 보장안해준다?*/
	//cout << "길이가 긴단어 20개" << std::endl;
	//for (auto i = v2.cbegin(); i < v2.cbegin() + 100; ++i) {
	//	std::cout << *i << std::endl;
	//}


	/*
	이 사전에서 s로 시작하는 단어의 갯수는?
	*/

	/*std::cout<<"s로시작하는 단어"<<count_if(v2.begin(), v2.end(), [](const string& s) {
		return *s.begin() == 's';
	}) << std::endl;
*/


/*
	auto a=equal_range(v2.begin(), v2.end(), string{ "s" });
	auto b=equal_range(v2.begin(), v2.end(), string{ "t" });
	std::cout << b.first - a.first << std::endl;

	기말고사는 파일입출력이 나온다. 바이너리파일이런게 나올 수 있나??
*/


	/*
	dog-god: anagram
	
	사용자가 입력한 단어의 애너그램을 모두 출력하세요.

	*/
	/*순열과 조합*/
	while (true) {
		/*이렇게 하면 안 좋지만 컾파일러가 알아서 해준다.*/
		string s;
		std::cout << "단어를 입력하세요:";
		std::cin >> s;
		sort(s.begin(), s.end());
		do {

			/*s가 있는지 출력하라*/
			if(binary_search(v2.begin(), v2.end(), s))
			std::cout << s << std::endl;

			/*
			단어갯수가 늘어나면 그만큼 느려진다. 어떻게 해야할까??
			*/
		}while(next_permutation(s.begin(), s.end()));

	}




	system("pause");
}