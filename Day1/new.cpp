/////*
////	12. 동적 할당받을 크기를 입력받고 원소를 저장하여 출력하시오. 인트타입의 갯수를 입력받아 인트타입으로 출력하기 
////*/
//
//#include <iostream>
//
//int main() 
//{
//	int s;
//	int inVal;
//	std::cout << "입력받을 갯수를 입력하시오 >>";
//	std::cin >> inVal;
//
//	int* p = new int[inVal]; // 원래는 정적으로하면 배열 크기에 변수가 들어가지 않지만 동적으로하면 배열의 크기를 변수로 지정가능
//	std::cout << "입력받은 수는 :" << inVal << std::endl;
//
//	for (int i = 0; i < inVal; i++) {
//		std::cin >> p[i];		// 배열의 이름은 배열의 첫번째 항목을 나타내는 포인터(주소)
//
//	}
//	std::cout << "정수출력:";
//	//for (int j = 0; j < s; j++) {
//	//	s[] = 
//	//	std::cout << "입력받을 숫자를 입력하세요:" << s << std::endl;
//	//	std::cin >> s;
//
//	//}
//	return 0;
//}
//
///////////////////////////////////////////////////////////////
////// c스타일
////#include <iostream>
////
////int main()
////{
////	int size;
////	int* p;
////	
////	printf("크기 >>");
////	scanf_s("%d", &size);
////	p = (int*)malloc(size * sizeof(int));
////
////	printf("%d개의 원소 입력 >>", size);
////
////	for () {
////
////	}
////	for () {
////
////	}
////
////	free(p);
////
////	return 0;
////}