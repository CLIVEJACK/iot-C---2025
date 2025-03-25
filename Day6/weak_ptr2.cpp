///*
//	12.순환참조 두객체가 서로를 참조하고, 둘 다 shared_ptr을 사용하여 참조를 유지하는 경우에 발생
//*/
//#include <iostream>
//
//struct B;
//struct A {
//	std::shared_ptr<B> b_ptr;
//};
//struct B {
//	//std::shared_ptr<A> a_ptr;		// 이래쓰면 객체가 소멸되지 않고 계속돈다 
//	std::weak_ptr<A> a_ptr;		//weak_ptr 를 쓰면 순환참조가 끊어진다 
//};
//int main()
//{
//	std::shared_ptr<A> a(new A());
//	std::shared_ptr<B> b(new B());
//
//	a->b_ptr = b;			// 순환참조
//	b->a_ptr = a;
//
//	return 0;
//}