//#include <iostream>
//#include "test.hpp"   // Message Ŭ���� ����
//#include "chatDB.hpp" // MySQLConnector Ŭ���� ����
//
//using namespace sql;
//
//#define SERVER_IP   "127.0.0.1:3306"
//#define USERNAME   "root"
//#define PASSWORD   "12345"
//#define DATABASE   "chat"
//
//int main() {
//    // MySQLConnector�� ����Ͽ� ���� ����
//    MySQLConnector db(SERVER_IP, USERNAME, PASSWORD, DATABASE);
//    Connection* conn = db.getConnection();
//
//    if (!conn) {
//        cerr << "Database connection failed!" << endl;
//        return 1; // ���� ����
//    }
//
//    // �޽��� ���̺��� �����͸� ��������
//    string query = "SELECT msg_id, user_id, msg_text, msg_time FROM Messages LIMIT 5";
//    Statement* stmt = conn->createStatement();
//    ResultSet* res = stmt->executeQuery(query);
//
//    while (res->next()) {
//        int msg_id = res->getInt("msg_id");
//        int user_id = res->getInt("user_id");
//        string msg_text = res->getString("msg_text");
//        string msg_time = res->getString("msg_time");
//
//        Message msg(msg_id, user_id, msg_text, msg_time, conn);
//        msg.print_Message();
//    }
//
//    // �޸� ����
//    delete res;
//    delete stmt;
//
//    return 0;
//}
