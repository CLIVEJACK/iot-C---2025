///*
//	11. virtual function : �Ļ�Ŭ�������� �������� ���� ���ӹ��� ��� �Լ��� ���ϸ� Base Ŭ������ ��� �Լ��� 
//	virtual Ű���带 ����Ͽ� �����.
//	virtual table�� ���������, dynamic binding���� �����Ѵ�.
//	virtual table�� �����Լ��� ȣ��Ǵ� ���̺� 
//*/
//
//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void func1() { cout << "B::func1()" << endl; }		// �����Լ�ȭ : virtual�̶�� Ű���带 �տ� ���̸� ��
//	virtual void func2() { cout << "B::func2()" << endl; }		// �����Լ�ȭ
//	void func3() { cout << "B::func3()" << endl; }
//};
//class Derived : public Base {
//	void func1() override{ cout << "D::func1()" << endl; }		// overrideŰ����¾Ƚᵵ������ �����Լ��� �������ϴ� ����Լ��� ��Ÿ���� ���ü��� ��������
//	void func3() { cout << "D::func3()" << endl; }
//	void func4() { cout << "D::func4()" << endl; }
//};
//
//int main()
//{
//	Base b;
//	Derived d;
//	Base* bptr = new Derived();			// ���ɽ��� / �ڽ�Ÿ���� �����Ҵ� ���Ǹ� �ϰ� �θ�Ÿ���� ������ Ÿ������ �ҷ��� / �̷��� ��������
//
//	bptr->func1();			//baseŬ������ func1() �� �����Լ��� ����Ǿ� Derived Ŭ������ fucn1() ȣ��ȴ�./D::func()
//	bptr->func2();			//baseŬ������ func1() �� �����Լ��� ����Ǿ����� �������̵�(������)�� ���� �ʾҴ�./B::func2()
//	bptr->func3();			//������ Ÿ���� ȣ�� �Լ��� �����ȴ�./B::func3()
//
//	//bptr->func4();			//��ü �����Ͱ� ����Ű�� ���� �����.
//
//	delete bptr;
//	bptr = &b;
//	bptr->func1();				//B::func1()
//	bptr->func2();				//B::func2()
//	bptr->func3();				//B::func3()
//
//	return 0;
//}
//
///*
//	��ü �������� ���������� ���� Ŭ���� Ÿ���� �����ͷ� �Ļ� Ŭ������ ��ü�� ����Ű�� ������ ���� Ŭ���� ����� ���ѵȴ�.
//	�ֶ� �������̵��� �Ļ� Ŭ������ ����� ����ϱ� ���ؼ��� ���� Ŭ������ ��� �Լ��� �����Լ��� ����� �ȴ�.
//	�̰��� �����Ͻ� ������������ ���ε����� ���ϰ� ��Ÿ�ӿ��� �����Ͱ� � ��ü�� ����Ű�� �ִ����� ���� ���ε��� �Լ��� �����Ѵ�.
//*/