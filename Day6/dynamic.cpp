///*
//	1. 기본 클래스를 참조하는 lvalue를 파생된 클래스에 대한 참조로 변환
//	상속관계에서 안전하게 형변환을 지원한다. 업캐스팅
//	다운캐스팅경우는 다형성을 위해서 virtual 메서드가 꼭 있어야 한다.
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
//	sup2 = dynamic_cast<Sub2*>(&obj);		//obj에있는 주소값을 Sub2의 포인터로 바꾸겠다 라는 뜻 /sup2 = (&obj); 이래 적어도 같은 뜻이지만 명시적으로 해주는게 좋음
//	sup = dynamic_cast<Sub2*>(sup2);		// upcasting / 자식(sup2)을 부모(Super)의 포인터로 바꿈 이게 업캐스팅
//	sp = dynamic_cast<Super*>(sup2);		//
//
//
//	return 0;
//}