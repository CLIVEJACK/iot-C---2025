///*
//	11.StaticTest 라는 글래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
//	3개입력받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것
//	출력담당의 showmember()메서드를 구현하시오.
// 
//*/
//#include <iostream>
//
//class StaticTest{
//private:
//	static int staic_cnt;
//	char name[20];
//	char phone[20];
//	char addr[20];
//public:
//
//	StaticTest(const char* nanem, const char* phone, const char* addr);
//	static void setStatic_a(int )
//}
//
//
//void showmember() {
//	std::cout << "회원번호: " << cnt << std::endl;
//	printf("이름: %s, 전화번호: %s, 주소: %s\n", name, phone, addr);
//}
//
//int main()
//{
//	StaticTest m1("홍길동", "010-1111-1111", "부산");
//	m1.showmember();
//	StaticTest m2("김영희", "010-2222-2222", "부산");
//	m2.showmember();
//	StaticTest m3("김철수", "010-3333-3333", "울산");
//	m3.showmember();
//	return 0;
//}