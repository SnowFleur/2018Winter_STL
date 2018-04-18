#include<iostream>
#include<iomanip>
#include<random>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>
#include"Model.h"
using namespace std;


/*
 �˰��� �Լ� find�� find_if�� �����ϰ� ������
 �˰��� �Լ��� ���̻簡 �ٴ� ������ ���� �ִ�.
 if���̻�- ���ǿ� ���� �ٸ��� �����ϴ� ����
	������ �����ϴ� ȣ�Ⱑ��Ÿ���� predicate�̶�� �θ���.
	(boolean ���� �����ϴ� �Լ��� ���Ѵ�)
*/

/*
	find:ã���� �ϴ� ���� ���� ���� ���� ������ ��ġ�� ��ȯ
		- ���� ���ٴ� ���� ��� �Ǵ�����?

	find_if:ã���� �ϴ� ������ �����ϴ� ������ ��ġ�� ��ȯ�Ѵ�.

*/




//int main() {
//
//	//	list<int> v{ 1,3,5,7,9,2,4,6,8,10 };
//	////v���� ù Ȧ���� ��ġ�� ã�ƶ�.
//	//list<int>::iterator p = std::find_if(v.begin(), v.end(), [](int a) {
//	//	return a & 1;
//	//});
//
//	
//
//
//	list<Model> v{ Model(1),22,333,4444,55555 };
//	/*
//	explict�� ������ Model(1)�̷������� �ؾ���
//	*/
//
//	/*
//	��ä�� �Ȱ��ٴ� �Ǵ��� ==�̷��� 
//	�Ǵ���==�� ���� 
//	==�� ���α׷��Ӱ� ������
//	*/
//
//
//	//v���� 333����Ʈ�� �Ҵ��� ������ ��ġ�� ã�ƶ�
//	list<Model>::iterator p = std::find_if(v.begin(), v.end(), [](Model& a) {
//		
//		if (a.getSize() == 333)
//			return a;
//	});
//
//	std::cout << *p << std::endl;
//
//	//v���� 3��° ��ü�� Model(333)�� ���� ��ü�� ã�ƶ�
//
//}







/*
Myfind
*/


//template<class Iter,class Val>
//Iter myFind(Iter, Iter,  const Val& );
//
//template<class Iter,class Call>
//Iter myFind_if(Iter, Iter, Call);
//
//int main() {
//
//	list<Model> v{ Model(1),22,333,4444,55555 };
//	/*���� �����ڰ� ����� ��??*/
//
//	find_if(v.begin(), v.end(), [](const Model& a) {
//		if (a.getSize() == 333)
//			return true; 
//		return false;
//	});
//
//	auto p2=myFind_if(v.begin(), v.end(), [](const Model& a) {
//		if (a.getSize() == 333)
//			return true;
//		return false;
//	});
//
//
//
//	//v���� 333����Ʈ�� �Ҵ��� ������ ��ġ�� ã�ƶ�
//	auto p=myFind(v.begin(), v.end(), Model(333));
//	if (p == v.end())
//		std::cout << "��ġ�ϴ� ���Ұ� ����" << std::endl;
//	else
//		p->show();
//
//
//	if (p2 == v.end())
//		std::cout << "��ġ�ϴ� ���Ұ� ����" << std::endl;
//	else
//		p2->show();
//
//
//		
//}
//
//template<class Iter, class Call>
//Iter myFind_if(Iter b, Iter e, Call f) {
//
//	while (b != e) {
//		if (f(*b) == true);
//		return b;
//		++b;
//	}
//	return e;
//}
//
//template<class Iter, class Val>
//Iter myFind(Iter b, Iter e, const Val& v) {
//	
//	while (b != e) {
//		if (*b == v)
//			return b;
//		++b;
//
//return e;
//
//}
//
//



//
//
///*
//�̸��� ���� ������ �ִ�??
//
//List�� ����Լ� remove
//---->�����̳��� ���Ҹ� �����ϴ� ���
//*/
//
//bool f(int n) { return n & 1; }
//
//int main() {
//	
//	/*
//	v���� Ȧ���� �����ּ���
//	�˰����� �����̳��� ���Ҹ� ���� ������ �� ����.
//	�˰����� ���ο� ���� ��ȯ�ϰ�, �����̳ʰ� �ʿ���� ���Ҹ� ������ �Ѵ�.
//	*/
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
//
//	v.erase(remove_if(v.begin(), v.end(), f), v.end());
//
//
//	for (int i = 0; i < v.size(); ++i)
//		std::cout << v[i]<<" ";
//	std::cout << std::endl;
//
//
//}
//
///*
//�˰����� vector�� ������ ��Ʈ�� �� ��������.
//������ ���Ҵ� �����̺�
//
//�˰��� �Լ��� ���ο� end��ġ�� �˷��ش�.
//
//*/
//




/*
LIST
*/

class F {
public:	
	bool operator()(int n) { return n & 1; }
};

int main() {
	list<int> v{1,3,5,7,9};
	list<int>b{2,4,6,8,10 };
	list<int> a{1,1,1,3,3,3,3,5,4,7,9,5,5,5 };
	a.unique();
	//���Ľ�Ű�� �ߺ��Ȱ� ������ ���

//	v.erase(remove_if(v.begin(), v.end(), F()), v.end()); //������
//	v.remove_if(F());

	/*
	b�� a�� merge�϶�. a��b�� ����Ͽ� �����϶�.
	*/
	v.merge(b);
	/*
	���ĵǾ��ִ� ����Ʈ�� ���ؼ� ���ĵȻ��¿��� ��������.
	
	*/	



	for (int d : v)
		std::cout << d << " ";
	std::cout << std::endl;


	for (int d : b)
		std::cout << d << " ";
	std::cout << std::endl;


}











