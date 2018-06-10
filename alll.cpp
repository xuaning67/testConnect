#include<stdio.h>
int main() /*主程序开始*/
{
int aa,bb,a,b,c,t;
printf("请输入要求最大公约数和最小公倍数的两个整数：\n");
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
printf("这两个数的最大公约数为：%d\n",b);
printf("这两个数的最小公倍数为：%d\n",aa*bb/b);
}
