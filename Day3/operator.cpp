///*
//	12. ������ �����ε�(��������) ��ü 2���� ���ϴ� �Լ� 
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
//		return Point(x + other.x, y + other.y);			// ���߿� ����� 
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
//	Point obj3;				//obj��ü�� ����
//	obj3 = obj.add(obj2);				// ������ Ÿ���� ������־ �����͸� ���� �������� ������ �ʿ��ϴ�
//	obj3.showPoint();					// 
//
//	return 0;
//}