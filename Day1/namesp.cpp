///*
//* 10.
//*/
//
//#include <stdio.h>
//
//namespace aName {
//	void func() {
//		printf("aName::func()\n");
//	}
//}
//namespace bName {
//	void func() {
//		printf("bName::func()\n");
//	}
//}
//namespace cName {
//	void func() {
//		printf("cName::func()\n");
//	}
//}
//
//using namespace cName;
//
//int main()
//{
//	aName::func();			// func()�տ� aName::�� ����Ͽ� �����ִ� �Լ��� ��������� ��밡��
//	bName::func();
//	func();					// using namespace cName;�� ����Ͽ� func()������ ����̰���
//
//	return 0;
//
//}