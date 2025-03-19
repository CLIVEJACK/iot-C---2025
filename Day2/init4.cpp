/*
	11.��� �ʱ�ȭ - �ݷ��ʱ�ȭ ��� > 
	1. ��� ������� �ʱ�ȭ
	2. ���۷���	�ʱ�ȭ
	3. ��ü�� ����� ������ ���
*/

#include <iostream>
using namespace std;

class ConstClass {
private:
	int m_value;
	const int m_value2;			// const�� �������̶� ���� ������ �Ұ����ϴ� �׷��� ����� ���ÿ� �ʱ�ȭ�ؾ��Ѵ�
								// ��� ��������� ��ü �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �Ǿ�� �Ѵ�. --> �ݷ� �ʱ�ȭ
public:
	ConstClass(int value, int value2) : m_value2(value2){ m_value = value;}		// �������� �ʱ�ȭ / const ������  ": m_value2(value2)" ���·� �ʱ�ȭ��
	void showValue() {
		printf("value: %d, m_value2: %d\n", m_value, m_value2);
	}
};

class RefClass {
private:
	int& ref;				// ���۷��� ���� ��ü�� �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �̷�������Ѵ�.
public:
	RefClass(int& r): ref(r) {}		// :�ݷ� �ʱ�ȭ�� �ؾ� ����� ����
	void showValue(){
		printf("ref: %d\n", ref);
	}
};

class Position {
private:
	int m_x;
	int m_y;
public:
	Position(int x, int y) { 
		printf("Position ������!!\n");
		m_x = x, m_y = y; }
	void getData() {
		printf("m_x: %d, m_y: %d\n",m_x, m_y);
	}
};

class ObjClass {	
private:
	Position pos;					//��ü ������� > PositionŸ���� pos��ü / ObjClass�� ����Ǳ����� Position��ü�� ���� �����Ǿ�����
public:
	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass constructor!!\n"); }		// : pos(x, y) �ʱ�ȭ�� ���ϰ� ����Ʈ ���� ��µȴ� 
	void showValue() {
		pos.getData();
	}
};

int main()
{
	ConstClass obj(10, 20);
	obj.showValue();

	int n = 50;
	RefClass obj2(n);
	obj2.showValue();

	cout << "==========================" << endl;
	ObjClass o(3, 6);
	o.showValue();

	return 0;
}