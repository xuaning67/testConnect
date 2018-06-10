
#include<iostream>
using namespace std;

class Time
{
public:
    Time(int h, int  m, int s):hour(h), minute(m), second(s){}
                    //用参数初始化表对数据成员初始化
    void get_time();  //声明公有成员函数
    int sum();
    int hour;
    int minute;
    int second;

};

int Time::sum()
{
    return (this->hour + this->minute + this->second); //this 指针
}

void Time::get_time()//定义
{
    cout << hour <<':'<< minute << ':' << second <<endl;
}
void fun (Time &t)
{
    t.minute  = 23;
}

int main()
{
    Time t1(10, 13, 56);    //定义Time类对象t1
    int *p1 = &t1.hour;     //定义指向整数型的指针变量p1,并使p1指向t1.hour
    cout << *p1 << endl;    //输出p1所指向的数据成员t1.hour
    t1.get_time();
    cout << "三个数总和" << ':' << t1.sum() <<endl;
    fun(t1);                //实参是Time类对象，可以通过引用来修改实参t1的值
    cout << "以下将分钟数由13改为23"<<endl;

    t1.get_time();          //调用对象t1的成员函数get_time
    Time *p2 = &t1;         //定义指向Time类对象的指针变量p2，并使p2指向p1
    p2 -> get_time();       //调用p2所指向对象（即p1）的get_time函数
    void (Time:: *p3)() = &Time::get_time;
     //定义指向Time类公用成员函数的指针变量p3
                            //使p3指向Time类公用成员函数get_time
    (t1.*p3)();             //调用对象t1中p3所指向的成员函数（即t1.get_time）
    cout << "三个数新总和" << ':' << t1.sum() <<endl;
    Time t2(1, 2, 3);
    const Time *p = &t2;
    t2.hour = 11;
    cout << "另一个时间" <<endl;
    t2.get_time();
}
