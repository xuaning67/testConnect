#include<iostream>
#include<math.h>
using namespace std;
class add{
    friend class sub;
public :
    add(int i, int j){
        a = i;
        b = j;
    }
    void Print(){
        cout<<'('<<a<<','<<b<<')'<<endl;
    }
friend int addend(add x);
private:
    int a; int b;

};
class sub{
public:
    sub(int i, int j){
        a = i;
        b = j;
    }
    void Print(){
        cout<<'('<<a<<','<<b<<')'<<endl;
    }

    void Printadd(add &x){
        cout << "(" << x.a << ',' << x.b << ')'<<endl;
    }
    friend int subend(sub y);
private:
    int a, b;

};
int addend(add x){
    return x.a + x.b;
}
int subend(sub y){
    return y.a - y.b;
}
int main()
{
    cout << "输俩数\n" ;
    int aa, bb;
    cin >> aa >> bb;
    add m(aa,bb);
    sub n(aa,bb);
    cout << "输出这两个数";
    m.Print();
    cout << "两数之和" << addend(m) << endl;
    cout << "再输出两数" ;
    n.Printadd(m);
    cout <<  "两数之差" << subend(n) << endl;
}
