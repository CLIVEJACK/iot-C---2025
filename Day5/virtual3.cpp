///*
//	13. �߻��ڷ����� �̿��ؼ� �����Ҵ�� ��ü�� �����Ҷ��� �޸� ���� �� ���� Ÿ���� �Ҹ��ڸ� ȣ��Ǿ� �޸� ������ �߻�.
//	���� ���� Ŭ������ �Ҹ��ڸ� �������� ����� ��Ÿ���� �Ҹ���ȣ���� �����Ѵ�.
//*/
//#include <iostream>
//using namespace std;
//
//class CTest {
//private:
//	int num;
//public:
//	CTest(int anum) : num(anum) { cout << num << " CTest consturctor" << endl; }
//	virtual ~CTest() { cout << num << " CTest destructor" << endl; }		// ���� �Ҹ��� - �տ��ٰ� virtual�� �־� �޸� ������ �������ִ�
//	virtual void Vfunc() { cout << "CTest virtual function()" << endl; }
//	void func() { cout << "CTest function()" << endl; }
//};
//class CTestSub :public CTest {
//private:
//	int subN;
//public:
//	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTestSub cnostructor" << endl; }
//	~CTestSub() { cout << subN << " CTestSub destructor" << endl; }
//	void Vfunc() { cout << "CTestSub function() override" << endl; }
//};
//
//int main()
//{
//
//	CTest obj(1);
//	cout << "=======================================" << endl;
//	CTestSub obj2(2, 22);
//	cout << "=======================================" << endl;
//	obj.func();
//	obj.Vfunc();
//	cout << "=======================================" << endl;
//	obj2.func();			// �ڽ� Ŭ������ �Լ��� ������ �θ�Ŭ������ func()�Լ��� �����޾Ƽ� ����ϰ� 
//	obj2.Vfunc();			
//	cout << "=======================================" << endl;
//
//	CTest* ptr = new CTestSub(3, 33);		// ��ü �����Ҵ�� ������ �̷�������� ������ �̷���������� (����� ������ �ȵ� ���� �߻�) - �޸� ����
//											// �޸� ������ �߻��� ���� �ް������տ� virtual�� �ִ´�
//	delete ptr;
//
//	return 0;
//}