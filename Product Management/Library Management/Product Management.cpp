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
        cout << "��ǰ ID: " << id << endl;
        cout << "����: " << price << endl;
        cout << "������: " << producer << endl;
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
        cout << "����: " << author << endl;
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
        cout << "�𵨸�: " << model << endl;
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
    cout << "\n==== ��ǰ ���� �ý��� ====\n";
    cout << "1. ��ǰ ���\n";
    cout << "2. ��ü ��ǰ ���\n";
    cout << "3. ����\n";
}

void AddProduct() {
    int type;
    string id, producer;
    int price;

    cout << "[��ǰ ���]\n";
    cout << "��ǰ ���� (1: Book, 2: HandPhone, 3: Computer): ";
    cin >> type;

    cout << "��ǰ ID: "; cin >> id;
    cout << "����: "; cin >> price;
    cout << "������: "; cin >> producer;

    if (type == 1) {
        string author;
        cout << "����: "; cin >> author;
        products.push_back(new Book(id, price, producer, author));
    }
    else if (type == 2) {
        string model;
        cout << "�𵨸�: "; cin >> model;
        products.push_back(new HandPhone(id, price, producer, model));
    }
    else if (type == 3) {
        string cpu;
        cout << "CPU: "; cin >> cpu;
        products.push_back(new Computer(id, price, producer, cpu));
    }
    else {
        cout << "�߸��� �����Դϴ�." << endl;
    }
}

void ShowAllProducts() {
    cout << "\n[��ü ��ǰ ���]\n";
    for (const auto& product : products) {
        product->ShowInfo();
        cout << "----------------------\n";
    }
}

int main() {
    int choice;

    while (true) {
        ShowMenu();
        cout << "����: ";
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
            cout << "�߸��� �����Դϴ�.\n";
        }
    }
}
