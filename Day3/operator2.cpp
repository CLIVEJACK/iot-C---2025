///*
//	13. add�޼���� ���� �����ڸ� �����
//*/
//
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) : x(ax), y(ay) { printf("constructor!~\n"); }
//	Point(const Point& other){
//		printf("copy constrctor!~\n");
//		x = other.x;
//		y = other.y;
//	}
//	Point add(const Point& other) {
//		printf("add()!~\n");
//		return Point(x + other.x, y + other.y);
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//
//};
//int main()
//{
//	Point obj(10, 20);
//	//obj.showPoint();
//	Point obj2(30, 40);
//	//obj2.showPoint();
//	//Point obj3;		
//	//obj3 = obj.add(obj2); 				// �����ϸ� 4��
//	Point obj3 = obj.add(obj2);				// �̷��ϸ� 3�� 
//	obj3.showPoint();					
//
//	return 0;
//
//}