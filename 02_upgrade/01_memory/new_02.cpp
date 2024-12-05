# include"iostream"

using namespace std;

// 堆区开辟数组 



int main()
{
    // 存储10个int类型的元素
    int *arr = new int[10];

    for (int i = 0; i < 1; i++)
    {
        arr[i] = i + 100;

    }
    // 打印输出
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    // 释放数组delete 后加[]
    delete[] arr;
    return 0;
}