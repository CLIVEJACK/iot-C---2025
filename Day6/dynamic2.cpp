///*
//	2.dynamic_cast�� �̿��Ͽ� �ٿ�ĳ���ð��� �����Լ��� �־�� �Ѵ�.
//	static_cast���� ���������� ����ȯ�� �����ϴ�
//*/
//
//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	virtual void func() { cout << "Super::func()" << endl; }		// �ٿ�ĳ������ ���ؼ� virtual�� �տ��ٰ� ���δ�
//	void func1() { cout << "Super::func1()" << endl; }
//	void fx() { cout << "Super::fx()" << endl; }		// �������̵�
//};
//class Sub : public Super {
//public:
//	void func() { cout << "Sub::func()" << endl; }
//	void func2() { cout << "Sub::func2()" << endl; }
//	void fx() { cout << "Super::fx()" << endl; }		// �������̵�
//};
//
//int main()
//{
//	Super* sp = new Super{};		// �θ� ��ü�� �θ� ��Ÿ���� �ƹ� ��������
//	sp->func();
//	sp->func1();
//	sp->fx();
//	cout << "==============Upcasting===============" << endl;
//	Super* sp2 = new Sub{};			// �θ� ��ü�� �ڽİ�ü�� ����Ŵ
//	sp2->func();
//	sp2->func1();
//	sp2->fx();
//	//sp2->func2();					// �ڽ� Ŭ���� ���ο� ���ٺҰ���
//	cout << "==============dowoncasting===============" << endl;
//	Sub* sp3 = dynamic_cast<Sub*>(sp2);	//sp2�� ����Ŭ�������� Sub�� ����Ŭ������ �ٲ�� ��¶� �����Լ�(virtual)�� ������ �ٿ�ĳ������ ���� ���Ѵ�
//	sp3->func();
//	sp3->func1();
//	sp3->func2();
//	sp3->fx();
//
//	delete sp;
//	delete sp2;
//
//
//	return 0;
//}