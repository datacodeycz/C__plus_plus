# include"iostream"


using namespace std;


// int a = 10;
/*

栈区：
​由编译器自动分配释放, 存放函数的参数值,局部变量等
​注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放


 */
int *func()
{
    int a = 10;
    return &a;
}


int main()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;

    return 0;
}