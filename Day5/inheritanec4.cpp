///*
//	4. ��� ���迡�� ��ü ���� �� �Ҹ�
//*/
//
//#include <iostream>
//using namespace std;
//
//class SuperClass {
//private:
//	int num;
//public:
//	SuperClass(int an) {
//		num = an;
//		cout << num << " SuperClass consturctor" << endl;		// ������ ����
//	}
//	~SuperClass(){
//		cout << num << " SuperClass Destructor" << endl;			// ������ �Ҹ� �ڴ� �� ������ ��µǰ� ������ �Ųٷ� ����ȴٰ� �����ϸ��
//	}
//};
//class  SubClass : public SuperClass {
//public:
//	int subNum;
//public:
//	SubClass(int an, int an2) : SuperClass(an){
//		subNum = an2;
//		cout << subNum << " SubClass consturctor" << endl;
//	}
//	~SubClass() {
//		cout << subNum << " SubClass Destructor" << endl;
//	}
//};
//int main()
//{
//	SuperClass s{ 1 };
//	cout << "==============================================" << endl;
//	SubClass sub{ 2, 22 };		// 2��� ���� �θ��� ���ڿ��� superClass�� ������ ������ 22�� subclass�� ���´�
//
//	return 0;
//}
//
///*
//	��ü�� �����Ҷ� ȣ��Ǵ� �����ڿ� �������� ������ �ٸ��� 
//	�� �������� ȣ��� ������ ������ �ٸ��� 
//*/