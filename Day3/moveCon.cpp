///*
//	7.moveconstructor(�̵�������)
//*/
//#include <iostream>
//int main()
//{
//	int n = 10;
//	int& rn = n;		// ���۷���, �Ϲ�����, ������ l-value(������)�� �����Ѵ�. ��������������
//	const int& ra = 10; 
//
//	//int& rrn = 10;		// &�ϳ��������� = ����� ������ �ȵȴ�
//	int&& rrn = 10;		// &&�ΰ��� ������ - r-value(���, ����) ����
//
//	std::cout << n << ", " << rn << ", " << ra << ", " << rrn << std::endl;
//	return 0;
//}