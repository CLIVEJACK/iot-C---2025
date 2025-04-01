//#include <iostream>
//#include <string>
//#include "DB.hpp"
//#include <windows.h>
//#include "json.hpp"
//#include "httplib.h"  // HTTP 서버 라이브러리 추가
//
//using namespace std;
//using json = nlohmann::json;
//
//class Login {
//private:
//    Connection* conn;
//public:
//    Login(Connection* _conn) : conn(_conn) {
//        if (!conn) {
//            cerr << "Error : Connection pointer is null" << endl;
//        }
//    }
//    ~Login() {}
//
//    json Login_find(const string& input_user_id) {
//        try {
//            string query = R"(SELECT user_id, login_id, login_pw, user_name, user_addr, user_phone, user_status, user_email, user_birthdate FROM User WHERE user_id = ?)";
//            unique_ptr<PreparedStatement> pstmt(conn->prepareStatement(query));
//            pstmt->setString(1, input_user_id);
//
//            unique_ptr<ResultSet> res(pstmt->executeQuery());
//
//            SetConsoleOutputCP(CP_UTF8); // 한글 출력 지원
//
//            if (res->next()) {  // 결과가 존재하면 JSON 변환
//                json user_info = {
//                    {"user_id", res->getString("user_id")},
//                    {"login_id", res->getString("login_id")},
//                    {"login_pw", res->getString("login_pw")},
//                    {"user_name", res->getString("user_name")},
//                    {"user_addr", res->getString("user_addr")},
//                    {"user_phone", res->getString("user_phone")},
//                    {"user_status", res->getInt("user_status")},
//                    {"user_email", res->getString("user_email")},
//                    {"user_birthdate", res->getString("user_birthdate")}
//                };
//                return user_info;
//            }
//            else {
//                return { {"error", "사용자를 찾을 수 없습니다."} };
//            }
//        }
//        catch (SQLException& e) {
//            cerr << "SQL Error: " << e.what() << endl;
//            return { {"error", "Database error"} };
//        }
//    }
//
//    // HTTP 요청을 처리하는 핸들러 함수 추가
//    void handle_login_find(const httplib::Request& req, httplib::Response& res) {
//        if (req.has_param("user_id")) {
//            string user_id = req.get_param_value("user_id");
//            json result = Login_find(user_id);
//
//            res.set_content(result.dump(4), "application/json"); // JSON 응답 반환
//        }
//        else {
//            res.status = 400; // Bad Request
//            res.set_content(R"({"error": "Missing user_id parameter"})", "application/json");
//        }
//    }
//};
