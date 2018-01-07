#include<iostream>
/*
문제 [04-2] [다양한 클래스 정의]
*/
class Point;
class Circle;
class Ring;


class Point {
private:
	int xpos, ypos;
public:
	Point(int, int);
	void ShowPointInfo()const;
};
Point::Point(int xpos_, int ypos_) :xpos(xpos_), ypos(ypos_) {}

void Point::ShowPointInfo()const {
	std::cout << "xpos:" << xpos << ",ypos:" << ypos << std::endl;
}



class Circle {
private:
	Point point; 
	int radius;  
public:
	Circle(int, int, int);
	int PutRadius()const;
	void PutPoint()const;
};
Circle::Circle(int xpos_, int ypos_, int r_):point(xpos_,ypos_),radius(r_) {}
int Circle::PutRadius()const{
	return radius;
}
void Circle::PutPoint()const {
	point.ShowPointInfo();
}


class Ring{
private:
	Circle incircle;
	Circle outcircle;
public:
	Ring(int, int, int, int, int, int);
	void ShowRingInfo()const;
};
Ring::Ring(int in_xpos, int in_ypos, int in_r, int out_xpos, int out_ypos, int out_r) :incircle(in_xpos,in_ypos,in_r),outcircle(out_xpos,out_ypos,out_r) {}

void Ring::ShowRingInfo()const {
	std::cout << "Inner Circle Info..." << std::endl;
	std::cout << incircle.PutRadius() << std::endl;
	incircle.PutPoint();

	std::cout << "outter Circle Info..." << std::endl;
	std::cout << outcircle.PutRadius() << std::endl;
	outcircle.PutPoint();

}




int main() {
	

	Ring ring( 1,1,4,2,2,9 );
	ring.ShowRingInfo();
	return 0;


}