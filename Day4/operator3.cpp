///* 
//	4.�ɹ��Լ� ������ �����ε�: p1 operator+������(p2) > p1��ü�� p2�� ���Ѵ�  ex) p1 operator+(p2)
//	��ü�� ��ü���ٰ� ������ �����ε����� ó�� ���������� ��ü�� ���� ��ü�� ���� ���ϴ°� �Ұ����ϴ� ������ ����Լ� �����ڸ� �����ε��ϸ� �ȴ�.
//*/
//#include <iostream>
//
//class MyClass
//{
//private:
//	int value;
//public:
//	MyClass(int n) :value(n){} 			//��ȯ������: �Է°� 1���� �޴°� : :value(n){} ���� n�� ���� (�޴°�)����ִ´ٴ� ���̶� ������ �Ű��������� 0�� ��µ�
//	MyClass operator+(const MyClass& other) {// ������ �����ε� �������·� ����°� �߿�
//		printf("+ overoading");
//		return MyClass(value + other.value);
//	}
//	void showMyClass() {
//		printf("value: %d\n", value);
//	}
//};
//
//int main()
//{	
//	MyClass obj(10);		// �ʱ� ���� ������ ��ü ����
//	obj.showMyClass();
//
//	MyClass obj2(obj);		//obj�� �����ؼ� ��ü ����
//	obj.showMyClass();
//
//	MyClass obj3 = obj2;		 // 2�� ����(������)�ؼ� 3���ٰ� ����/ obj�� �����ؼ� ��ü ����
//	obj3.showMyClass();
//
//	MyClass obj4 = obj + obj2 + obj3;	// ��ü�� ���� ����� ������ ��ü ���� '+' �ڷῬ�곢���� ���������� ��ü��ü�� obj������ �ȵȴ� ������+�����ڰ� ��ü��(�տ��� �� add()�Լ��� �ۼ��ϸ�) ���Ѵٰ� �������ָ� ����
//	//obj4.showMyClass();			//���� ������ �����ε� �������� 
//	//MyClass obj4 = (obj.operator+(obj2)).operator+(obj3);
//
//	obj4.showMyClass();
//	return 0;
//}