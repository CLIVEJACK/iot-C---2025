//#include <iostream>
//
//class Human {
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
//class Student : public Human {
//private:
//	int studnetID;
//public:
//	Student(const char* name, int age, int studnetID);
//	void showStdent();
//};
//Human::Human(const char* aname, int aage) {
//	strcpy_s(name, aname);
//	age = aage;
//}
//void Human::getData() {
//	std::cout << "�̸�: " << name << "����: " << age << std::endl;
//}
//Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {
//	studnetID = astudentID;
//}
//void Student::showStdent() {
//	std::cout << "�й�: " << studnetID << std::endl;
//}
//
//
//int main()
//{
//	Human h("���", 5);
//	h.getData();
//
//	Student h2("������", 5, 20503);
//	h2.getData();
//
//	h2.showStdent();
//	
//
//	return 0;
//}