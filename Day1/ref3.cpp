///*
//	17. ���۷��� - ����� ���ÿ� �ʱ�ȭ�ؾ� �Ѵ�. ���������ؼ� ������
//*/
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 10, num2 = 100;
//	int& ref = num;				// num�� �޸� ������ ref��� ������ �ٴ´�.
//	int* pn = &num;				// ������ ���� > ���غ�			
//	int& rref = ref;			// �̷������� ������������ �����ϴ�
//	rref = num2;
//	cout << rref << ", " << num2 << endl;
//
//	//int& rref;				// �̰��� 11��ó�� �ʱ�ȭ�� �ؾ������� ���ؼ� �׷� 
//	//rref = ref;
//
//	num++;
//	ref++;
//	(*pn)++;
//
//	cout << "num++: " << num << endl;
//	cout << "ref++: " << ref << endl;
//	cout << "(*pn)++: " << *pn << endl;
//
//	cout << "&num++: " << &num << endl;		// ������ �����ؼ� �ּҵ� ����
//	cout << "&ref++: " << &ref << endl;		// �Ӹ��� ���� ����
//
//
//
//
//	return 0;
//}