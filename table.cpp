#include<iostream>
#include<conio.h>
using namespace std;
int main(){
  int count,tab;  
  cout<<"Enter an integer value for table";
  cin>>count;
    for(int n=1;n<=10;n++)
    {
            tab=count*n;
            
                      cout<< count<<"*"<<n<<"="<<tab<<endl;
                      }
            getch();
}
