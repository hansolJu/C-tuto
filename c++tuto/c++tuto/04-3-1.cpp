#include<iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x, int y)
		:xpos(x), ypos(y) {}
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const {
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}
};

class Circle {
private:
	int rad;
	Point center;
public:
	Circle(int x, int y, int r)
		:rad(r), center(x,y){}

	void ShowCircleInfo()const {
		cout << "radius: " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring {
private:
	Circle inCircle;
	Circle outCircle;
public:
	Ring(int inXpos, int inYpos, int inRadi, int outXpos, int outYpos, int outRadi)
		:inCircle(inXpos, inYpos, inRadi), outCircle(outXpos, outYpos, outRadi) {}

	void ShowRingInfo()const {
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowCircleInfo();

		cout << "Outter Circle Info..." << endl;
		outCircle.ShowCircleInfo();
	}
};

int main() {
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}