
#include<iostream>

using namespace  std ;

int main ()
{
  int time;
  float salary,bonus;
cout<<"Enter your salary"<<endl;
cin>>salary;
cout<<"time of service"<<endl;
cin>>time;

if(time>10)
{
cout<<"bonus=0.1*salary"<<endl;
}
else if(time<=10&time>=6)
{
cout<<"bonus= 0.08*salary"<<endl;
}
else (time<6)
{
cout<<"bonus=0.05*salary"<<endl;
}
return 0
}    