# include"iostream"

using namespace std;


int main()
{
    int a = 10;
    int b = 20;
    // int &c; // 错误，引用必须初始化
    int &c = a;
    c = b; // 这个操作是赋值操作，将c指向的变量的值赋值为b的值

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}