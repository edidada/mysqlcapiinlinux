/*************************************************************************
    > File Name: test.cpp
    > Author:fengxin
    > Mail:903087053@qq.com
    > Created Time: 2017年07月21日 星期五 16时43分55秒
 ************************************************************************/

#include<iostream>
#include"MyDB.h"
using namespace std;


int main()
{
    MyDB db;
    //连接数据库
    db.initDB("127.0.0.1","travis","","mysql_c_test");
    //将用户信息添加到数据库
    db.exeSQL("INSERT account values('abc test','123');");
//    db.exeSQL("INSERT account values('abc测试','123');");
    db.exeSQL("INSERT account values('ddd','456');");
    //将所有用户信息读出，并输出。
    db.exeSQL("SELECT * from account;");

    MyDB db2;
    //连接数据库
    db2.initDB("127.0.0.1","travis","","odb_test");
    //将用户信息添加到数据库
    db2.exeSQL("INSERT person(email,first,middle,last,age) values('abcd test','Tom','Y','DDD',19);");
//    db2.exeSQL("INSERT person(email,first,middle,last,age) values('abcd测试','Tom','Y','DDD',19);");
//    db2.exeSQL("INSERT account values('ddd','456');");
    //将所有用户信息读出，并输出。
    db2.exeSQL("SELECT * from person;");
    return 0;
}
