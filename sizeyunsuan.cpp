#include "stdafx.h"

#include "iostream.h"

#include "stdlib.h"

#include "time.h"

int main(int argc, char* argv[])

{

　　int a,b,c,n=1;　　　　　　　　　　 //a表示运算符号，b c是两个数，n表示出题数目

　　srand((unsigned)time(NULL));　　//srand()函数产生一个以当前时间开始的随机种子

　　cout<<"请输入出题数目：";

　　cin>>n;

　　for(int i=1;i<=n;i++)

　　{

　　　　a=rand()%4;

　　　　b=rand()%100;    //b c是两个随机的100以内的整数

　　　　c=rand()%100;

　　　　cout<<"("<<i<<")"<<b;

　　　　switch(a)

　　　　{

　　　　　　case 1:cout<<"+"<<c<<"=\t\t";break;

　　　　　　case 2:cout<<"-"<<c<<"=\t\t";break;

　　　　　　case 3:cout<<"*"<<c<<"=\t\t";break;

　　　　　　case 0:if(c==0) {i--;break;}

　　　　　　　　　　cout<<"/"<<c<<"=\t\t";break;

　　　　　　default:cout<<"+"<<c<<"=\t\t";break;

　　　　}

　　　　if(i%3==0)

　　　　　　 cout<<endl;

　　}

　　cout<<endl;

　　return 0;

}