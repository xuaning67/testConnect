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
    cout << "������\n" ;
    int aa, bb;
    cin >> aa >> bb;
    add m(aa,bb);
    sub n(aa,bb);
    cout << "�����������";
    m.Print();
    cout << "����֮��" << addend(m) << endl;
    cout << "���������" ;
    n.Printadd(m);
    cout <<  "����֮��" << subend(n) << endl;
}
