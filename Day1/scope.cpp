/*
	11.class를 만들어서 scope.h을 가지고옴 
*/
#include <iostream>
#include "scope.h"				// scope.h파일을 가져와서 이밑줄에 붙어있다라는 뜻

//#pragma once
//
//class A {
//	int a;
//public:
//	A(int aa);				//A이름 뒤에 ()가 있으면 무조건 함수다 
//	void AInfo();
//};

A::A(int aa) {			// A클래스 안에 A라는 인트 변수를 가져옴  sts::cout<< 랑 같은거	::는 범위지정 연산자
	a = aa;				
}
void A::AInfo(){
	std::cout << "a: " << a << std::endl;
}

int main()
{
	A a(10);
	a.AInfo();
	return 0;

}