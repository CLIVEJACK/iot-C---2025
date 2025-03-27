//#include <iostream>
//#include "test.hpp"   // Message 클래스 포함
//#include "chatDB.hpp" // MySQLConnector 클래스 포함
//
//using namespace sql;
//
//#define SERVER_IP   "127.0.0.1:3306"
//#define USERNAME   "root"
//#define PASSWORD   "12345"
//#define DATABASE   "chat"
//
//int main() {
//    // MySQLConnector를 사용하여 연결 생성
//    MySQLConnector db(SERVER_IP, USERNAME, PASSWORD, DATABASE);
//    Connection* conn = db.getConnection();
//
//    if (!conn) {
//        cerr << "Database connection failed!" << endl;
//        return 1; // 오류 종료
//    }
//
//    // 메시지 테이블에서 데이터를 가져오기
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
//    // 메모리 해제
//    delete res;
//    delete stmt;
//
//    return 0;
//}
