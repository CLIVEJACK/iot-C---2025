///*
//	1. �⺻ Ŭ������ �����ϴ� lvalue�� �Ļ��� Ŭ������ ���� ������ ��ȯ
//	��Ӱ��迡�� �����ϰ� ����ȯ�� �����Ѵ�. ��ĳ����
//	�ٿ�ĳ���ð��� �������� ���ؼ� virtual �޼��尡 �� �־�� �Ѵ�.
//*/
//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	int n1, n2;
//};
//
//class Sub : public Super {
//public:
//	int n3, n4;
//};
//
//class Sub2 : public Sub {
//	int n5, n6;
//};
//
//int main()
//{
//	Super* sp;
//	Sub* sup;
//	Sub2* sup2;
//	Sub2 obj{};
//	
//	sup2 = dynamic_cast<Sub2*>(&obj);		//obj���ִ� �ּҰ��� Sub2�� �����ͷ� �ٲٰڴ� ��� �� /sup2 = (&obj); �̷� ��� ���� �������� ��������� ���ִ°� ����
//	sup = dynamic_cast<Sub2*>(sup2);		// upcasting / �ڽ�(sup2)�� �θ�(Super)�� �����ͷ� �ٲ� �̰� ��ĳ����
//	sp = dynamic_cast<Super*>(sup2);		//
//
//
//	return 0;
//}