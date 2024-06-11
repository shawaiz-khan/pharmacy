#include <iostream>
#include "C:/MySQL Connector C++ 8.4/include/mysql/jdbc.h"

using namespace std;
using namespace sql;

int main() {
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "user", "password");

    delete con;
    return 0;
}