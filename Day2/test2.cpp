///*
//    12. Human ���� Ǭ��
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>  // strcpy ����� ���� �߰�
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
//        pname = new char[strlen(n1) + 1];  // �޸� �Ҵ� : ���� char���� �迭�� �Ҵ����� �ʾƼ� �޸𸮸� �Ҵ��ؾ��� ex) char* pname[20]�̷������� ���ؼ�
//        strcpy(pname, n1);  // �̷������� �Ҵ���� �޸𸮿� ���� pname���� ���� ������
//        age = n2;
//        ptel = new char[strlen(n3) + 1];  // �޸� �Ҵ�
//        strcpy(ptel, n3);
//    }
//
//    ~Human() {
//        delete[] pname;
//        delete[] ptel;
//    }
//    void getData() {
//        cout << "�̸���: " << pname << ", ���̴�: " << age << ", ��ȭ��ȣ��: " << ptel << endl;
//    }
//};
//
//int main()
//{
//    Human h("ȫ�浿", 30, "010-1234-1234");
//    h.getData();
//
//    return 0;
//}
//
///*
//pname�� ptel�� new�� ���� �Ҵ� �� strcpy() ���.
//�Ҹ��ڿ��� delete[]�� ����Ͽ� �޸� ����.
//#include <cstring> �߰��Ͽ� strcpy() ��� �����ϵ��� ��.
//cout ���忡�� , �߰��Ͽ� ������ ���.
//*/