///*
//	8.�ӽð�ü copy
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//	int num;
//public:
//	MyClass(int n) : num(n) { cout << this << ", " << num <<" consturctor" << endl;} // this�� �ڱ��ڽ� ������
//	MyClass(const MyClass& other) : num(other.num) { cout << this << " copy constructor" << endl; }	// MyClass&(���������)�� ���������ڸ� �̿��ؼ� MyClass�� �����ؼ� �����´ٴ� �Ҹ�
//	~MyClass() { cout << this << ", " << num << " desturctor" << endl; }
//	void setData(int n) { num = n; }	//�޼��忡���� : num(n)�ݷ� �ʱ�ȭ�� �ȵȴ� �����ڿ����� �ʱ�ȭ����
//};
//MyClass func(MyClass& aobj) {				//22���� obj�� �ٸ����� / �ް����� �����ϴ� ������ �����ؼ� ���ڴٴ� �ǹ��̴�.
//	cout << "func()" << endl;
//	return aobj;
//}
//int main()
//{
//	MyClass obj{ 10 };
//	MyClass obj2{ func(obj) };		//15���� obj��/ �ӽð�ü�� ���޵�
//	cout << "bye~~" << endl;
//	
//	return 0;
//}