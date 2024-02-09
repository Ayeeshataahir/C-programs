#include<iostream.>
#include<conio.h>
using namespace std;
int main(){
int arr[5],i,j,min,temp;
for(i=0;i<5;i++)
{
                cout<<"Enter value:";
                cin>>arr[i];
                }
                cout<<"The original vlues in Array:"<<endl;
                for(i=0;i<5;i++)
                cout<<arr[i];
                
                for(i=0;i<4;i++)
                {
                                min=i;
                                for(j=i+1;j<5;j++)
                                if(arr[j]<arr[min])
                                min=j;
                                if(min!=j)
                                {
                                         temp=arr[i]; 
                                         arr[i]=arr[min];
                                         arr[min]=temp;
                                          }
                                          
                                cout<<endl;
                                }
                                cout<<"the sorted array:"<<endl;
                                for(i=0;i<5;i++)
                                cout<<arr[i];
getch();
}
