#include <iostream>
#include <mysql/jdbc.h>

using namespace std;
using namespace sql;

int main() {
    Connection *con = get_driver_instance()->connect("tcp://localhost:3306", "user", "password");
    cout << "Connected to MySQL database successfully!" << endl;
    delete con;
    return 0;
}