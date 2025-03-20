///*
//	7.moveconstructor(이동생성자)
//*/
//#include <iostream>
//int main()
//{
//	int n = 10;
//	int& rn = n;		// 레퍼런스, 일반참조, 참조는 l-value(변수만)를 참조한다. 좌측값을참조함
//	const int& ra = 10; 
//
//	//int& rrn = 10;		// &하나만있으면 = 상수는 참조가 안된다
//	int&& rrn = 10;		// &&두개면 가능함 - r-value(상수, 변수) 참조
//
//	std::cout << n << ", " << rn << ", " << ra << ", " << rrn << std::endl;
//	return 0;
//}