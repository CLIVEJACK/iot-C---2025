///*
//	3.��ü�� ���ϴ� �Լ� : add()
//	������ �����Ѵ�.
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
//		/* ������ �����Ѵ� */
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
//	Point p(10, 20);			// 1������
//	Point p2(30, 40);			// 2������
//	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
// /*����� �ٸ��� ������ ������ ���� �ٸ�*/
//	//Point p3;					// 3������
//	//p3 = p.add(p2);			// ����� ���� ������ �ؼ� �����̾ƴ϶� ����/ ���� ������ ��
//	Point p3 = p.add(p2);		// ���� �����ڰ� ȣ��Ǽ� / p��°�ü�� add�ϴ� ��ü�� p2�� ���� 
//	p3.showPoint();			// �� 3���� �����Ǿ��� 
//
//
//	return 0;
//
//}