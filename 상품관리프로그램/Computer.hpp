#pragma once

#include "Product.hpp"

class Computer : public Product {
private:
	int ram;
	string disk;
	string cpu;
	string gpu;
public:
	Computer(string id, int price, string producer, string c_disk, int c_ram, string c_cpu, string c_gpu) : Product(id, price, producer), disk(c_disk), ram(c_ram), cpu(c_cpu), gpu(c_gpu) {

	}
	void show() {
		cout << "=========================" << endl;
		cout << "===== 상품 id : " << P_id() << endl;
		cout << "생산자 : " << P_producer() << endl;
		cout << "가격 : " << P_price() << endl;
		cout << "Disk : " << disk << endl;
		cout << "RAM : " << ram << "GB" << endl;
		cout << "CPU : " << cpu << endl;
		cout << "GPU : " << gpu << endl;
	}
	string get_disk() {
		return disk;
	}
	int get_ram() {
		return ram;
	}
	string get_cpu() {
		return cpu;
	}
	string get_gpu() {
		return gpu;
	}
};