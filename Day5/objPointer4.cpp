///*
//	8.객체 포인터를 nullptr로 초기화 하는 방법
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	void show() {
//		std::cout << "Hello!!" << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass* ptr = nullptr;			// 문자열(배열)이나 포인터에서 쓰는 NULL을 nullptr이라고 표기/ nullptr은 널포인터의 값	아스키코드로	
//	//printf("prt: %p\n", *ptr);
//	if (ptr != nullptr) ptr->show();
//	else printf("ptr is null");
//
//	ptr = new MyClass{};
//	ptr->show();
//	
//	return 0;
//}