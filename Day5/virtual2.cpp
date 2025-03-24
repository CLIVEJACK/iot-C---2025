///*
//	12. virtual Class - 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 삼수를 가지는 클래스
//	추상클래스는 객체를 생성할 수 없다. 순수가상함수떄문에 
//*/
//#include <iostream>
//
//class Cinterface {
//public:
//	Cinterface() { std::cout << "CInerface constructor" << std::endl; }
//	virtual void getData() const = 0;	//메서드 작성/ 순수 가상 함수> =0 /const = 0;는 몸통자체가 없다 == 객체를 생성할 수없다.
//										// 순수 가상함수는 몸체가 없어서 오버라이딩을 꼭해서 작성해라 라는 뜻
//
//};
//class CinSub : public Cinterface {		// 순수 가상함수 == 상속한놈은 나를 재정이하라 
//public:
//	CinSub() { std::cout << "Cinsub constructor" << std::endl; }
//	void getData() const override {				// 순수 가상함수는 오버라이딩을 꼭해야한다/ 재정의를 해야 출력이 가능하다 
//		std::cout << "Pure Virtual function()" << std::endl;
//	}
//};
//
//int main()
//{
//	//Cinterface obj;
//	CinSub obj;
//	obj.getData();
//	return 0;
//}