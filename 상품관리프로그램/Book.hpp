#pragma once

#include "Product.hpp"

class Book : public Product {
private:
	string name;
	string author;
public:
	Book(string id, int price, string producer, string book_name, string author) : Product(id, price, producer) {
		name = book_name;
		this->author = author;
	}
	void show() {
		cout << "=========================" << endl;
		cout << "===== 상품 id : " << P_id() << endl;
		cout << "책이름 : " << name << endl;
		cout << "가격 : " << P_price() << endl;
		cout << "생산자 : " << P_producer() << endl;
		cout << "작가 : " << author << endl;
	}
};