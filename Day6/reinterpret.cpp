///*
//	5.reinterpret_cast
//	������-> ������, �����͸� -> ����, ����-> �����ͷ� ��ȯ��. �ַ� ������ ���� ������.
//*/
//#include <iostream>
//
//int main()
//{
//	int* ip = new int{ 10 };
//	long lg = reinterpret_cast<long>(ip);				// int* --> long
//	unsigned int ui = reinterpret_cast<int>(ip);		// int* --> uint 
//	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui);
//
//	//int* p = reinterpret_cast<int*>(lg);			//long-->int* �ٿ�ĳ������ 64��Ʈ������ �ȵ�
//	int* p1 = reinterpret_cast<int*>(ui);			// �����ִ� 64��Ʈ�� 84�� �ٲٸ� ���� ���������� ������ ������ ������ �Ѿ�� �ٲ�Ŷ� ������ ����
//	printf("p: %d\n",*p1);				
//
//	int* p = new int{ 100 };
//	char* pc = reinterpret_cast<char*>(p);
//	printf("c: %c\n", *pc);					// int* --> char*
//
//	//delete p;
//
//	int* p2 = reinterpret_cast<int*>(pc);	// char* -->int*
//	printf("p: %d\n", *p);
//
//	return 0;
//}
//
//char ch = 10;			// �̰� ������ ���� �ٸ��� ��� ���ϸ鼭 �����ϸ� ����
//int n = (int)ch;