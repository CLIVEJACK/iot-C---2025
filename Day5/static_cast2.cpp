/*
	15. - 업캐스팅:  부모클래스 포인터로 자식클래스 객체를 가리키는 것  
		- 다운캐스팅: 자식클래스 객체가 부모클래스를 가리키지는 못하나 동일한 타입의 포인터가 동일한 타입을 가리키는 것
*/

#include <iostream>

class Base {
public:
	void func1() { std::cout << "Base::func1()" << std::endl; }
};

class Derived : public Base {
public:
	void func() { std::cout << "Derived::func()" << std::endl; }
	void func1() { std::cout << "Derived::func1()" << std::endl; }
};
class Derived2 : public Derived {
public:
	void func() { std::cout << "Deriver2::func()" << std::endl; }
	void func1() { std::cout << "Deriver2::func1()" << std::endl; }
};
	
int main()
{	
	Base* bptr;
	Derived dobj;
	bptr = static_cast<Base*>(&dobj);		// 업캐스팅 upcasting
	bptr->func1();

	Base bobj;
	Derived* dptr;
	dptr = static_cast<Derived*>(&bobj);		//다운캐스팅 downcasting
	dptr->func();
	dptr->func1();

	Derived2* dptr2 = static_cast<Derived2*>(dptr);		// 다운캐스팅 
	dptr2->func();
	dptr2->func1();


	return 0;
}