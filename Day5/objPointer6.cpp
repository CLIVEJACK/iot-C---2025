///*
//	10. 다운캐스팅: 자식 포인터로 부모 객체를 가리킬 수 없다.
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class"); }
//};
//class Derived : public Base {
//public:
//	void show() { printf("Derived Class"); }
//};
//
//int main()
//{
//	Base bobj();
//	Derived* dptr = nullptr;
//	//dptr = &bobj;		// 이건 자식이 부모를 손가락질하는건 안됨 
//	//dptr = (Base*) & bobj;
//	//dptr->show();
//
//	dptr = (Derived*)&bobj;				// (Derived*)볼수는 있지만 억지로 보는거 /잘 사용은 안한다 알아만 두자 
//	dptr->show();					// Derived Class 가 출력됨
//		
//
//	return 0;
//}