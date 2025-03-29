#include <iostream>
#include "test.hpp"   // Message Ŭ���� ����
#include "chatDB.hpp" // MySQLConnector Ŭ���� ����

using namespace sql;

int main() {
    // MySQLConnector�� ����Ͽ� ���� ����
    MySQLConnector db;
    Connection* conn = db.getConnection();

    if (!conn) {
        cerr << "Database connection failed!" << endl;
        return 1;
    }

    try {
        conn->setSchema(DATABASE);  // DB ��Ű�� ����
        Message msg(conn);  // Message ��ü ����

        msg.print_Message();   // 15���� �ֽź��� ��� 
    }
    catch (SQLException& e) {
        /*cerr << "SQL Error: " << e.what() << endl;*/
        return 1;
    }

    return 0;
}
