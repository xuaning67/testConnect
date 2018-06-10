#include<iomanip>
#include<iostream>
using namespace std;

class Patient
{
public:
    Patient(){}
     Patient(char *n, char s,int a,float w,bool A)
    {
        name = n;
        sex = s;
        age = a;
        weight = w;
        allergies = A;
    }

    void setName(char *n)
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
    char* getName()
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
        cout << "病人" << name << "的属性如下：" <<endl<< "姓名："<<name<<endl;
        if(sex == 'f'){
            cout<< "性别:" <<"女"<<endl;
        }
        else if(sex == 'm'){
            cout << "性别：" << "男"<<endl;
        }
        cout<<"年龄："<<age<<endl;
        cout<<"体重:"<<fixed<<setprecision(2)<<weight<<endl;
        if(allergies){
            cout<< "是否过敏：是"<<endl;
        }
        else{
            cout<< "是否过敏：不"<<endl;
        }
    }
private:
    char* name;
    char sex;
    int age;
    float weight;
    bool allergies;
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
