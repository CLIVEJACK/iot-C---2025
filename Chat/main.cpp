#include <iostream>
#include "test.hpp"   // Message Ŭ���� ����
#include "chatDB.hpp" // MySQLConnector Ŭ���� ����

using namespace sql;

#define SERVER_IP   "127.0.0.1:3306"
#define USERNAME   "root"
#define PASSWORD   "12345"
#define DATABASE   "chat"

int main() {
    // MySQLConnector�� ����Ͽ� ���� ����
    MySQLConnector db(SERVER_IP, USERNAME, PASSWORD, DATABASE);
    Connection* conn = db.getConnection();

    if (!conn) {
        cerr << " Database connection failed!" << endl;
        return 1; // ���� ����
    }

    // Message ��ü ���� �� ���
    Message print(10, 20, "����", "������", conn);
    print.print_Message();

    return 0;
}
