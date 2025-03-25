///*
//	5.reinterpret_cast
//	포인터-> 포인터, 포인터를 -> 변수, 변수-> 포인터로 변환함. 주로 포인터 관련 연산자.
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
//	//int* p = reinterpret_cast<int*>(lg);			//long-->int* 다운캐스팅은 64비트에서는 안됨
//	int* p1 = reinterpret_cast<int*>(ui);			// 위에있는 64비트를 84로 바꾸면 가능 문법사으이 오류는 없는음 버전이 넘어가면 바뀐거라 문제는 없음
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
//char ch = 10;			// 이건 위에랑 별로 다를게 없어서 비교하면서 생각하면 편함
//int n = (int)ch;