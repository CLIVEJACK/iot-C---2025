///*
//	4. class�� const_cast�� Ȱ��
//
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	void setNum(int n) { num = n; }
//	void printf()const {
//		cout << "Befoer: " << num;
//		//num++;						// const �޼���� �̷���� �޼��忩�� ����
//		const_cast<MyClass*>(this)->num--; //const_cast Ű����� const�� �������Ѽ� �����ͷ� �����ؼ� ���� ���ҽ�Ŵ
//		cout << " after: " << num <<endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	obj.setNum(10);
//	obj.printf();
//
//	return 0;
//}