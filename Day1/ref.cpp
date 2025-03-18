///*
//	15.호출전과 호출후의 값이 다르게 하기 chFunc를 출격시에 바뀜
//		다른함수에 선언된 지역변수의 값을 바꾸는 방법 1
//*/
//#include <iostream>
//using namespace std;
//
//
//void chFunc(int* _n) {
//	*_n = 20;
//}
//int main()
//{
//	int n = 10;
//	cout << "호출 전 n:" << n << endl;
//
//	chFunc(&n);
//
//	cout << "호출 후 n:" << n << endl;
//	return 0; 
//}