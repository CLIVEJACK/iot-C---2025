///*
//	12. virtual Class - ���� �����ڸ� ������ �޼��带 ���� ���� �Լ��� �ϸ�, �� ���� ���� ����� ������ Ŭ����
//	�߻�Ŭ������ ��ü�� ������ �� ����. ���������Լ������� 
//*/
//#include <iostream>
//
//class Cinterface {
//public:
//	Cinterface() { std::cout << "CInerface constructor" << std::endl; }
//	virtual void getData() const = 0;	//�޼��� �ۼ�/ ���� ���� �Լ�> =0 /const = 0;�� ������ü�� ���� == ��ü�� ������ ������.
//										// ���� �����Լ��� ��ü�� ��� �������̵��� ���ؼ� �ۼ��ض� ��� ��
//
//};
//class CinSub : public Cinterface {		// ���� �����Լ� == ����ѳ��� ���� �������϶� 
//public:
//	CinSub() { std::cout << "Cinsub constructor" << std::endl; }
//	void getData() const override {				// ���� �����Լ��� �������̵��� ���ؾ��Ѵ�/ �����Ǹ� �ؾ� ����� �����ϴ� 
//		std::cout << "Pure Virtual function()" << std::endl;
//	}
//};
//
//int main()
//{
//	//Cinterface obj;
//	CinSub obj;
//	obj.getData();
//	return 0;
//}