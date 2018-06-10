/*#include<iostream>
using namespace std;

class ComplexNumber
{
private:
    int a;
    int b;
public:
    ComplexNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    static ComplexNumber add(ComplexNumber s, ComplexNumber x)
    {
        return ComplexNumber(s.a+x.a, s.b+x.b);
    }
    static ComplexNumber sub(ComplexNumber s, ComplexNumber x)
    {
        return ComplexNumber(s.a-x.a, s.b-x.b);
    }
    static ComplexNumber mul(ComplexNumber s, ComplexNumber x)
    {
        return ComplexNumber(s.a*x.a-s.b*x.b, s.b*x.a+s.b*s.a);
    }
    void toString()//���
    {
        if(b>0){
        cout << a << "+" << b << "i"<<endl;
    }
    else if(b<0){
        cout<<a << b<<"i"<<endl;
    }
    else if(b == 0){
        cout << a<<endl;
    }
    }
};
int main()
{
    int ar, ai, br, bi;
    cin >> ar >> ai >> br >> bi;
    ComplexNumber x1 = ComplexNumber(ar, ai);
    ComplexNumber x2 = ComplexNumber(br, bi);
    ComplexNumber x3 = ComplexNumber::add(x1, x2);
    ComplexNumber x4 = ComplexNumber::sub(x1, x2);
    ComplexNumber x5 = ComplexNumber::mul(x1, x2);
    ComplexNumber c1 = ComplexNumber:: add(x1, x3);
    ComplexNumber c2 = ComplexNumber::sub(c1, x1);
    ComplexNumber c3 = ComplexNumber::mul(x1, c2);
    cout << "a + b = " ;
    x3.toString();
    cout << "a - b = ";
    x4.toString();
    cout << "a * b = ";
    x5.toString();
    cout << "After c.add(a), c = ";
    c1.toString();
    cout << "After c.substract(a), c = ";
    c2.toString();
    cout << "After c.multiply(a), c = ";
    c3.toString();
}
*/
/*
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Patient
{
private:
    string name;
    char sex;
    int age;
    float weight;
    bool allergies;
public:
    Patient(){}
    Patient(string n, char s, int a, float w, bool all)
    {
        name = n;
        sex = s;
        age = a;
        weight = w;
        allergies = all;
    }
     void setName( string n)
    {
        name = n;
    }
    void setSex(char s)
    {
        sex = s;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setWeight(float w)
    {
        weight = w;
    }
    void setAllergies(bool A)
    {
        allergies = A;
    }
    string getName()
    {
        return name;
    }
    char getSex()
    {
        return sex;
    }
    int getAge()
    {
        return age;
    }
    float getWeight()
    {
        return weight;
    }
    bool getAllergies()
    {
        return allergies;
    }
    void print()
    {
        cout << "����" << name << "���������£�" <<endl<< "������"<<name<<endl;
        if(sex == 'f'){
            cout<< "�Ա�:" <<"Ů"<<endl;
        }
        else if(sex == 'm'){
            cout << "�Ա�" << "��"<<endl;
        }
        cout<<"���䣺"<<age<<endl;
        cout<<"����:"<<fixed<<setprecision(2)<<weight<<endl;
        if(allergies){
            cout<< "�Ƿ��������"<<endl;
        }
        else{
            cout<< "�Ƿ��������"<<endl;
        }
    }
};
int main()
{
    int a1, a2;
    cin >> a1 >> a2 ;
    Patient april;
    april.setName("ZhangLi");
    april.setSex('f');
    april.setAge(a1);
    april.setWeight(154.72);
    april.setAllergies(true);
    cout << "Name:" << april.getName() <<endl;
    cout << "Sex:" << april.getSex() <<endl;
    cout << "Age:" << april.getAge() <<endl;
    cout << "Weight:" <<fixed<<setprecision(2)<<april.getWeight() <<endl;
    if(april.getAllergies()){
            cout << "Allergies:" << "true"<<endl;
    }
    else
        cout << "Allergies:" <<"false" <<endl;

    Patient liu("Liu Wu", 'm', a2, 135, false);
    liu.print();
    Patient zhang("Zhang san", 'f', 45, 157.567, true);
    zhang.print();
}
*/
/*ע�⿴
#include<iostream>
using namespace std;

class ComplexNumber
{
public:
    ComplexNumber(int x, int y){
        a = x;
        b = y;}
static ComplexNumber add(ComplexNumber s, ComplexNumber x){
    return ComplexNumber(s.a+x.a, s.b+x.b);
}
static ComplexNumber sub(ComplexNumber s, ComplexNumber x)
{
    return ComplexNumber(s.a-x.a, s.b-x.b);
}
static ComplexNumber mul(ComplexNumber s, ComplexNumber x)
{
    return ComplexNumber(s.a*x.a-s.b*x.b, s.b*x.a+s.a*x.b);
}
void toString(){
    if(b>0){
        cout << a << "+" << b << "i"<<endl;
    }
    else if(b<0){
        cout<<a << b<<"i"<<endl;
    }
    else if(b == 0){
        cout << a<<endl;
    }

}
private:
    int a;
    int b;

};
int main()
{
    int ar, ai, br, bi;
    cin >> ar >> ai >> br >> bi;
    ComplexNumber x1 = ComplexNumber(ar, ai);
    ComplexNumber x2 = ComplexNumber(br, bi);
    ComplexNumber x3 = ComplexNumber::add(x1, x2);
    ComplexNumber x4 = ComplexNumber::sub(x1, x2);
    ComplexNumber x5 = ComplexNumber::mul(x1, x2);
    ComplexNumber c1 = ComplexNumber:: add(x1, x3);
    ComplexNumber c2 = ComplexNumber::sub(c1, x1);
    ComplexNumber c3 = ComplexNumber::mul(x1, c2);
    cout << "a + b = " ;
    x3.toString();
    cout << "a - b = ";
    x4.toString();
    cout << "a * b = ";
    x5.toString();
    cout << "After c.add(a), c = ";
    c1.toString();
    cout << "After c.substract(a), c = ";
    c2.toString();
    cout << "After c.multiply(a), c = ";
    c3.toString();
}
*/
/*����
���췽��
#include <iostream>
using namespace std;
class A{
public:
    A(){}
    int i;
    A(int x){
        i=x;
        cout<<"A�޲�Ĭ�Ϲ��췽����i = "<<i<<endl;
    }
    int getI(){
        return i;
    }
};
class B{
public:
    B():a(0){
        cout<<"B�޲�Ĭ�Ϲ��췽��"<<endl;
    }
    B(int i):a(i){
        cout<<"B��Ĭ�Ϲ��췽��"<<endl;
    }
    A a;
    int getI(){
        return a.getI();
    }
};

int main(){
    int a;
    cin>>a;
    B b1,b2(a);
    cout<<"b1��i��ֵΪ"<<b1.getI()<<endl;
    cout<<"b2��i��ֵΪ"<<b2.getI()<<endl;
}
*//*
//����
#include <iostream>
using namespace std;

class Base{
public:
    int i;
    void setValue(int i){
        this->i=i;
        cout<<"In setValue(int i), i = "<<this->i<<endl;
    }
    void setValue(float f){
        this->i=(int)f;
        cout<<"In setValue(float f), i = "<<this->i<<endl;
    }
    void setValue(double d){
        this->i=(double)d;
        cout<<"In setValue(double d), i = " <<this->i<<endl;
    }
    Base(){}
};
class Sub:public Base{
public:
    Sub(){}
    using Base::setValue;
    void setValue(short b){
        i=b;
        cout<<"In setValue(byte b), i = "<<i<<endl;
    }
};

int main(){
    short n;
    cin>>n;
    Sub s;
    int a=2;
    s.setValue(a);
    float b=3.5;
    s.setValue(b);
    double c=7.8;
    s.setValue(c);
    s.setValue(n);
}
*/
//����
/*
#include <iostream>

using namespace std;

class Rectangle{
protected:
    int r_long,r_width;
public:
    Rectangle(){
        r_long = 10;
        r_width = 10;
    }
    Rectangle(int _long,int width){
        r_long = _long;
        r_width = width;
    }
    int comp_area(){
        return r_long*r_width;
    }

    int comp_perimeter(){
        return 2*(r_long+r_width);
    }

    int get_long(){
        return r_long;
    }

    int get_width(){
        return r_width;
    }
};

int main(){
    int a,b;
    cin>>a>>b;
    Rectangle rect1,rect2(a,b);
    cout <<"("<<rect1.get_long()<<","<<rect1.get_width()<<")"<<endl;
    cout <<"("<<rect2.get_long()<<","<<rect2.get_width()<<")"<<endl;
    cout<<rect2.comp_area()<<endl;
    cout<<rect2.comp_perimeter()<<endl;
    return 0;
}*/
/*
#include<iostream>

using namespace std;

class Test{
protected:
    int x,y;
public:
    Test(int a=0,int b=0){
        x = a;
        y = b;
    }
    ~Test(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Test t1;
    Test *t2;
    int a,b;
    for(int i=0;i<2;i++){
        cin>>a>>b;
        t2 = new Test(a,b);
        delete t2;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;

class Animal{
protected:
    string name;
    string kind;
public:
    Animal(string a,string b){
        name=a;
        kind=b;
    }
    ~Animal(){
        cout<<name<<" "<<kind<<endl;
    }
    virtual void Laugh()=0;
    void DoLaugh(){
        Laugh();
    }
};

class Mouse:public Animal{
public:
    Mouse(string name):Animal(name,"����"){}
    void Laugh(){
        cout << "֨֨......" << endl;
    }
};

int main(){
    string name;
    cin>>name;
    Mouse mm(name);
    cout << "�ҳɹ�������һֻ����" << endl;
    mm.DoLaugh();
    return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
class circle
{
   private:
      double radius;
   public:
      void set_radius(double r)
      {
         radius = r;
      }
      double comp_area()
      {
         return 3.14 * radius * radius;
      }
};
int main()
{
   circle c1;
   double x, a;

   cout << "�������Ѿ�������һ��Circle����,��������ö�������ݳ�Ա�뾶radius��ֵ:" << endl;
   cin >> x;
   c1.set_radius(x);

   a = c1.comp_area();
   cout << "��Circle��������Ϊ:" << setiosflags(ios::fixed) << setprecision(2) << a << endl; //���Ҫ��С�������뱣��2λ��Ч���֣��������룩�����㲹��
   return 0;
}
*/
/*
#include<iostream>
using namespace std;

class Point //����Point
{
   protected:
      int x; //x����
      int y; //y����
   public:
      void Set(int x1, int y1) //�������꺯��
      {
         // cout<<x1<<":"<<y1<<endl;
         x = x1;
         y = y1;
      }
      void Display() const //������꺯��
      {
         cout << "(" << x << ", " << y <<", ";
      }
      void Move(int deltax, int deltay) //�ƶ����꺯��
      {
         x += deltax;
         y += deltay;
      }
};
class Point3D : public Point //������Point3D�����м̳з�ʽ
{
   protected:
      int x; //x����
      int y; //y����
      int z; //z����
   public:
      void Set(int x1, int y1, int z1)//�������꺯���ض��壬ͨ�����û���Set()�����ȷ��������������ֱ𴫸���Ӧ���ݳ�Ա
      {
         Point::Set(x1, y1);
         z = z1;
      }
      void Display() const //������꺯���ض���
      {

         Point::Display();
         cout<< z << ")" << endl;
      }
      void Move(int deltax, int deltay, int deltaz) //�ƶ����꺯���ض���
      {
         Point::Move(deltax, deltay);
         z += deltaz;
      }
};
int main()
{
   Point3D p1;	//����������Ķ���p1
   int x, y, z;
   cin >> x >> y >> z;
   p1.Set(x, y,z); //����Set()������p1�����x��y��z���ݳ�Ա��ֵ

   p1.Display();

   int a, b, c;
   cin >> a >> b >> c;
   p1.Move(a, b, c);
   p1.Display();
   return 0;
}
*/
/*
#include<iostream>
using namespace std;

class A{
    public:
    virtual void F() const=0;
};

class B:public A{
public:
    void F() const{
        cout<<"B::F"<<endl;
    }
};

int main()
{
   #define N 3
    B b3;
   A *a[N] = {new B(), new B(), &b3};

   for(int i = 0; i < N; i++)
   a[i]->F();

   delete a[0];
   delete a[1];
   return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;

class Student{
protected:
    string name;
    int age;
    string number;
public:
    void Set(string na,int a,string nu){
        name=na;
        age=a;
        number=nu;
    }
    void Set( Student &s){
        Set(s.name,s.age,s.number);
    }
    void Show(){
        cout << "������" <<  name << endl;
        cout  << "���䣺" <<age << endl;
         cout   <<  "ѧ�ţ�" << number << endl;
    }
};

int main()
{
   Student stu, stucopy; //������������
   int age;
   string name, no;
   cin >> name >> age >> no;
   stu.Set(name, age, no); //����ǡ���ĳ�Ա����
   stucopy.Set(stu); //����ǡ���ĳ�Ա����
   stucopy.Show(); //����ǡ���ĳ�Ա����
   return 0;
}
*/
/*
#include<iostream>
using namespace std;

class Point3D{
private:
    int X,Y,Z;
public:
    Point3D(){
        X=Y=Z=0;
    }
    Point3D(int x,int y,int z){
        X=x;
        Y=y;
        Z=z;
    }
    void setXYZ(int x,int y,int z){
         X=x;
        Y=y;
        Z=z;
    }
    void displayXYZ(){
        cout<<X<<" "<<Y<<" "<<Z<<endl;
    }
    void move(int x,int y,int z){
        X+=x;
        Y+=y;
        Z+=z;
    }
};

int main()
{
   int a, b, c, d, e, f;
   cin >> a >> b >> c >> d >> e >> f;
   Point3D p1, p2(a, b, c);

   p1.displayXYZ();
   p2.displayXYZ();

   p2.setXYZ(d, e, f);
   p2.displayXYZ();

   cin >> a >> b >> c;
   p2.move(a, b, c);
   p2.displayXYZ();
   return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Point
{
   public:
      void setxy(int x, int y)
      {
         X = x;
         Y = y;
      }
      void displayxy()
      {
         cout << X << "," << Y;
      }
   private:
      int X, Y;
};

class Point3D:public Point{
protected:
    int Z;
public:
    void display(){
        Point::displayxy();
        cout<<","<<Z<<endl;
    }
    void setxyz(int x,int y,int z){
        Point::setxy(x,y);
        Z=z;
    }
};


int main()
{
   Point3D p;
   int a, b, c;
   cin >> a >> b >> c;
   p.setxyz(a, b, c);
   p.display();
   return 0;
}
*/
/*
#include<iostream>
using namespace std;

class Image{
protected:
    int width,height;
public:
    Image(int w=0,int h=0){
        width=w;
        height=h;
    }
    virtual ~Image(){};
    int GetWidth(){
        return width;
    }
    int GetHeight(){
        return height;
    }
};

class Png:public Image{
protected:
    char *pngdib;
public:
    Png(int w,int h):Image(w,h){
        pngdib=new char[4*Image::GetWidth()*Image::GetHeight()];
    }
    ~Png(){
        delete pngdib;
    }
};

int main()
{
   int a, b;
   cin >> a >> b;
   Image *png = new Png(a, b);	//����Pngͼ����Ķ���png
   cout << "ͼ���" << png->GetWidth() << endl;
   cout << "ͼ��ߣ�" << png->GetHeight() << endl;
   delete png;
   return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
class CWnd
{
   protected:
      int width;
      int height;
   public:
      CWnd()
      {
         width = height = 0;
      }
      CWnd(int a, int b)
      {
         width = a;
         height = b;
      }
      void setHeight(int s)
      {
         height = s;
      }
      void setWidth(int s)
      {
         width = s;
      }
      int getHeight()
      {
         return height;
      }
      int getWidth()
      {
         return width;
      }
};
class CEdit:public CWnd{
protected:
    string text;
public:
    CEdit(){
        text = "";
    }
    CEdit(int a, int b, string c):CWnd(a,b){
        text = c;
    }
    void setText(string a){
        text = a;
    }
    string getText() const{
        return text;
    }
};
int main()
{
   int a, b;
   string c;
   cin >> a >> b >> c;
   CEdit d(a, b, c);
   cout << d.getWidth() << endl;
   cout << d.getHeight() << endl;
   cout << d.getText() << endl;
   return 0;
}
*/
#include <stdio.h>
int ok(long x){
    long i;
    for (i=2;i<x;i++)
        if (x%i==0)
            return 0;
        return 1;
    }
int main()
{
    long i,n;
    int c=0;
    scanf("%ld",&n);
    for (i=2;i<n;i++)
    {
    if (ok(i)) {
        printf("%ld ",i);
        c++;
        if(c%5 == 0)
            printf("\n");
        else
            continue;
    }

    }
}

#include<stdio.h>
void main() /*������ʼ*/
{
int aa,bb,a,b,c,t;
printf("������Ҫ�����Լ������С������������������\n");
scanf("%d %d",&a,&b);
aa=a;
bb=b;
if(a<b)
{
t=a;
a=b;
b=t;
}
c=a%b;
while(c!=0)
{
a=b;
b=c;
c=a%b;
}
printf("�������������Լ��Ϊ��%d\n",b);
printf("������������С������Ϊ��%d\n",aa*bb/b);
}
