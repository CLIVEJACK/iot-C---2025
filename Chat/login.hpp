#include <iostream>
#include <string>
#include "chatDB.hpp"
#include <windows.h>

using namespace std;

class Login {
private:
    Connection* conn;
public:
    Login(Connection* _conn) : conn(_conn) {
        if (!conn) {
            cerr << "Error : Connection pointer is null" << endl;
        }
    }
    ~Login() {}

    void Login_find() {
        try {
            string input_user_id;
            cout << "��ȸ�� user_id�� �Է��ϼ���: ";
            cin >> input_user_id;  // ����� �Է� �ޱ�

            string query = R"(SELECT user_id, login_id, login_pw, user_name, user_addr, user_phone, user_status, user_email, user_birthdate FROM User WHERE user_id = ?)";
            unique_ptr<PreparedStatement> pstmt(conn->prepareStatement(query));
            pstmt->setString(1, input_user_id);  // ����� �Է°� ���ε�

            unique_ptr<ResultSet> res(pstmt->executeQuery());

            SetConsoleOutputCP(CP_UTF8); // �ѱ� ��� ����

            if (res->next()) {  // ����� �����ϸ� ���
                string user_id = res->getString("user_id");
                string login_id = res->getString("login_id");
                string login_pw = res->getString("login_pw");
                string user_name = res->getString("user_name");
                string user_addr = res->getString("user_addr");
                string user_phone = res->getString("user_phone");
                int user_status = res->getInt("user_status");
                string user_email = res->getString("user_email");
                string user_birthdate = res->getString("user_birthdate");

                cout << u8"User_Info: "
                    << " | user_id: " << user_id
                    << " | login_id: " << login_id
                    << " | login_pw: " << login_pw
                    << " | user_name: " << user_name
                    << " | user_addr: " << user_addr
                    << " | user_phone: " << user_phone
                    << " | user_status: " << user_status
                    << " | user_email: " << user_email
                    << " | user_birthdate: " << user_birthdate
                    << endl;
            }
            else {
                cout << "����ڸ� ã�� �� �����ϴ�." << endl;
            }
        }
        catch (SQLException& e) {
            cerr << "SQL Error: " << e.what() << endl;
        }
    }
};
