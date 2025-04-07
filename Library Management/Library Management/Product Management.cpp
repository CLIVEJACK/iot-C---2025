#include <iostream>
#include <vector>
using namespace std;

enum { ADD = 1, SHOW, EXIT };

class Product {
protected:
    string id;
    int price;
    string producer;
public:
    Product(string _id, int _price, string _producer)
        : id(_id), price(_price), producer(_producer) {
    }

    virtual void ShowInfo() const {
        cout << "상품 ID: " << id << endl;
        cout << "가격: " << price << endl;
        cout << "제조사: " << producer << endl;
    }

    virtual ~Product() {}
};

class Book : public Product {
private:
    string author;
public:
    Book(string _id, int _price, string _producer, string _author)
        : Product(_id, _price, _producer), author(_author) {
    }

    void ShowInfo() const override {
        Product::ShowInfo();
        cout << "저자: " << author << endl;
    }
};

class HandPhone : public Product {
private:
    string model;
public:
    HandPhone(string _id, int _price, string _producer, string _model)
        : Product(_id, _price, _producer), model(_model) {
    }

    void ShowInfo() const override {
        Product::ShowInfo();
        cout << "모델명: " << model << endl;
    }
};

class Computer : public Product {
private:
    string cpu;
public:
    Computer(string _id, int _price, string _producer, string _cpu)
        : Product(_id, _price, _producer), cpu(_cpu) {
    }

    void ShowInfo() const override {
        Product::ShowInfo();
        cout << "CPU: " << cpu << endl;
    }
};

vector<Product*> products;

void ShowMenu() {
    cout << "\n==== 상품 관리 시스템 ====\n";
    cout << "1. 상품 등록\n";
    cout << "2. 전체 상품 출력\n";
    cout << "3. 종료\n";
}

void AddProduct() {
    int type;
    string id, producer;
    int price;

    cout << "[상품 등록]\n";
    cout << "상품 종류 (1: Book, 2: HandPhone, 3: Computer): ";
    cin >> type;

    cout << "상품 ID: "; cin >> id;
    cout << "가격: "; cin >> price;
    cout << "제조사: "; cin >> producer;

    if (type == 1) {
        string author;
        cout << "저자: "; cin >> author;
        products.push_back(new Book(id, price, producer, author));
    }
    else if (type == 2) {
        string model;
        cout << "모델명: "; cin >> model;
        products.push_back(new HandPhone(id, price, producer, model));
    }
    else if (type == 3) {
        string cpu;
        cout << "CPU: "; cin >> cpu;
        products.push_back(new Computer(id, price, producer, cpu));
    }
    else {
        cout << "잘못된 선택입니다." << endl;
    }
}

void ShowAllProducts() {
    cout << "\n[전체 상품 목록]\n";
    for (const auto& product : products) {
        product->ShowInfo();
        cout << "----------------------\n";
    }
}

int main() {
    int choice;

    while (true) {
        ShowMenu();
        cout << "선택: ";
        cin >> choice;

        switch (choice) {
        case ADD:
            AddProduct();
            break;
        case SHOW:
            ShowAllProducts();
            break;
        case EXIT:
            for (auto product : products)
                delete product;
            return 0;
        default:
            cout << "잘못된 선택입니다.\n";
        }
    }
}
