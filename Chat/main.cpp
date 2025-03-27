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

    // SQL ���� �� ���� ó��
    try {
        conn->setSchema(DATABASE);  // ��Ű�� ������ �ٽ� ����

        string query = "SELECT msg_id, user_id, msg_text, msg_time FROM Messages LIMIT 5";
        unique_ptr<Statement> stmt(conn->createStatement());
        unique_ptr<ResultSet> res(stmt->executeQuery(query));

        while (res->next()) {
            int msg_id = res->getInt("msg_id");
            int user_id = res->getInt("user_id");
            string msg_text = res->getString("msg_text");
            string msg_time = res->getString("msg_time");

            Message msg(msg_id, user_id, msg_text, msg_time, conn);
            msg.print_Message();
        }
    }
    catch (SQLException& e) {
        cerr << "SQL Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
