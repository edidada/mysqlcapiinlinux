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
    db.initDB("60.205.225.118","root","5Edidada","mysql_c_test");
    //将用户信息添加到数据库
    db.exeSQL("INSERT account values('abc','123');");
    db.exeSQL("INSERT account values('ddd','456');");
    //将所有用户信息读出，并输出。
    db.exeSQL("SELECT * from account;");

    return 0;
}
