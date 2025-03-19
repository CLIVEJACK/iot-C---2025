///*
//	2. class 생성자는 클래스와 이름이 같으며 출력이없다
//	생성자를 받는 값이 있어야 초기화도 가능하다 ?
//*/
//
//#include <iostream>
//using namespace std;
//
//class AClass {
//private:
//	int n1;
//	int n2;
//public:
//	//AClass() {}
//	void setData(int num1, int num2) {
//		n1 = num1;
//		n2 = num2;
//	}
//	void getData() {
//		cout << "A클래스의 obj입니다"<< endl;
//		cout << "n1: "<< n1 << "n2:"<< n2 << endl;
//
//	}
//};
//
//int main()
//{
//	AClass obj;
//	//AClass obj(100, 200);   //생성과 동시에 초기화 불가능
//
//	obj.setData(1, 2);
//	obj.getData();			// 출력
//
//	return 0;
//}