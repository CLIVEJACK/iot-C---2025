///*
//	7. �ӽð�ü�� ������ ����� �� ����.
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		cout << num << " constuctor" << endl;
//	}
//	~MyClass() { cout << num << " desturctior" << endl; }
//	void setData(int n) { num = n; }
//};
//
//int main()
//{
//	//MyClass* ptr = &MyClass{ 10 };
//	//MyClass& obj2 = MyClass{ 20 };			// �ִ� ������ �ȵȴ� /�ӽð�ü�� ������ ����� �� ����.
//
//	MyClass obj = MyClass{ 10 };				// �ӽð�ü�ּҸ� �ٷ� �����ؼ� ����ؼ� ������ �ٷ� ������ �ȵȴ� 
//	obj.setData(20);							// ���� �ٳ����� 20�̶�� ���� �����Ѵ�.
//
//	MyClass&& obj2 = MyClass{ 20 };			// &&�� rvalue�� �����Ѵٴ� �Ҹ�
//	obj2.setData(22);						//
//
//	const MyClass obj3 = MyClass{ 30 };
//	//obj3.setData(33);						// ��������� �ϹǷ� �������� �����Ѵ�. �׷��� setData�� �ȵ�
//
//	cout << "Bye~~" << endl;				// �ӽð�ü�� �����ϰų� �����߱⶧���� �ٷ� ���� �����ʰ� ���� �� �����Ŀ� �����ȴ�.
//	
//	return 0;
//}