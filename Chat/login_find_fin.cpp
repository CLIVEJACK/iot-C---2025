//// Ŭ���� ����� chat-admin > admin_select_delete.hpp �ȿ� ���� 
//
//
//    // Ŭ���� �ȿ� �̰� �־���� 
//     // GET ��û�� ó���Ͽ� JSON ���� ��ȯ
//    // GET ��û������ req.body�� ����� �� ���ٰ� ��, GET ��û������ URL ���� �Ű������� Ȱ���ؾ� ��.
//void handle_admin_select(const httplib::Request& req, httplib::Response& res) {
//    try {
//        json users = All_Select();                                                 // MySQL ������ ��ȸ
//        res.set_content(users.dump(), "application/json");                        // JSON ���� ��ȯ
//    }
//    catch (const SQLException& e) {
//        cout << "Query failed: " << e.what() << endl;
//
//    }
//}
// 
// 
//json User_Select(const string& login_id) {
//    json result_json = json::array();
//
//    try {
//        unique_ptr<PreparedStatement> stmt(conn->prepareStatement(
//            "SELECT login_id, login_pw, user_name, user_addr, user_phone, user_email, user_birthdate FROM User WHERE login_id = ?"
//        ));
//        stmt->setString(1, login_id);
//        unique_ptr<ResultSet> res(stmt->executeQuery());
//
//        while (res->next()) {
//            json user;
//            user["login_id"] = res->getString("login_id");
//            user["login_pw"] = res->getString("login_pw");
//            user["user_name"] = res->getString("user_name");
//            user["user_addr"] = res->getString("user_addr");
//            user["user_phone"] = res->getString("user_phone");
//            user["user_email"] = res->getString("user_email");
//            user["user_birthdate"] = res->getString("user_birthdate");
//
//            result_json.push_back(user);
//        }
//    }
//    catch (const SQLException& e) {
//        cout << "Query failed: " << e.what() << endl;
//    }
//
//    return result_json;
//}
//
//// POST ��û�� ó���Ͽ� JSON ���� ��ȯ
//void handle_user_select(const httplib::Request& req, httplib::Response& res) {
//    try {
//        // ��û ������ ����ִ��� Ȯ��
//        if (req.body.empty()) {
//            res.status = 400;
//            res.set_content(R"({"error": "Request body is empty"})", "application/json");
//            return;
//        }
//
//        auto body_json = json::parse(req.body);
//
//        // login_id�� ���ų� ����ִ��� Ȯ��
//        if (!body_json.contains("login_id") || body_json["login_id"].is_null() || body_json["login_id"].get<string>().empty()) {
//            res.status = 400;
//            res.set_content(R"({"error": "login_id is required and cannot be empty"})", "application/json");
//            return;
//        }
//
//        string login_id = body_json["login_id"];
//        json users = User_Select(login_id); // Ư�� login_id�� ����� ��ȸ
//
//        // ��ȸ�� ����� ���� ��� ó��
//        if (users.empty()) {
//            res.status = 404;
//            res.set_content(R"({"error": "User not found"})", "application/json");
//            return;
//        }
//
//        res.set_content(users.dump(), "application/json");
//    }
//    catch (const json::parse_error& e) {
//        res.status = 400;
//        res.set_content(R"({"error": "Invalid JSON format"})", "application/json");
//    }
//    catch (const SQLException& e) {
//        cout << "Query failed: " << e.what() << endl;
//        res.status = 500;
//        res.set_content(R"({"error": "Database query failed"})", "application/json");
//    }
//}
//};