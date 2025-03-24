///*
//	14. new는 생성자 호출이되므로 초기화 가능하다.
//	생성자 - 객체를 생성하고, 초기화시키는 기능을 가지는 특별한 메서드다.
//*/
//
//#include <iostream>
//using namespace std;			//이거 안쓰면 cout나 cin을 std를 넣어서 써야함
//int main()
//{
//	int* parr;
//	parr = new int[3] { 10, 20, 30};		// {}는 원소적인 걸로 묶음. 이름없는 배열객체 생성하고 10,20,30으로 초기화
//	// parr = new int[3] = {10, 20, 30};	// 0번방에 10, 1번방에 20, 2번방에30
//
//	cout << parr[0] << ", " << parr[1]<< ", " << parr[2] << endl;
//	delete[] parr;
//
//	return 0;
//
//}