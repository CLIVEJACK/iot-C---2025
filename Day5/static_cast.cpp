///*
//	14. 기본 자료형의 형변환으로 컴파일 타임에 타입을 변환
//*/
//
//#include <iostream>
//
//int main()
//{
//	char ch;
//	int i = 100;
//	float f = 3.14;
//	double d = 2.345;
//
//	ch = static_cast<char>(i);				//int -->> char 변환 / 정수의 해당하는 i인 100이 아스키코드의 문자로 변경되면 'd'가 나온다 
//	std::cout << ch << std::endl;
//	ch = (char)i;							// C언어 스타일
//	std::cout << ch << std::endl;
//
//
//	d = static_cast<double>(f);				// float타입의 f인 3.14를 double타입으로 변경함
//	std::cout << d << std::endl;
//
//	i = static_cast<int>(d);
//	std::cout << i << std::endl;			// 3이 나온다 자기보다 높은 값이 나오면 뒤는 안나온다 
//
//	std::cout<< typeid(ch).name() << std::endl;		// 타입을 알고 싶을때 ch의 타입이 뭐냐 
//	std::cout << typeid(d).name() << std::endl;
//
//	return 0;
//}
//
///*
//	static_cast<type-id>(expression)
//*/