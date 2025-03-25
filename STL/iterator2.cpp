/*
	6.reverse_iterator :������ �ݺ��� ����
*/
#include <iostream>
#include <vector>
using namespace std;


void main()
{
	vector<int> v = { 10, 20, 30, 40, 50 };

	vector<int>::reverse_iterator rit;		// ������ ��µȴ�.
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
	cout << endl;

	for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
}

/*
	vector<int>::reverse_iterator rit - ������ �ݺ��� ���� 
	�̳��� �����ϰ�, auto�� �����ص� �ȴ�.
	rbegin()�� ������ �ּ�, rend()�� ó�� ������ �����ּ�
*/