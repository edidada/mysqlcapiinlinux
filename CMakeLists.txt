cmake_minimum_required(VERSION 3.8)

project(mysqlcapiinlinux)
include_directories(/usr/include/mysql)
link_directories(/usr/lib/x86_64-linux-gnu/)
#link_directories("/usr/lib/x86_64-linux-gnu/libmysqlclient.so")
add_executable(mysqlcapiinlinux src/MyDB.cpp src/test.cpp)
target_link_libraries(mysqlcapiinlinux mysqlclient)