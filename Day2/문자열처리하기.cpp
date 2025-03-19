/*
	7.문자열 처리하기 : 문자랑 문자열 따로 구분 못해서 그런듯? 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	char str[20] = "웅나나";
	cout << str << endl;

	char str2[20];
	//str2 = "김영희";		// 배열이름은 주소다 > 주소에 문자열을 못넣음
	strcpy(str2, "김영희");	// 변수 선언 후 상수나 변수로 문자를 입력받으면 복사해서 넣으면 됨.
	cout << str2 << endl;


	//char* str3 = nullptr;  // 이런식으로는 못함
	char str3[100];			//  문자열을 저장하는 공간
	cout << "이름입력 >> ";
	cin >> str3;
	cout << str3 << endl;

	const char* name;		// 포인터로 문자열 입력 const
	name = "김철수";		
	cout << name << endl;

	//	name = str2			char str2[] = "김영희";

	return 0;
}