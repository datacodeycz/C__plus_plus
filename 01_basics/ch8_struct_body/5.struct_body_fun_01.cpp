# include<iostream>
using namespace std;

/*
总结：如果不想修改主函数中的数据，用值传递，反之用地址传递


 */
struct student
{
  //成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

// 值传递
void printStudent(student stu)
{
  stu.age = 28;
  cout << "子函数中 姓名：" 
  << stu.name << " 年龄： " 
  << stu.age  << " 分数：" 
  << stu.score << endl;
}

// 地址传递
void printStudent2(student *stu)
{
	stu->age = 28;
	cout << "子函数中 姓名：" 
  << stu->name << " 年龄： " 
  << stu->age  << " 分数：" 
  << stu->score << endl;
}

int main()
{
  student stu = {"zhangsan", 18, 100};
  printStudent(stu);

  cout << "主函数中 姓名：" 
  << stu.name << " 年龄： " 
  << stu.age << " 分数：" 
  << stu.score << endl;

  printStudent2(&stu);

  cout << "主函数中 姓名：" 
  << stu.name << " 年龄： " 
  << stu.age << " 分数：" 
  << stu.score << endl;

  return 0;   
}