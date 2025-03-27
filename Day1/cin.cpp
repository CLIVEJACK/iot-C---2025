/*
	4. cin - 입력을 담당하는 객체
*/
#include <iostream>
using namespace std;

int main()
{
	int inVal;			// 저장해야할 변수가 필요함
	cout << "숫자를 입력 >>";
	cin >> inVal;		// cin은 scanf랑 같은거라 9번줄 저장공간(변수)이 필요 : cin은 >> (방향) inVal로 넣어라 
	cout << "inVal: " << inVal << endl;

	return 0;
}