///*
//	1. vector : �ٷ�� ���� �迭
//*/
//#include<iostream>
//#include<vector>			// vector ������� ����
//using namespace std;		// vector�� std�ȿ� ���Ե�
//
//int main()
//{
//	vector<int> v;
//	vector<int> v1{ 10 };
//	vector<int> v2(5);					//int�� 5��¥�� ���Ͱ� ���´�
//	vector<int> v3{1, 2, 3, 4, 5 };
//
//	cout << "v size: " << v.size() << endl;			//v.size()�Լ��� �̿��ϸ� v��ũ�⸦ �˼����� /0���� ���
//	cout << "v1 size: " << v1.size() << endl;		// 1���� ���
//	cout << "v2 size: " << v2.size() << endl;		// 5���� ���
//	cout << "v3 size: " << v3.size() << endl;		// 5���� ���
//
//	for (int i = 0; i < 5; i++) {				
//		printf("v2[%d]: %d ",i ,v2[i]);		// vector�� �ʱ�ȭ�� ���������� �ڵ����� 0���� �ʱ�ȭ�� �ȴ�
//	}
//	cout << endl;
//	for (auto i : v3) {					// (auto i : v3)�� ���� ��� for��// �ؼ�: v���� v3�� ���� auto i�� ���� �ٰ� �����Ѵ�
//		//cout << v3[i] << endl;			// ������� for���� �ε��� ����� �Ұ���
//		cout << i << endl;
//	}
//	/* begin()�� end()�� iterator(�ݺ���) Ÿ���� ��ȯ�ϴ�.(������) /�ݺ����� Ÿ���� �����ʹ� */
//	cout << "v3�� ù���� ��Ұ�: " << *v3.begin() << endl; // �������� ������ *v3�� �ٿ�����
//	cout << "v3�� ������ ��Ұ�: " << *(v3.end() - 1) << endl;	// end�޼���带 �Ἥ �������� ��Ұ��� Ȯ���Ϸ����� -1�� �ؾ��Ѵ� ���� end�� ������ ����� �������� ��ȯ�ϱ⶧���� -1���Ѵ�
//
//	return 0;
//}
//
///*
//	vector.size(): ���� ũ��(����)�� ��ȯ 
//	vector.begin(): ù��°�� �ּҸ� ��ȯ�Ѵ�
//	vector.end(): ������ �ּ��� �����ּҸ� ��ȯ�Ѵ�
//
//*/