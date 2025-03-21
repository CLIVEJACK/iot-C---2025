///*
//	6. 전역함수 오버로딩 : operator'연산자'(p1, p2)으로 선언
//	전역변수는 어디에도 속하지 않음
//	지역변수와는 다르게 전역변수는 받은값만 출력됨
//	1. public
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax, int ay) : x(ax), y(ay) {}
//
//	Point operator+(const Point& other) {			// 객체 + 객체   / Point라는 형태(int, char등..)의operator멤버변수로 나와있음
//		return Point(x + other.x, y + other.y);		
//	}
//	Point operator+(int n) {						// 객체 + 정수 / 앞에 operator4의 마지막에 객체 + 정수의 해답
//		return Point(x + n, y + n);
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//inline Point operator+(int n, const Point& other) { // 전역함수		  //inline은 함수를 내부의 코드를 다시 실행가능 
//	return Point(n + other.x, n + other.y); 
//}
//int main()
//{
//	Point a(10, 20);
//	Point b(30, 40);
//	Point c = a + b;
//	c.showPoint();
//
//	Point d = a + 100;
//	d.showPoint();
//
//	Point e = 200 + b;
//	e.showPoint();
//
//	return 0;
//}