///*
//	14.���ø��� ����� �Լ����ǰ� �и� �ɼ� ����.
//*/
//#include <iostream>
//using namespace std;
//
//template <typename T>			//���ø� ����(�Ϲ�ȭ) ���� : template <typename �����̸�>
//T func(T a, T b) {				// ���ø� �Լ�
//	cout << "type: T" << endl;
//	return a + b;
//}
//
//template <>							// ���� �����ϰ� ���� Ÿ���� ������ typename �� �����ʰ�  ��¿��� ����Ѵ� 
//int func <int>(int a, int b) {		// ���ø� Ư��ȭ - ���ø� �Ϲ�ȭ�� Ư���� Ÿ�Ը� ó���� ��� // 
//	cout << "type: <int>" << endl;	// ��������� ��Ʈ�� �ڷ������� ���ԵǾ�����
//	return a + b;					
//}
//
//int manin()
//{
//	cout << func(10, 20) << endl;
//	cout << func(10.5, 20.5) << endl;
//
//	cout << func<double>(10.1, 20.2) << endl;	// �̰� ��Ģ������ 
//	cout << func<char>(100, 10) << endl;		// ��������� <Ÿ��>���� �ۼ��ص���
//
//
//
//	return 0;
//}