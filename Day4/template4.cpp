///*
//	17.
//*/
//
//#include <iostream>
//
//template <typename T>
//class CTest {
//private:
//	T num;
//public:
//	CTest(T n): num(n){}
//	T getData() { return num; }
//};
//
//template <>				//Ŭ���� ���ø��� Ư��ȭ
//class CTest<char> {		// <Ÿ��> Ư���� Ÿ��
//private:
//	char data;
//public:
//	CTest(char d) : data(d) {}
//	char getData() { return data; }
//};
//
//int main()
//{	
//	CTest<int> obj(10);		//Ŭ���� ���ø��� �ݵ�� �ν��Ͻ� ������ typename�� �ۼ��ؾ��Ѵ�.  <int>�� �� �ۼ��ؾ��Ѵ�
//	std::cout << obj.getData() << std::endl;
//
//	CTest<int> obj2('a');		//Ŭ���� ���ø��� �ݵ�� �ν��Ͻ� ������ typename�� �ۼ��ؾ��Ѵ�.  <int>�� �� �ۼ��ؾ��Ѵ�
//	std::cout << obj2.getData() << std::endl;
//	return 0;
//
//}