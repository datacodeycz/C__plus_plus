# include"iostream"

using namespace std;


/*

c++中的引用
作用：给变量起别名
语法格式为：数据类型 &别名  = 原名

*/

int main()
{
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    return 0;
}


/*
引用必须初始化
引用在初始化后，不可以改变

说人话：别名那个变量在创建的时候就必须指向一个变量，并且不可再改变

*/