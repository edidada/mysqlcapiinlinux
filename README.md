# mysql in linux

- OS:ubuntu
- IDE:eclipse Clion

[Install Linux c api for mysql](https://dev.mysql.com/doc/refman/5.7/en/c-api-building-clients.html)

[Linux下C语言连接MySQL](https://blog.csdn.net/neo_2011/article/details/6805489)

https://unix.stackexchange.com/questions/17907/why-cant-gcc-find-libevent-when-building-tmux-from-source

https://blog.csdn.net/haluoluo211/article/details/54376947

http://blog.51cto.com/eminzhang/1285705

https://blog.csdn.net/rain_qingtian/article/details/16860945

不能insert汉字 编码调整为utf8

```shell

show create table account;

alter table account change name name varchar(250) character set uf8;

```

插入，删除数据库


https://www.cnblogs.com/binbinjx/p/5626916.html
