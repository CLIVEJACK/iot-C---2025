///*
//	10. static : 스태틱으로 지정한건 포인터로 연동되어있어서 값을 바꾸면 스태틱으로 지정한 값들이 바뀐다 > 
//
//*/
//
//#include <iostream>
//
//class AAA {
//private:
//	static int static_a;					// static 멤버 변수 프라이베잇에있는 스테틱은 멤버함수를 통해 접근하는게 좋다
//											// 변수는 프라이베잇이라 함수에서 접근이 좋다
//	int n;
//public:
//	AAA(int n);
//	static void setStatic_a(int a);			// static 멤버 함수
//	void print();
//};
//
//int AAA::static_a = 100;		// 초기화는 클래스 밖에서 한다
//AAA::AAA(int n) {
//	this -> n = n;
//}
//void AAA::print() {
//	printf("static_a: %d, n: %d\n", static_a, n);
//}
//void AAA::setStatic_a(int a) {
//	static_a = a;
//	//n = 0;				// 일반 멤버의 접근은 허용되지 않는다. 스태틱 멤버의 사용만 가능하다
//}
//
//int main()
//{
//	AAA obj1(10), obj2(20);
//	obj1.print();
//	obj2.print();
//
//	obj1.setStatic_a(50);
//	obj1.print();
//	
//	return 0;
//}