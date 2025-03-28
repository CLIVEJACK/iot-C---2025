//#include <iostream>
//#include "test.hpp"   // Message 클래스 포함
//#include "chatDB.hpp" // MySQLConnector 클래스 포함
//
//using namespace sql;
//
//int main() {
//    // MySQLConnector를 사용하여 연결 생성
//    MySQLConnector db;
//
//
//
//    Connection* conn = db.getConnection();
//
//    if (!conn) {
//        cerr << "Database connection failed!" << endl;
//        return 1;
//    }
//
//    // SQL 실행 및 예외 처리
//    try {
//        conn->setSchema(DATABASE);  // 스키마 설정을 다시 실행
//
//        string query = "SELECT msg_id, user_id, msg_text, msg_time FROM Message";
//        unique_ptr<Statement> stmt(conn->createStatement());
//        unique_ptr<ResultSet> res(stmt->executeQuery(query));
//
//        while (res->next()) {
//            int msg_id = res->getInt("msg_id");
//            string msg_text = res->getString("msg_text");
//            string msg_time = res->getString("msg_time");
//
//            Message msg(msg_id, msg_text, msg_time, conn);
//            msg.print_Message();
//        }
//    }
//    catch (SQLException& e) {
//        cerr << "SQL Error: " << e.what() << endl;
//        return 1;
//    }
//    /* 테스트용 */
//    //test out( 1, 1, "회식잼","2020204",conn);
//    //out.printms();
//
//    return 0;
//}