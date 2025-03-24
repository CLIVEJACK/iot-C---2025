/*
	15. - ��ĳ����:  �θ�Ŭ���� �����ͷ� �ڽ�Ŭ���� ��ü�� ����Ű�� ��  
		- �ٿ�ĳ����: �ڽ�Ŭ���� ��ü�� �θ�Ŭ������ ����Ű���� ���ϳ� ������ Ÿ���� �����Ͱ� ������ Ÿ���� ����Ű�� ��
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
	bptr = static_cast<Base*>(&dobj);		// ��ĳ���� upcasting
	bptr->func1();

	Base bobj;
	Derived* dptr;
	dptr = static_cast<Derived*>(&bobj);		//�ٿ�ĳ���� downcasting
	dptr->func();
	dptr->func1();

	Derived2* dptr2 = static_cast<Derived2*>(dptr);		// �ٿ�ĳ���� 
	dptr2->func();
	dptr2->func1();


	return 0;
}