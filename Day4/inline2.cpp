///*
//	11.매크로함수 : 매크로는 '#'전처리가 처리하지만, inline 함수는 컴파일러가 처리한다. 
//*/
//
//#include <iostream>
//
//
//#define SQUARE(X) ((X) * (X))		// 매크로함수 로 출력 이나 / 매크로함수는 대부분 대문자로 작성한다
//									
//inline int funct(int x) {			// inline 함수로 출력이나 똑같다 
//	return x * x;
//}
//int main()
//{
//	std::cout << SQUARE(2) << std::endl;
//	std::cout << funct(2) << std::endl;
//
//
//	return 0;
//}