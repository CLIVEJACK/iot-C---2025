///*
//	11.StaticTest ��� �۷����� ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������
//	3���Է¹޴� �����ڸ� �ۼ��Ѵ�. ȸ����ȣ�� �ڵ����� ������ų ��
//	��´���� showmember()�޼��带 �����Ͻÿ�.
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
//	std::cout << "ȸ����ȣ: " << cnt << std::endl;
//	printf("�̸�: %s, ��ȭ��ȣ: %s, �ּ�: %s\n", name, phone, addr);
//}
//
//int main()
//{
//	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
//	m1.showmember();
//	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
//	m2.showmember();
//	StaticTest m3("��ö��", "010-3333-3333", "���");
//	m3.showmember();
//	return 0;
//}