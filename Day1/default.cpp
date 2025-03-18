///*
//	7. 디폴트 매개변수:
//*/
//
//#include <iostream>
//
//int func(int num = 10) {			//int num = 0 선언하면 
//	return num * num;
//}
//
//int main()
//{
//	int res;
//	res = func(10);					// 리턴된 값받기 > 입력이 10
//	std::cout << res << std::endl;	// 100
//
//	res = func(0);					// 입력이 0
//	std::cout << res << std::endl;	// 0
//
//	res = func();					// 입력이 없으면 디폴트 매개변수 적용된다. 위의 구조체에 (int num = 10) 따라서 10이 출력된다 
//	std::cout << res << std::endl;	// 100 
//
//	return 0;
//}