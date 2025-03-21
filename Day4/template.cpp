///*
//	12. 함수 탬플릿 : 여러 자료형을 템플릿 인자로 받아 함수 내부에서 활용한다.
//	다형성과 재활용
//	여러가지 타입이라도 한번에 맏을 수 있다
//*/
//#include <iostream>
//
////int Add(int a, int b) {
////	return a + b;
////}
////
////double Add(double a, double b) {	// 실수타입으로 정의
////	return a + b;
////}
////
////int main()
////{
////	std::cout << Add(10, 20) << std::endl;
////	std::cout << Add(1.1, 2.2) << std::endl; // 실수타입임
////
////	return 0;
////}
//
///*템플릿 적용*/
//template <typename T>		// T를 템플릿해서 인자를 
//T Add(T a, T b) {
//	return a + b;
//}
//int main()
//{
//	std::cout << Add(10, 20) << std::endl;
//	std::cout << Add(1.1, 2.2) << std::endl;
//
//	return 0;
//}