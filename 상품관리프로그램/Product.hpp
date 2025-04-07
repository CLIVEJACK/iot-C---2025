#pragma once

#include <iostream>
#include <string>

using namespace std;

class Product {
private:
	string id;
	int price;
	string producer;
public:
	Product(string id, int price, string producer) {
		this->id = id;
		this->price = price;
		this->producer = producer;
	}
	virtual void show() {};
	int P_price() {
		return this->price;
	}
	string P_id() {
		return this->id;
	}
	string P_producer() {
		return this->producer;
	}
};