///*
//	2. 객체를 더하는 함수 add()
//	객체를 리턴시키는 함수
//*/
//#include <iostream>
//
//class Point
//{
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
//		printf("constructor\n");
//	}
//	Point(const Point& other) {				// 복사 생성자
//		printf("copy constructor\n");
//		x = other.x;
//		y = other.y;
//	}	
//	Point add(const Point& other) {				// 이건 걍 함수
//		printf("add()\n");
//		return Point(x + other.x, y + other.y);
//	}
//	void showPoint(){
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//int main()
//{
//	Point p(10, 20);					
//	Point p2(30, 40);
//	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
//
//	Point p3;	
//	p3 = p.add(p2);			// 이건 대입이지 복사가 생성되지는 않았음/ 여기서 생성자들이 더해졌음
//	p3.showPoint();			// 총 4번이 생성되었음 
//
//	Point p4;				
//	p4 = p3;		// 복사생성자 호출 
//	p4.showPoint();		
//
//
//	return 0;
//}