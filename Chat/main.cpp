#include <iostream>
#include"login.hpp"   
#include "chatDB.hpp" 
#include <windows.h>


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
        conn->setSchema(DATABASE);  

        Login loginHandler(conn);  

        loginHandler.Login_find();  
    }
    catch (SQLException& e) {
        cerr << "SQL Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
