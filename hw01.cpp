#include<iostream>
using namespace std;
const float PI = 3.1415926;
const float Fprice = 35; // 栅栏价格
const float Cprice = 20;
class Circle
{
private:
    float radius;

public:
    Circle(float r); // 构造函数
    float Circumference() const; // 圆周长
    float Area() const;//圆面积
};
//类的实现
//构造函数初始化数据成员radius
Circle::Circle(float r):radius(r)
{
}//改动。参数初始化表
//计算圆周长

float Circle::Circumference() const
{
    return 2 * PI * radius;
}
float Circle::Area() const
{
    return PI * radius * radius;
}
int main()
{
    float radius;
    float FenceCost, ConcreteCost;
    cout << "输入水池半径"  << endl;
    cin >> radius;
    Circle Pool(radius);
    Circle PoolRim(radius + 3);
    FenceCost = PoolRim.Circumference() * Fprice;
    cout << "栅栏造价" << FenceCost << endl;
    ConcreteCost = (PoolRim.Area() - Pool.Area()) * Cprice;
    cout << "过道造价" << ConcreteCost << endl;
    return 0;
}

#include<iostream>
using namespace std;
class Date
{
public:
    void setdate()
    {
        cin >> year;
        cin >> month;
        cin >> day;
    }
    void SetDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    int IsLeapYear()
    {
        return year%4 == 0 && year%100 != 0 || year%400 == 0;
    }
    void Print()
    {
        cout << year << '/' << month << '/' << day << endl;
    }
public://之前是private
    int year, month, day;
};
int main()
{
    Date d1, *pd = &d1;
    cout << "请输入年月日：" << endl;
    d1.setdate();
    pd -> Print();
    if(d1.IsLeapYear() == 0)
        cout << d1.year << "不是闰年" << endl;
    else
        cout << d1.year << "是闰年" << endl;
    return 0;
}
#include<iostream>
using namespace std;
class M
{
public:
    M(int i, int j, int k)
    {
        a = i;b = j, c = k;
    }
    int fun1(){return a;}
    int fun2(){return b;}
    int fun5(){return c;}
    int fun3();int fun4();
private:
    int a, b, c;
};
inline int M::fun3()
{
    return fun1() + fun2() + fun5();
}
inline int M::fun4()
{
    return fun3();
}

int main()
{
    cout << "输入将要计算的三个数" <<endl;
    int p, q, o;
    cin >> p >> q >>o;
    M m(p, q, o);
    int n = m.fun4();
    cout << "结果是" << n <<endl;
}
