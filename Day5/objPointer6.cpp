///*
//	10. �ٿ�ĳ����: �ڽ� �����ͷ� �θ� ��ü�� ����ų �� ����.
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
//	//dptr = &bobj;		// �̰� �ڽ��� �θ� �հ������ϴ°� �ȵ� 
//	//dptr = (Base*) & bobj;
//	//dptr->show();
//
//	dptr = (Derived*)&bobj;				// (Derived*)������ ������ ������ ���°� /�� ����� ���Ѵ� �˾Ƹ� ���� 
//	dptr->show();					// Derived Class �� ��µ�
//		
//
//	return 0;
//}