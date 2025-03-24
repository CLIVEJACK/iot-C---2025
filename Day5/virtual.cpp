///*
//	11. virtual function : 파생클래스에서 재정의할 것을 역속받은 멤버 함수를 말하며 Base 클래스의 멤버 함수에 
//	virtual 키워드를 사용하여 만든다.
//	virtual table이 만들어지고, dynamic binding으로 동작한다.
//	virtual table은 가상함수가 호출되는 테이블 
//*/
//
//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void func1() { cout << "B::func1()" << endl; }		// 가상함수화 : virtual이라는 키워드를 앞에 붙이면 됨
//	virtual void func2() { cout << "B::func2()" << endl; }		// 가상함수화
//	void func3() { cout << "B::func3()" << endl; }
//};
//class Derived : public Base {
//	void func1() override{ cout << "D::func1()" << endl; }		// override키워드는안써도되지만 가상함수를 재정의하는 멤버함수를 나타낸면 가시성이 좋아진다
//	void func3() { cout << "D::func3()" << endl; }
//	void func4() { cout << "D::func4()" << endl; }
//};
//
//int main()
//{
//	Base b;
//	Derived d;
//	Base* bptr = new Derived();			// 업케스팅 / 자식타입을 동적할당 정의를 하고 부모타입의 포인터 타입으로 불러옴 / 이러면 문제없음
//
//	bptr->func1();			//base클래스의 func1() 은 가상함수로 선언되어 Derived 클래스의 fucn1() 호출된다./D::func()
//	bptr->func2();			//base클래스의 func1() 은 가상함수로 선언되었지만 오버라이딩(재정의)이 되지 않았다./B::func2()
//	bptr->func3();			//포인터 타입의 호출 함수가 결정된다./B::func3()
//
//	//bptr->func4();			//객체 포인터가 가리키는 값을 벗어난다.
//
//	delete bptr;
//	bptr = &b;
//	bptr->func1();				//B::func1()
//	bptr->func2();				//B::func2()
//	bptr->func3();				//B::func3()
//
//	return 0;
//}
//
///*
//	객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 접근은 기초 클래스 멤버로 제한된다.
//	애때 오버라이딩된 파생 클래스의 멤버를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상함수로 만들면 된다.
//	이것은 컴파일시 포인터형으로 바인딩되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라서 바인딩할 함수를 결정한다.
//*/