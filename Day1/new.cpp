///*
//	12. ���� �Ҵ���� ũ�⸦ �Է¹ް� ���Ҹ� �����Ͽ� ����Ͻÿ�. ��ƮŸ���� ������ �Է¹޾� ��ƮŸ������ ����ϱ� 
//*/

#include <iostream>

int main() 
{
	
	int inVal;

	std::cout << "�Է¹��� ������ �Է��Ͻÿ� >>";
	std::cin >> inVal;
	// �����Ҵ�
	int* p = new int[inVal]; // ������ ���������ϸ� �迭 ũ�⿡ ������ ���� ������ ���������ϸ� �迭�� ũ�⸦ ������ ��������

	std::cout << "�Է¹��� ���� :" << inVal << std::endl;
	for (int i = 0; i < inVal; i++) {
		std::cin >> p[i];		// �迭�� �̸��� �迭�� ù��° �׸��� ��Ÿ���� ������(�ּ�)
	}
	std::cout << "�������:";
	for (int j = 0; j < inVal ; j++) {
		std::cout << p[j] << " "; // �迭�� �������� ���
	}
	delete[] p;

	return 0;
}

/////////////////////////////////////////////////////////////
//// c��Ÿ��
//#include <iostream>
//
//int main()
//{
//	int size;
//	int* p;
//	
//	printf("ũ�� >>");
//	scanf_s("%d", &size);
//	p = (int*)malloc(size * sizeof(int));
//
//	printf("%d���� ���� �Է� >>", size);
//
//	for () {
//
//	}
//	for () {
//
//	}
//
//	free(p);
//
//	return 0;
//}