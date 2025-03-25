/*
	5.iterator 순방향 반복자 선언
*/
#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int> v = { 10, 20, 30, 40, 50 };

	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << endl;

	for (auto it = v.begin(); it < v.end(); it++) {		// it는 포인터이다 자동으로 어떤형태인지 해준다
		cout << *it << endl;
	}
}
/*
	vector<int>::iterator iter은 순방향 반복자 선언.
	근데 이놈을 생략하고 auto선언해도 된다.
*/