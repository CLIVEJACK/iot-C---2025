/* 원래 하던거 채팅조회 기본 형*/

//#include <iostream>
//#include "login.hpp"   // Message 클래스 포함
//#include "chatDB.hpp" // MySQLConnector 클래스 포함
//
//using namespace sql;
//
//int main() {
//    // MySQLConnector를 사용하여 연결 생성
//    MySQLConnector db;
//    Connection* conn = db.getConnection();
//
//    if (!conn) {
//        cerr << "Database connection failed!" << endl;
//        return 1;
//    }
//
//    try {
//        conn->setSchema(DATABASE);  // DB 스키마 설정
//        Login msg(conn);  // Message 객체 생성
//
//        msg.print_Message();   // 15개씩 최신부터 출력 
//    }
//    catch (SQLException& e) {
//        /*cerr << "SQL Error: " << e.what() << endl;*/
//        return 1;
//    }
//
//    return 0;
//}
