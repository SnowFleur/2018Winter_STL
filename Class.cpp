#include<iostream>

class Temp1;
class Temp2;
class Tmpe3;


class Temp1 {
private:
	int x;
	int y;
public:
	Temp1(int x_, int y_) :x(x_), y(y_) { std::cout << "��� �ʱ�ȭ (��� �̴ϼȶ�����)" << std::endl; }
	Temp1() { std::cout << " Temp1 ����Ʈ ������ ȣ��" << std::endl;}
	void PutPos() { std::cout << "X:" << x << "Y" << y << std::endl; }
};
class  Temp2{
private:
public:
	Temp2() { std::cout << "Temp2����Ʈ ������ ȣ��" << std::endl; };
};
class Temp3 {
private:
	Temp1 temp1;   //Temp3 �� ������� ���� ��ü �̱� ������ �����ڸ� ȣ���Ѵ�.
	Temp2 temp2;   
	//��Ȳ�� ���� �� �ٸ����� temp1,temp2 Ŭ���� ������ �Լ��� �������� �ι� ȣ���� �Ǿ��� ������ ����ȭ �ڵ�� �ƴϴ�.
	//�� ���� ���α׷��� ����� ���ؼ��� �׻� ����ؾ� �ϴ� �κ��̴�.
public:
	Temp3():temp1(10,15) { std::cout << "Temp3����Ʈ ������ȣ��" << std::endl; }
	void ReturnPos() {
		temp1.PutPos();
	}

};

// ��ü�� ��������
//1. ��ü ������ ���� �޸� ������ �Ҵ� �޴´�.
//2. ��ü�� �ش��ϴ� �����ڸ� ȣ���Ѵ�.
int main() {
	Temp1 temp1;
	Temp2 temp2;
	Temp3 temp3;
	Temp1 temp4(5, 6);

	temp3.ReturnPos();



}