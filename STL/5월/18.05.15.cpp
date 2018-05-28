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
unordered_set -키 값을 해싱하여 저장
unordered_map - 키와 밸류로 구성, 키값을 해싱하여 밸류를 저장할 곳을 지정
*/




/*
unordered_set -정렬하지 않는다.
Unordered:순서가 없는
해쉬:잘게 토막낸다는 뜻
*/
//int main() {
//	unordered_set<int> us{3,1,2,5,4};
//
//	/*
//	원소를 삽입하면 순서가 흐트러질 수 있다.
//	꼭 뒤에 있을거라는 보장이 없음
//	
//	*/
//	for (const int data : us) {
//		std::cout << data << " ";
//	}
//	std::cout << std::endl;
//	
//	/*Int형은 별 의미가 없지만 좋다는것을 기억하자! */
//	us.emplace(3);
//	for (const int data : us) {
//		std::cout << data << " ";
//	}
//	std::cout << std::endl;
//
//
//	/*Int형은 별 의미가 없지만 좋다는것을 기억하자! */
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
//	/*컨테이너에 원소를 하나 추가하고 메모리 그림을 그려 관찰*/
//	/*상수시간에 접근이 가능하지만 메모리를 많이 사용한다.*/
//
//	while (true) {
//		int num;
//		std::cout << "추가할 정수를 입력하세요:(-1 입력하면 끝내기)";
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
//		int값을 넣어주면 
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
//	내가 만든 모델데이터가 어느 버킷에 들어가야하는지 알아야하는데 만들어서 제공해야한다.
//	시험X,이런게 있다 정도만 알아둘것
//	내가 만든 자료형을 넣을려면 해쉬도 만들어야한다.
//	*/
//
//	/* 이 3가지가 필요함 컨테이너의 자료형,해쉬함수,똑같음을 표현할 수 있는 함수 == */
//	unordered_set<Model, MyHash > us;
//	
//	us.emplace(1);
//	us.emplace(22);
//	us.emplace(333);
//
//
//	/*
//	a<b
//	less연산자가 set의 기본
//
//	a<b 도 거짓이고  b>a도 거짓이면
//	a==b같다
//
//	*/
//
//}





/***********************************************************
*****************************반복자*****************************
***********************************************************/
//벡터,리스트,어레이,덱,전진리스트
//set map
//unordered set unodered map


/*

반복자(모든 종류의 반복자가 지원)라면 지원해야 하는 연산
*, : 역참조(dereferenicing)
== : 비교(comaprision)
=  : 할당(assignment)


반복자의 종류(category)
입출력반복자
전진반복자 :++
전후진반복자(양방향반복자)++,--
랜덤반복자 +=,-= (메모리가 붙어있는거만 사용가능)

*/


//int main() {
//	/*
//	STL컨테이너는 누구가가 반복자를 요청하면 줄 수 있어야함
//	
//	*/
//	
//	/*
//	소스.cpp를 읽고 출력
//	입출력 반복자를 사용해서 작성해 봅니다.
//	*/
//	ifstream_iterator in("소스.cpp");
//
//	
//
//}
//













