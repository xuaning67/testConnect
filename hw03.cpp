
#include<iostream>
using namespace std;

class Time
{
public:
    Time(int h, int  m, int s):hour(h), minute(m), second(s){}
                    //�ò�����ʼ��������ݳ�Ա��ʼ��
    void get_time();  //�������г�Ա����
    int sum();
    int hour;
    int minute;
    int second;

};

int Time::sum()
{
    return (this->hour + this->minute + this->second); //this ָ��
}

void Time::get_time()//����
{
    cout << hour <<':'<< minute << ':' << second <<endl;
}
void fun (Time &t)
{
    t.minute  = 23;
}

int main()
{
    Time t1(10, 13, 56);    //����Time�����t1
    int *p1 = &t1.hour;     //����ָ�������͵�ָ�����p1,��ʹp1ָ��t1.hour
    cout << *p1 << endl;    //���p1��ָ������ݳ�Աt1.hour
    t1.get_time();
    cout << "�������ܺ�" << ':' << t1.sum() <<endl;
    fun(t1);                //ʵ����Time����󣬿���ͨ���������޸�ʵ��t1��ֵ
    cout << "���½���������13��Ϊ23"<<endl;

    t1.get_time();          //���ö���t1�ĳ�Ա����get_time
    Time *p2 = &t1;         //����ָ��Time������ָ�����p2����ʹp2ָ��p1
    p2 -> get_time();       //����p2��ָ����󣨼�p1����get_time����
    void (Time:: *p3)() = &Time::get_time;
     //����ָ��Time�๫�ó�Ա������ָ�����p3
                            //ʹp3ָ��Time�๫�ó�Ա����get_time
    (t1.*p3)();             //���ö���t1��p3��ָ��ĳ�Ա��������t1.get_time��
    cout << "���������ܺ�" << ':' << t1.sum() <<endl;
    Time t2(1, 2, 3);
    const Time *p = &t2;
    t2.hour = 11;
    cout << "��һ��ʱ��" <<endl;
    t2.get_time();
}
