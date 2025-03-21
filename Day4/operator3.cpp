///* 
//	4.맴버함수 연산자 오버로딩: p1 operator+연산자(p2) > p1객체를 p2에 더한다  ex) p1 operator+(p2)
//	객체를 객체에다가 대입은 오버로딩으로 처리 가능하지만 객체의 값과 객체의 값을 더하는건 불가능하다 하지만 멤버함수 연산자를 오버로딩하면 된다.
//*/
//#include <iostream>
//
//class MyClass
//{
//private:
//	int value;
//public:
//	MyClass(int n) :value(n){} 			//변환생성자: 입력값 1나를 받는것 : :value(n){} 에서 n은 값을 (받는값)집어넣는다는 뜻이라 없으면 매개변수값인 0이 출력됨
//	MyClass operator+(const MyClass& other) {// 연산자 오버로딩 참조형태로 만드는게 중요
//		printf("+ overoading");
//		return MyClass(value + other.value);
//	}
//	void showMyClass() {
//		printf("value: %d\n", value);
//	}
//};
//
//int main()
//{	
//	MyClass obj(10);		// 초기 값을 가지는 객체 생성
//	obj.showMyClass();
//
//	MyClass obj2(obj);		//obj를 복사해서 객체 생성
//	obj.showMyClass();
//
//	MyClass obj3 = obj2;		 // 2를 복사(생성자)해서 3에다가 넣음/ obj를 복사해서 객체 생성
//	obj3.showMyClass();
//
//	MyClass obj4 = obj + obj2 + obj3;	// 객체를 더한 결과를 가지고 객체 생성 '+' 자료연산끼리는 가능하지만 객체객체인 obj끼리는 안된다 하지만+연산자가 객체를(앞에서 한 add()함수를 작성하면) 더한다고 정의해주면 가능
//	//obj4.showMyClass();			//위에 연산자 오버로딩 선언으로 
//	//MyClass obj4 = (obj.operator+(obj2)).operator+(obj3);
//
//	obj4.showMyClass();
//	return 0;
//}