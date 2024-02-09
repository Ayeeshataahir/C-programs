#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
char ch;
cout << "Enter any Character from A-Z:" ;
cin>>ch;
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')

cout  << "You entered vowel which is:" <<ch ;

else

cout << "You entered consonent which is:" <<ch  ;

getch();
}
