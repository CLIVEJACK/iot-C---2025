///*
//	14.템플릿은 선언과 함수정의가 분리 될수 없다.
//*/
//#include <iostream>
//using namespace std;
//
//template <typename T>			//템플릿 선언(일반화) 선언 : template <typename 선언이름>
//T func(T a, T b) {				// 템플릿 함수
//	cout << "type: T" << endl;
//	return a + b;
//}
//
//template <>							// 내가 지정하고 싶은 타입이 있으면 typename 을 아지않고  출력에서 명시한다 
//int func <int>(int a, int b) {		// 템플릿 특수화 - 템플릿 일반화중 특별한 타입만 처리할 경우 // 
//	cout << "type: <int>" << endl;	// 명시적으로 인트가 자료형으로 포함되어있음
//	return a + b;					
//}
//
//int manin()
//{
//	cout << func(10, 20) << endl;
//	cout << func(10.5, 20.5) << endl;
//
//	cout << func<double>(10.1, 20.2) << endl;	// 이게 원칙적으로 
//	cout << func<char>(100, 10) << endl;		// 명시적으로 <타입>으로 작성해도됨
//
//
//
//	return 0;
//}