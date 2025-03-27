//#pragma once
//#include <iostream>
//#include <mysql/jdbc.h>
//
//using namespace std;
//using namespace sql;
//
//#define SERVER_IP   "127.0.0.1:3306"
//#define USERNAME   "root"
//#define PASSWORD   "12345"
//#define DATABASE   "chat"
//
//class MySQLConnector {
//private:
//    string server;
//    string username;
//    string password;
//    string database;
//    unique_ptr<Connection> conn; // 스마트 포인터로 MySQL 연결 관리
//public:
//    // 생성자: MySQL에 연결
//    MySQLConnector(const string& serv, const string& user, const string& pw, const string& db)
//        : server(serv), username(user), password(pw), database(db) {
//        try {
//            mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();
//            conn = unique_ptr<Connection>(driver->connect(server, username, password));
//            conn->setSchema(database);
//            cout << "MySQL Connection success!!" << endl;
//        }
//        catch (SQLException& e) {
//            cerr << "MySQL Connection Failed!! Error: " << e.what() << endl;
//        }
//    }
//
//    // 현재 연결을 반환하는 함수
//    Connection* getConnection() {
//        return conn.get();
//    }
//
//    ~MySQLConnector() {
//        cout << "MySQL Disconnect!!" << endl;
//    }
//};
