/*
	7.���ڿ� ó���ϱ� : ���ڶ� ���ڿ� ���� ���� ���ؼ� �׷���? 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	char str[20] = "������";
	cout << str << endl;

	char str2[20];
	//str2 = "�迵��";		// �迭�̸��� �ּҴ� > �ּҿ� ���ڿ��� ������
	strcpy(str2, "�迵��");	// ���� ���� �� ����� ������ ���ڸ� �Է¹����� �����ؼ� ������ ��.
	cout << str2 << endl;


	//char* str3 = nullptr;  // �̷������δ� ����
	char str3[100];			//  ���ڿ��� �����ϴ� ����
	cout << "�̸��Է� >> ";
	cin >> str3;
	cout << str3 << endl;

	const char* name;		// �����ͷ� ���ڿ� �Է� const
	name = "��ö��";		
	cout << name << endl;

	//	name = str2			char str2[] = "�迵��";

	return 0;
}