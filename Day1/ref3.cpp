///*
//	17. 레퍼런스 - 선언과 동시에 초기화해야 한다. 간접참조해서 가져옴
//*/
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 10, num2 = 100;
//	int& ref = num;				// num의 메모리 공간에 ref라는 별명이 붙는다.
//	int* pn = &num;				// 포인터 선언 > 걍해봄			
//	int& rref = ref;			// 이런식으로 참조에참조가 가능하다
//	rref = num2;
//	cout << rref << ", " << num2 << endl;
//
//	//int& rref;				// 이것은 11행처럼 초기화를 해야하지만 못해서 그럼 
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
//	cout << "&num++: " << &num << endl;		// 같은걸 참조해서 주소도 같음
//	cout << "&ref++: " << &ref << endl;		// 임마도 위랑 같음
//
//
//
//
//	return 0;
//}