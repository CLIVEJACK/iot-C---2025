///*
//	20.����� ���: ���۷��� ���Ÿ�Կ� ���缭 ������ �����ؾ���
//*/
//#include <iostream>
//
//int& func(int& ref) {			// ������ü�� ��������
//	ref++;
//	return ref;				//lvalue
//	//return ref++;				//rvalue�� ���� �Ҽ� ����.
//}
//
//int main() {
//	int n = 10;
//	//int& ref = func(n);			// ���� ���۷����� �޾Ƶ� �ȴ�.
//	int ref = func(n);			// �Ϲ� ���۷����ε� �޾Ƶ��ȴ�.
//	std::cout << ref << std::endl;		//11 
//
//	return 0;
//}