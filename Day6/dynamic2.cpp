///*
//	2.dynamic_cast를 이용하여 다운캐스팅경우는 가상함수가 있어야 한다.
//	static_cast보다 안정적으로 형변환이 가능하다
//*/
//
//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	virtual void func() { cout << "Super::func()" << endl; }		// 다운캐스팅을 위해서 virtual을 앞에다가 붙인다
//	void func1() { cout << "Super::func1()" << endl; }
//	void fx() { cout << "Super::fx()" << endl; }		// 오버라이딩
//};
//class Sub : public Super {
//public:
//	void func() { cout << "Sub::func()" << endl; }
//	void func2() { cout << "Sub::func2()" << endl; }
//	void fx() { cout << "Super::fx()" << endl; }		// 오버라이딩
//};
//
//int main()
//{
//	Super* sp = new Super{};		// 부모 객체를 부모가 나타내서 아무 문제없다
//	sp->func();
//	sp->func1();
//	sp->fx();
//	cout << "==============Upcasting===============" << endl;
//	Super* sp2 = new Sub{};			// 부모 객체가 자식객체를 가리킴
//	sp2->func();
//	sp2->func1();
//	sp2->fx();
//	//sp2->func2();					// 자식 클래스 내부에 접근불가능
//	cout << "==============dowoncasting===============" << endl;
//	Sub* sp3 = dynamic_cast<Sub*>(sp2);	//sp2는 슈퍼클래스에서 Sub는 서브클래스로 바꿔라 라는뜻 가상함수(virtual)가 없으면 다운캐스팅을 하지 못한다
//	sp3->func();
//	sp3->func1();
//	sp3->func2();
//	sp3->fx();
//
//	delete sp;
//	delete sp2;
//
//
//	return 0;
//}