///*
//	4. vector coniner - ����, ����, ����
//*/
//
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//void main()
//{
//	vector<string> v;
//	list<int> li;
//
//
//	v.push_back("tiger");
//	v.push_back("lionl");
//	v.push_back("������");
//	v.push_back("��ο���");
//	v.push_back("horse");
//
//	cout << "v.front(): " << v.front() << endl;		// front()�� ��ù���� ���Ҹ� �����Ѵ�
//	cout << "v.back(): " << v.back() << endl;		// back()�� ������ ���� ���
//	cout << "v.capacity: " << v.capacity() << endl;
//	cout << endl;
//
//	vector<string>::iterator iter;				//vector<���ø�>::iterator iter ���ø��� �ٲٸ� �ٸ� ���� ���밡���ϴ�.
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/";
//	}
//	cout << endl;
//	v.pop_back();				// �������� ���� 
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/";
//	}
//	cout << endl;
//
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		if (*iter == "������") {
//			v.erase(iter); break;			//erase�� ������ ������ ���� 
//		}
//	}
//	cout << endl;
//
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/";
//	}
//
//}
//
///*
//	iterator Ÿ��: iterator, begin(), end()
//*/