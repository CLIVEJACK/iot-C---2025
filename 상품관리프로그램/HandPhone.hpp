#pragma once

#include "Computer.hpp"

class HandPhone : public Computer {
private:
	string phone_name;
public:
	HandPhone(string id, int price, string producer, string p_disk, int p_ram, string p_cpu, string p_gpu, string p_name) : Computer(id, price, producer, p_disk, p_ram, p_cpu, p_gpu), phone_name(p_name) {

	}
	void show();
};

void HandPhone::show() {
	cout << "=========================" << endl;
	cout << "===== 상품 id : " << P_id() << endl;
	cout << "핸드폰 이름 : " << phone_name << endl;
	cout << "가격 : " << P_price() << endl;
	cout << "생산자 : " << P_producer() << endl;
	cout << "Disk : " << get_disk() << endl;
	cout << "RAM : " << get_ram() << "GB" << endl;
	cout << "CPU : " << get_cpu() << endl;
	cout << "GPU : " << get_gpu() << endl;
}