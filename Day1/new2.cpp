///*
//	13. 메모리 동적 할당: new - delete
//	자료형 포인터 = new 자료형(크기)         -> 자료형은 크기를 가지고있다 : 기본형
//	new는 생성자를 호출한다. 즉 new는 객체를 생성시킨다.
//	객체를 생성하기 위해서는 생성자 호출이 있어야 한다 
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int size;
//	int* pary;
//
//	//int *pn = new int;		힘영역에 int크기로 동적 할당을 받는다.
//	//delete pn;
//
//	cout << "크기>>" ;
//	cin >> size;
//
//	pary = new int[size];		// int타입에 연속적이게 size로 저장하라
//	pary[0] = 1;
//	pary[1] = 2;
//	*(pary + 2) = 3;
//
//	cout << pary[0] << ", " << pary[1] << ", " << *(pary + 2) << endl;
//
//	delete[] pary;				// 자료형이라 delete문에[]붙침
//
//	return 0;
//}