#include "Product.hpp"
#include "Book.hpp"
#include "Computer.hpp"
#include "HandPhone.hpp"
#include <Windows.h>

int main()
{
	Product* obj[100] = {};
	int price, ram;
	string id = "0", producer, name, author, disk, cpu, gpu;

	system("cls");
	cout << "====== 상품 관리 프로그램 ======" << endl;
	while (true) {
		if (stoi(id) >= 100) break;
		cout << "====== 메뉴 ======\n"
			 << "== 1. 상품 추가 ==\n"
			 << "== 2. 상품 조회 ==\n"
			 << "== 3. 종     료 ==\n"
			 << "== 번호 입력 >> ";
		int menu;
		cin >> menu;
		cin.ignore();
		system("cls");
		if (menu == 1) {
			cout << "=== 상품 종류 ===\n"
				 << "=== 1.     책 ===\n"
				 << "=== 2. 컴퓨터 ===\n"
				 << "=== 3. 핸드폰 ===\n"
				 << "== 번호 입력 >> ";
			cin >> menu;
			cin.ignore();
			system("cls");
			if (menu == 1) {
				cout << "=== 1.     책 ===" << endl;
				cout << "생산자 : "; getline(cin, producer);
				cout << "책이름 : "; getline(cin, name);
				cout << "가격 : "; cin >> price; cin.ignore();
				cout << "작가 : "; getline(cin, author);
				Book* B = new Book(id, price, producer, name, author);
				obj[stoi(id)] = B;
				id = to_string(stoi(id) + 1);
			}
			else if (menu == 2) {
				cout << "=== 2. 컴퓨터 ===" << endl;
				cout << "생산자 : "; getline(cin, producer);
				cout << "가격 :  "; cin >> price; cin.ignore();
				cout << "Disk : "; cin >> disk; cin.ignore();
				cout << "RAM : "; cin >> ram; cin.ignore();
				cout << "CPU : "; getline(cin, cpu);
				cout << "GPU : "; getline(cin, gpu);
				Computer* C = new Computer(id, price, producer, disk, ram, cpu, gpu);
				obj[stoi(id)] = C;
				id = to_string(stoi(id) + 1);
			}
			else if (menu == 3) {
				cout << "=== 3. 핸드폰 ===" << endl;
				cout << "핸드폰 이름 : "; getline(cin, name);
				cout << "생산자 : "; getline(cin, producer);
				cout << "가격 : "; cin >> price; cin.ignore();
				cout << "Disk : "; cin >> disk; cin.ignore();
				cout << "RAM : "; cin >> ram; cin.ignore();
				cout << "CPU : "; getline(cin, cpu);
				cout << "GPU : "; getline(cin, gpu);
				HandPhone* H = new HandPhone(id, price, producer, disk, ram, cpu, gpu, name);
				obj[stoi(id)] = H;
				id = to_string(stoi(id) + 1);
			}
			else {
				cout << "잘못된 번호 입력!" << endl;
				cin; cin.ignore();
			}
		}
		else if (menu == 2) {
			cout << "=== 상품 조회 ===\n"
				 << "== 1. 전체조회 ==\n"
				 << "== 2. I D 조회 ==\n";
			cin >> menu; cin.ignore();
			system("cls");
			if (menu == 1) {
				for (int i = 0; i < stoi(id); i++) {
					obj[i]->show();
					cin; cin.ignore();
					system("cls");
				}
			}
			else if (menu == 2) {
				cout << "확인할 ID를 입력해 주세요 : ";
				cin >> menu; cin.ignore();
				system("cls");
				if (obj[menu]) {
					obj[menu]->show();
					cin; cin.ignore();
					system("cls");
				}
				else {
					cout << "등록된 ID가 없습니다!" << endl;
					cin; cin.ignore();
					system("cls");
				}
			}
			else {
				cout << "잘못된 번호 입력!" << endl;
				cin; cin.ignore();
			}
		}
		else if (menu == 3) break;
		else { 
			cout << "잘못된 번호 입력!" << endl;
			cin; cin.ignore();
		}
		system("cls");
	}

	return 0;
}