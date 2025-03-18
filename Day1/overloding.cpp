///*
//	6. 함수 오버로딩(다중정의): func()라는 이름은 같은데 매개변수의 타입이랑 갯수가 다르면 다른 다른 함수이다.
//*/
//#include <iostream>
//using namespace std;
//	
//int func() {			// 밑에있는 func와 이건 다른 함수이다 
//	return 10;
//}
//
//int func(char c) {		// 
//	return c;
//}
//
//int func(int n) {
//	return 10 + n;
//}
//
//int func(int n1, int n2) {
//	return n1 + n2;
//}
////char func(char c) {				// 함수 이름과 매개변수의 타입이랑 갯수가 같아서 2번째의 int func(char c)과같다
////	return c;
////}
//int main()
//{
//	
//	cout << func() << endl;
//	cout << func('a') << endl;
//	cout << func(10) << endl;
//	cout << func(10, 20) << endl;
//
//	return 0;
//
//}