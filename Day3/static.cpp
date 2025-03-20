///*
//	9.static - 클래스 멤버다.(this 포인터가 없다.) / this포인터는 : 자기자신이라는 소리 / 객체들이 공유한다.
//	스테딕은 객체들에서 공유해서 모든 객체들이 바뀐다.
//	객체 멤버/ 클래스 멤버 다른점 >
//*/
//#include <iostream>
//using namespace std;
//
//class StaticTest {
//public:
//	int n;
//	static int static_n;			//static 멤버 변수
//	StaticTest();
//	void print();
//};
//int StaticTest::static_n = 10;// 스테딕테스트에 있는 스테틱엔을 넣어라 / static멤버 변수 초기화는 클래스 외부에서 이루어져야한다.
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