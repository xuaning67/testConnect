#include<stdio.h>
int main() /*������ʼ*/
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
