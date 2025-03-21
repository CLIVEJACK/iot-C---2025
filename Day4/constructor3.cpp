///*
//	3.객체를 더하는 함수 : add()
//	참조를 리턴한다.
//*/
//#include <iostream>
//
//class Point 
//{
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		printf("consturctor\n");
//	}
//	Point(const Point& other) {
//		printf("copy\n");
//		x = other.x;
//		y = other.y;
//	}
//	Point& add(const Point& other) {
//		printf("add()\n");
//		//return Point(x + other.x, y + other.y);
//
//		/* 참조로 리턴한다 */
//		x = other .x;
//		y = other.y;
//		return *this;
//	}
//	void showPoint() {
//		printf("x: %d, y; %d\n", x, y);
//	}
//};
//
//int main()
//{
//	Point p(10, 20);			// 1번생성
//	Point p2(30, 40);			// 2번생성
//	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
// /*결과는 다르지 않지만 구조는 조금 다름*/
//	//Point p3;					// 3번생성
//	//p3 = p.add(p2);			// 여기는 참조 연산을 해서 생성이아니라 더함/ 대입 연산을 함
//	Point p3 = p.add(p2);		// 복사 생성자가 호출되서 / p라는객체에 add하는 객체에 p2을 실행 
//	p3.showPoint();			// 총 3번이 생성되었음 
//
//
//	return 0;
//
//}