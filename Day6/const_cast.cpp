///*
//	3.const_cast: const 선언을 해제한다.
//*/
//
//#include <iostream>
//
//int main()
//{
//	int num = 10;
//	std::cout << ++num << std::endl;
//
//	const int num2 = 10;
//	//std::cout << ++num2 << std::endl;			// 이건 const(상수)라서 안바뀜
//	
//	/* 이건 강사님이 못풀었음
//	int* np = const_cast<int*>(&num2);
//	*np += 1;
//	std::cout << "num2: "<< num2 << std::endl;
//	*/
//
//	const char str[] = "orange";
//	char* cp = const_cast<char*>(str);			// 위에있는 const char의 str을 const_cast로 해제하겠다 
//	cp[0] = '0';
//	std::cout << str << std::endl;
//
//	return 0;
//}