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
//template <>				//클래스 템플릿의 특수화
//class CTest<char> {		// <타입> 특수한 타입
//private:
//	char data;
//public:
//	CTest(char d) : data(d) {}
//	char getData() { return data; }
//};
//
//int main()
//{	
//	CTest<int> obj(10);		//클래스 템플릿은 반드시 인스턴스 생성시 typename을 작성해야한다.  <int>를 꼭 작성해야한다
//	std::cout << obj.getData() << std::endl;
//
//	CTest<int> obj2('a');		//클래스 템플릿은 반드시 인스턴스 생성시 typename을 작성해야한다.  <int>를 꼭 작성해야한다
//	std::cout << obj2.getData() << std::endl;
//	return 0;
//
//}