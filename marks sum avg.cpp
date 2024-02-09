#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    cout<<"Program to find Sum and Percentage of Your 6 subject Marks out of 100:"<<endl;
int arr[6],i;
float sum=0.0;
float avg=0.0;
 for(i=1;i<=6;i++)
                {
                 cout<<"Enter your subject Marks:";
                 cin>>arr[i];
                 sum=sum+arr[i];
                 }
                 avg=100*sum/600;
                 cout<<"sum of your marks is:"<<sum<<endl;
                 cout<<"percentage of your marks is%:"<<avg;
                 getch();
}
