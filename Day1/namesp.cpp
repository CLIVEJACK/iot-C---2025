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
//	aName::func();			// func()앞에 aName::을 사용하여 위에있는 함수를 명시적으로 사용가능
//	bName::func();
//	func();					// using namespace cName;를 사용하여 func()만으로 출력이가능
//
//	return 0;
//
//}