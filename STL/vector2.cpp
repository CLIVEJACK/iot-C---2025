///*
//	2.vector
//*/
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;	//���͸� ��ƮŸ���� v�� �����Ѵ�
//	cout << "[ v[i], v.size(), v.capcity()] " << endl;
//	for (int i = 0; i <= 32; i++) {
//		v.push_back(i + 1);
//		cout << "[ " << v[i] << ", " << v.size() << ", " << v.capacity() << " ]" << endl;
//	}
//
//	vector<int> v2;
//	v2.push_back(10);			//�������� ������� �������� push_back�Լ�������
//	v2.push_back(11);
//	v2.push_back(12);
//	v2.push_back(13);
//	v2.insert(v2.begin(), 1);
//	v2.insert(find(v2.begin(), v2.end(), 13), 20);		// find�� ã�´ٴ� �ǹ�/ v2�� begin()÷���� v2.end() ������ �߿� ���� 13�� ã�Ƽ� 20�� 13�տ� ����ִ´�
//
//
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	cout <<"============================" << endl;
//	v2.pop_back();		// ������ ���Ҹ� �����Ѵٴ� �ǹ�
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	return 0;
//}
//
///*
//* v.push_back(10): ������ ���� �ڿ� 10�� �߰��Ѵ�.
//* v.insert(idx, val): idx���� ��ġ�� val�� �ִ´�.
//* v.capacity(): ���Ϳ� �Ҵ�� �޸� ũ���� �����Ѵ�. - v.size()
//* v.pop_back(): ������ �������� 
//*/