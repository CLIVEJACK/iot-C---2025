///*
//	7. ����Ʈ �Ű�����:
//*/
//
//#include <iostream>
//
//int func(int num = 10) {			//int num = 0 �����ϸ� 
//	return num * num;
//}
//
//int main()
//{
//	int res;
//	res = func(10);					// ���ϵ� ���ޱ� > �Է��� 10
//	std::cout << res << std::endl;	// 100
//
//	res = func(0);					// �Է��� 0
//	std::cout << res << std::endl;	// 0
//
//	res = func();					// �Է��� ������ ����Ʈ �Ű����� ����ȴ�. ���� ����ü�� (int num = 10) ���� 10�� ��µȴ� 
//	std::cout << res << std::endl;	// 100 
//
//	return 0;
//}