#pragma once
#include <iostream>
#include <mysql/jdbc.h>
#include <Windows.h>


using namespace std;
using namespace sql;

#define SERVER_IP   "127.0.0.1:3306"
#define USERNAME   "root"
#define PASSWORD   "12345"
#define DATABASE   "chat"

class MySQLConnector {
private:
    unique_ptr<Connection> conn; // 스마트 포인터로 MySQL 연결 관리
public:
    MySQLConnector() {
        try {
            mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();
            conn = unique_ptr<Connection>(driver->connect(SERVER_IP, USERNAME, PASSWORD));

            if (conn) {
                conn->setSchema(DATABASE); // 스키마 설정
                cout << "MySQL Connection Success!" << endl;
            }
            else {
                cerr << "Connection Failed: Connection pointer is null!" << endl;
            }
        }
        catch (SQLException& e) {
            cerr << "MySQL Connection Failed! Error: " << e.what() << endl;
        }
    }
    Connection* getConnection() {
        return conn.get();
    }

    ~MySQLConnector() {
        cout << "MySQL Disconnected!" << endl;
    }
};
