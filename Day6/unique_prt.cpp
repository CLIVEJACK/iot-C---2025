///*
//	9. 스마트 포인터 : unique_prt
//	객체의 생명 주기를 객체에 맡김으로 프로그래머와의 메모리 관리 부담을 줄여준다
//	스마트 포인터를 메모리를 동적으로 할당되어있는 값을 자동으로 해지시켜준다
//	unique_ptr - 소유권을 독점적으로 관리하는 스마트 포인터(auto_ptr을 대체)
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//public:
//	MyClass() { cout << "MyClass() 호출" << endl; }
//	~MyClass() { cout << "~MyClass() 호출" << endl; }
//};
//int main()
//{
//	unique_ptr<MyClass> ptr(new MyClass{});	//스마트 포인터 선언 cast선언자와 비슷한 구조로 선언 /unique_ptr<MyClass>키워드를 선언하면 동적할당인 new를 선언후에 해제를 하지 않아도된다.
//	unique_ptr<MyClass> ptr2= move(ptr);
//
//	return 0;
//}