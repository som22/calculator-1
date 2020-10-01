
#include<iostream>
#include<conio.h>
using namespace std;
 
 int main(){
 
 int p;
 float a;
 char ch;
 cout<<"Enter any value "<<endl;
 cin>>p>>a;
 cout<<"choose any operator(+,-,*,/,<,>) ::"<<endl;
 cin>>ch;


switch(ch)

 {
 case '+':cout<<"addition "<<"="<<p+a<<endl;
	 break;
 case'-' : cout<<"subtraction "<<"="<<p-a<<endl;
	  break;
 case '*' : cout<<"multipication "<<"="<<p*a<<endl;
 break;
 case '/' : cout<<"division "<<"="<<p/a<<endl;
 break;
 case '<' : if(p<a){
	 cout<<p<<" is smaller than  "<<a<<endl;}
		else{           
         cout<<p<<" is larger than "<<a<<endl;}
 break;
 case '>' : if(p>a){
	 cout<<a<<" is smaller than  "<<p<<endl;}
		else{           
         cout<<a<<" is larger than "<<p<<endl;}
      
 break;

 default: cout<<"you choose wrong operator "<<endl;

 getch();
  }
return 0;}
