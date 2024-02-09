#include <iostream>
#include <conio.h>
 using namespace std;
int main(){
    int a,b,c;
cout << "Enter value for First number:" ;
cin>>a ;
cout << "Enter value for Second number:" ;
cin>>b ;
cout << "Enter value for Third number:" ;
cin>>c ;
if(a>b&&a>c) {
cout << "First number is greater which is:" <<endl<< a ;
}
else if(b>a&&b>c){
cout << "Second number is greater which is:" <<endl<< b ;
}
else{
cout << "Third number is greater which is:" << endl << c ;
}
getch();
}
 

