//#include <iostream>
//#include "httplib.h"
//#include "chat_send.hpp"
//#include "DB.hpp"
//#include "test.hpp"
//#include "login_find.hpp"
//
//using namespace sql;
//using json = nlohmann::json;
//// ä�� ���� �Լ�
//void handleChat(const httplib::Request& req, httplib::Response& res) {
//
//    // ���� ���� ���
//
//    res.set_content("chat", "text/plain");
//}
//
//int main() {
//    SetConsoleOutputCP(CP_UTF8);
//    MySQLConnector db(SERVER_IP, USERNAME, PASSWORD, DATABASE);
//
//    httplib::Server svr;    // httplib::Server ��ü ����
//
//    // �����Լ����� �ӽ÷� ������ �ڵ�
//    Connection* conn = mysql_db_conn();
//
//    //Chat_send test(1, "", "", conn);
//
//    Message select(db.getConnection());  // GET ��û ó��
//    svr.Get("/chat/messages", [&](const httplib::Request& req, httplib::Response& res) {
//        select.handleMessages(req, res);
//        });
//
//    Login loginHandler(db.getConnection());
//    svr.Get("/login", [&](const httplib::Request& req, httplib::Response& res) {
//        loginHandler.handle_login_find(req, res);
//        });
//
//
//
//    //svr.Get("/chat", handleChat);
//
//    //svr.Post("/chat", [&](const httplib::Request& req, httplib::Response& res) {        // json ��û�ޱ� ���� chat_insert()�Լ� ����
//    //    test.insert_chat(req, res);
//    //    });
//
//    // CORS ����
//    svr.set_default_headers({
//        { "Access-Control-Allow-Origin", "*" },     // ��� �����ο��� ���� ���
//        { "Access-Control-Allow-Methods", "GET, POST, PUT, DELETE" },
//        { "Access-Control-Allow-Headers", "Content-Type, Authorization" }
//        });
//
//    std::cout << u8"Chat Service ���� ��: http://localhost:5003" << std::endl;
//    svr.listen("0.0.0.0", 5003); // ���� ����
//
//    // return 0; �ϸ� �� ��, ������ ����� ������ ��� ����Ǿ�� ��
//}