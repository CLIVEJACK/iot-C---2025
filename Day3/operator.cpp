///*
//	12. 연산자 오버로딩(다중정의) 객체 2개를 더하는 함수 
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0): x{ ax }, y(ay) {
//		printf("constructor coll!\n");
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//	Point add(const Point& other) {
//		printf("add() call!!\n");
//		return Point(x + other.x, y + other.y);			// 난중에 물어보기 
//	}
//};
//
//int main()
//{
//	Point obj(10, 20);
//	obj.showPoint();
//
//	Point obj2(30, 40);
//	obj2.showPoint();
//
//	Point obj3;				//obj객체가 생성
//	obj3 = obj.add(obj2);				// 포인터 타입의 출력이있어서 포인터를 쓴다 받으려면 참조가 필요하다
//	obj3.showPoint();					// 
//
//	return 0;
//}