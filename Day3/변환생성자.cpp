/*
	4.��ȯ ������
	�ٸ� Ÿ���� ��ü�� ��ȯ�ɋ� ȣ��Ǵ� ������. �Է��� �Ѱ��� ������ ������
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int value) {					// ��ȯ������
		printf("��ȯ ������ ȣ��!!");
		this -> value = value;
	}
	void printMyClass() {
		printf("value: %d\n", value);
	}
};

int main()
{
	/*MyClass obj;*/		// ��ä�� ������ �����ڰ� ��� ����
	MyClass obj = 10;		// intŸ���� Ŭ������ ����Ŭ���� Ÿ������ �ٲ� > Ÿ���� ���ƾ� ȣ���� ������ Ÿ���� ����Ŭ������ �ٲ㼭 �����ִ� ����Ŭ������(��ȯ�����ڰ�) �۵���
	obj.printMyClass();		// obj�� value ���� �ȴ�? > 10


	MyClass obj2 = 10;		// �̷����·� ��ȯ�϶� 
	obj2.printMyClass();

	return 0;
}