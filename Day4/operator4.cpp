///*
//	5. main�� �ִ� ���� ����ϴ°� ����� ���� + add ��ü �� ���ϱ� 
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int x, y;
//public:
//	MyClass(int ax = 0, int ay = 0) : x(ax), y(ay){
//		printf("consturctor\n");
//	}
//	MyClass operator+(const MyClass& other) {
//		printf("operator");
//		return MyClass(x + other.x, y + other.y);
//	}
//	MyClass add(const MyClass& other) {
//		printf("add():\n");
//		return MyClass(x, +other.x, y + other.y);
//
//	}
//	void showMyClass() {
//		printf("");
//	}
//};
//
//int main() 
//{
//	MyClass obj(10, 20);
//	MyClass obj2(10, 20);
//	MyClass obj3 = obj.add(obj2);
//	MyClass obj4 = obj.operator+(obj3);
//
//	MyClass obj5 = obj4 + 100;
//
//
//	return 0;
//}
//
///*
//	�����ε� �Ҽ� ���� ������: '::', '.' , '*', sizeof
//*/