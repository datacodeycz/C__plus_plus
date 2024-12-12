# include"iostream"

using namespace std;


/*

C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置

 */

// 函数的占位参数，占位参数也可以有默认参数
void func(int a, int)
{
    cout << "this is func" << endl;
}

int main()
{
    func(10, 10); //占位参数必须填补
    return 0;
}