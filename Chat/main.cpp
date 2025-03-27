#include <iostream>
#include "test.hpp"   // Message 클래스 포함
#include "chatDB.hpp" // MySQLConnector 클래스 포함

using namespace sql;

#define SERVER_IP   "127.0.0.1:3306"
#define USERNAME   "root"
#define PASSWORD   "12345"
#define DATABASE   "chat"

int main() {
    // MySQLConnector를 사용하여 연결 생성
    MySQLConnector db(SERVER_IP, USERNAME, PASSWORD, DATABASE);
    Connection* conn = db.getConnection();

    if (!conn) {
        cerr << " Database connection failed!" << endl;
        return 1; // 오류 종료
    }

    // Message 객체 생성 및 출력
    Message print(10, 20, "ㅇㅇ", "ㅇㅇㅇ", conn);
    print.print_Message();

    return 0;
}
