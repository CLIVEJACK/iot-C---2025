///*
//    12. Human 문제 푼거
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>  // strcpy 사용을 위해 추가
//
//using namespace std;
//
//class Human {
//private:
//    char* pname;
//    int age;
//    char* ptel;
//public:
//    Human(const char* n1, int n2, const char* n3) {
//        pname = new char[strlen(n1) + 1];  // 메모리 할당 : 위에 char에서 배열을 할당하지 않아서 메모리를 할당해야함 ex) char* pname[20]이런식으로 안해서
//        strcpy(pname, n1);  // 이런식으로 할당받은 메모리에 값을 pname으로 값을 복사함
//        age = n2;
//        ptel = new char[strlen(n3) + 1];  // 메모리 할당
//        strcpy(ptel, n3);
//    }
//
//    ~Human() {
//        delete[] pname;
//        delete[] ptel;
//    }
//    void getData() {
//        cout << "이름은: " << pname << ", 나이는: " << age << ", 전화번호는: " << ptel << endl;
//    }
//};
//
//int main()
//{
//    Human h("홍길동", 30, "010-1234-1234");
//    h.getData();
//
//    return 0;
//}
//
///*
//pname과 ptel을 new로 동적 할당 후 strcpy() 사용.
//소멸자에서 delete[]를 사용하여 메모리 해제.
//#include <cstring> 추가하여 strcpy() 사용 가능하도록 함.
//cout 문장에서 , 추가하여 가독성 향상.
//*/