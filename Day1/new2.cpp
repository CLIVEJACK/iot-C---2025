///*
//	13. �޸� ���� �Ҵ�: new - delete
//	�ڷ��� ������ = new �ڷ���(ũ��)         -> �ڷ����� ũ�⸦ �������ִ� : �⺻��
//	new�� �����ڸ� ȣ���Ѵ�. �� new�� ��ü�� ������Ų��.
//	��ü�� �����ϱ� ���ؼ��� ������ ȣ���� �־�� �Ѵ� 
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int size;
//	int* pary;
//
//	//int *pn = new int;		�������� intũ��� ���� �Ҵ��� �޴´�.
//	//delete pn;
//
//	cout << "ũ��>>" ;
//	cin >> size;
//
//	pary = new int[size];		// intŸ�Կ� �������̰� size�� �����϶�
//	pary[0] = 1;
//	pary[1] = 2;
//	*(pary + 2) = 3;
//
//	cout << pary[0] << ", " << pary[1] << ", " << *(pary + 2) << endl;
//
//	delete[] pary;				// �ڷ����̶� delete����[]��ħ
//
//	return 0;
//}