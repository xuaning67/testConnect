#include<iostream>
using namespace std;
const float PI = 3.1415926;
const float Fprice = 35; // դ���۸�
const float Cprice = 20;
class Circle
{
private:
    float radius;

public:
    Circle(float r); // ���캯��
    float Circumference() const; // Բ�ܳ�
    float Area() const;//Բ���
};
//���ʵ��
//���캯����ʼ�����ݳ�Աradius
Circle::Circle(float r):radius(r)
{
}//�Ķ���������ʼ����
//����Բ�ܳ�

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
    cout << "����ˮ�ذ뾶"  << endl;
    cin >> radius;
    Circle Pool(radius);
    Circle PoolRim(radius + 3);
    FenceCost = PoolRim.Circumference() * Fprice;
    cout << "դ�����" << FenceCost << endl;
    ConcreteCost = (PoolRim.Area() - Pool.Area()) * Cprice;
    cout << "�������" << ConcreteCost << endl;
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
public://֮ǰ��private
    int year, month, day;
};
int main()
{
    Date d1, *pd = &d1;
    cout << "�����������գ�" << endl;
    d1.setdate();
    pd -> Print();
    if(d1.IsLeapYear() == 0)
        cout << d1.year << "��������" << endl;
    else
        cout << d1.year << "������" << endl;
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
    cout << "���뽫Ҫ�����������" <<endl;
    int p, q, o;
    cin >> p >> q >>o;
    M m(p, q, o);
    int n = m.fun4();
    cout << "�����" << n <<endl;
}
