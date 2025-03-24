///*
//	4. 상속 관계에서 객체 생성 및 소멸
//*/
//
//#include <iostream>
//using namespace std;
//
//class SuperClass {
//private:
//	int num;
//public:
//	SuperClass(int an) {
//		num = an;
//		cout << num << " SuperClass consturctor" << endl;		// 생성자 생성
//	}
//	~SuperClass(){
//		cout << num << " SuperClass Destructor" << endl;			// 생성자 소멸 자는 다 끝마면 출력되고 삭제는 거꾸로 실행된다고 생각하면됨
//	}
//};
//class  SubClass : public SuperClass {
//public:
//	int subNum;
//public:
//	SubClass(int an, int an2) : SuperClass(an){
//		subNum = an2;
//		cout << subNum << " SubClass consturctor" << endl;
//	}
//	~SubClass() {
//		cout << subNum << " SubClass Destructor" << endl;
//	}
//};
//int main()
//{
//	SuperClass s{ 1 };
//	cout << "==============================================" << endl;
//	SubClass sub{ 2, 22 };		// 2라는 값은 부모의 인자여서 superClass의 값으로 나오고 22는 subclass로 나온다
//
//	return 0;
//}
//
///*
//	객체를 생성할때 호출되는 생성자와 생성자의 실행은 다르다 
//	즉 생성자의 호출과 생성의 실행은 다르다 
//*/