///*
//	9.static - Ŭ���� �����.(this �����Ͱ� ����.) / this�����ʹ� : �ڱ��ڽ��̶�� �Ҹ� / ��ü���� �����Ѵ�.
//	���׵��� ��ü�鿡�� �����ؼ� ��� ��ü���� �ٲ��.
//	��ü ���/ Ŭ���� ��� �ٸ��� >
//*/
//#include <iostream>
//using namespace std;
//
//class StaticTest {
//public:
//	int n;
//	static int static_n;			//static ��� ����
//	StaticTest();
//	void print();
//};
//int StaticTest::static_n = 10;// ���׵��׽�Ʈ�� �ִ� ����ƽ���� �־�� / static��� ���� �ʱ�ȭ�� Ŭ���� �ܺο��� �̷�������Ѵ�.
//StaticTest::StaticTest() {
//	n = 20;
//	//static_n = 10;
//}
//void StaticTest::print() {
//	cout << "Static_n: " << static_n << "n: " << n << std::endl;
//}
//
//int main()
//{
//	StaticTest ob1, ob2;
//	ob1.print();
//	ob2.print();
//
//	ob2.static_n = 1000;
//	ob2.n = 50;
//	ob2.print();				//
//	ob1.print(); 
//
//	return 0;
//}