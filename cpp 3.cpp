//program for grading marks
#include<iostream>
using namespace std;

int main(){
 int math ,eng,french,sci,CRE;
 int avg;
cout<<"enter marks for 5 units"<<endl;
cin>>math>>eng>>french>>sci>>CRE;
avg=(math +eng+french+sci+CRE)/5;

if (avg>=70&avg<=100)
{
cout<<"grade A";
}
else if (avg>=60&avg<70)
{
cout<<"grade B";
}
else if (avg>=50&avg<60)
{
cout<<"grade c";
}
else if (avg>=40&avg<50)
{
cout<<"grade D";
}
else (avg<40)
{
cout<<"fail";
}

return 0
}