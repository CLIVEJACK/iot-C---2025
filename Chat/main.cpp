#include <iostream>
#include "test.hpp"   // Message 클래스 포함
#include "chatDB.hpp" // MySQLConnector 클래스 포함

using namespace sql;

int main() {
    // MySQLConnector를 사용하여 연결 생성
    MySQLConnector db;
    Connection* conn = db.getConnection();

    if (!conn) {
        cerr << "Database connection failed!" << endl;
        return 1;
    }

    try {
        conn->setSchema(DATABASE);  // DB 스키마 설정
        Message msg(conn);  // Message 객체 생성
        msg.print_Message();  // DB에서 메시지를 조회하여 출력
        
        cout << msg.countMessages() <<endl;         // 카운트 함수 출력 
    }
    catch (SQLException& e) {
        /*cerr << "SQL Error: " << e.what() << endl;*/
        return 1;
    }

    return 0;
}
