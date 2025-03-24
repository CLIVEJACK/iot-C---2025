///*
//	9. 상속에서 객체 포인터 .업캐스팅
//	부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅 된다.
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class\n"); }		// show()라는 동일한 이름의 메서드가 있음
//};
//class Derived : public Base {		
//public:
//	void show() { printf("Derived Class!!\n"); }   // show()라는 동일한 이름의 메서드가 있음 // 오버라이딩 (재정의)
//};
//
//int main()
//{
//	Base* bptr = nullptr;
//	Derived* dptr = nullptr;
//
//	Derived obj;	// 파생클래스 객체
//	dptr = &obj;	// dptr이 *dptr 이라서 obj의 앞에 &참조연산자를 써서 주소를 가져와라고 해야한다.
//	dptr->show();
//
//	bptr = &obj;		// 부모타입의 포인터로 자식타입의 객체를 가리킨다 /업케스팅 : 컴파일러가 기본적으로 가능
//	bptr->show();		// 부모는 자식을 가리키는건 가능 하지만 부모타입을 출력함
//						// 예시로 부모는 자식을 손가락질 해도되지만 자식을 부모를 손가락질하면 안됨 하지만 출력은 부모의 객체에있는걸 출력함
//
//	//bptr->Derived::show();
//
//	return 0;
//}