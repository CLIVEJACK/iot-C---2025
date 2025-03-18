///*
//	20.출력인 경우: 레퍼런스 출력타입에 맞춰서 변수를 설정해야함
//*/
//#include <iostream>
//
//int& func(int& ref) {			// 파일자체가 참조여서
//	ref++;
//	return ref;				//lvalue
//	//return ref++;				//rvalue는 참조 할수 없다.
//}
//
//int main() {
//	int n = 10;
//	//int& ref = func(n);			// 참조 레퍼런스도 받아도 된다.
//	int ref = func(n);			// 일반 레퍼런스로도 받아도된다.
//	std::cout << ref << std::endl;		//11 
//
//	return 0;
//}