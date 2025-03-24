///*
//	6. 객체 동적 생성
//*/
//
//#include <iostream>
//
//class AClass {
//public:
//	void showAClass() {
//		std::cout << "Dynamically created object" << std::endl;
//	}
//};
//int main()
//{
//	AClass* ptr = new AClass{ };		//객채의 동적할당/ 시작주소 로 받는다 :AClass* ptr
//	ptr->showAClass();
//
//	delete ptr;						// 동적 메모리 해제
//
//	return 0;
//}