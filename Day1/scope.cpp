/*
	11.class�� ���� scope.h�� ������� 
*/
#include <iostream>
#include "scope.h"				// scope.h������ �����ͼ� �̹��ٿ� �پ��ִٶ�� ��

//#pragma once
//
//class A {
//	int a;
//public:
//	A(int aa);				//A�̸� �ڿ� ()�� ������ ������ �Լ��� 
//	void AInfo();
//};

A::A(int aa) {			// AŬ���� �ȿ� A��� ��Ʈ ������ ������  sts::cout<< �� ������	::�� �������� ������
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