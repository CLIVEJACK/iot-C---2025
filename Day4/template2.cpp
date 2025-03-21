///*
//	15.템플릿 매개변수 여러개인 경우 
//*/
//#include <iostream>
//using namespace std;
//
//template <typename T, typename T2>	// 템플릿이 여러개인 경우 typename을 붙인다
//void func(T a, T2 b) {				// 매개변수 이름은 'T a'는 rhs 'T b'는 lhs
//	cout << a << endl;
//	cout << b << endl;
//}
//int main()
//{
//	func(10, 3.14);
//	func("Template", 3.14);
//	func<const char*, double>("Hello", 3.1415);
//
//
//	return 0;
//}