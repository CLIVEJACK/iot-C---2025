///*
//	9.함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을때 
//	  입력없는 함수호출시 문제가 발생한다 
//*/
//#include<iostream>
//using namespace std;
//
//int func(int n = 0) {		// 디폴트
//	return n * n;
//}
//int func() {				// 입력없는거
//	return 10;
//}
//
//int main()
//{
//	cout << func(10) << endl;
//	/*cout << func() << endl;*/			// 디폴트, 입력없는거 같이쓰면 입력없는거 출력불가능
//
//	return 0;
//}