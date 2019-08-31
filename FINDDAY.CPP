#include<iostream.h>
#include<conio.h>
void main()
 {
 for(int j=1;j<=9;j++)
 {

 char n;
 cout<<"\n\nEntetr the day of number :";
 cin>>n;
 switch(n)
 {
 case '1':cout<<"Sunday";
 break;
 case '2': cout<<"Monday";
 break;
 case '3': cout<<"Thousday";
 break;
 case '4': cout<<"Wedneshday";
 break;
 case '5': cout<<"thersday";
 break;
 case '6': cout<<"frayday";
 break;
 case '7':cout<<"saturday";
 break;

 default:
 {
 cout<<"It is not possible";
 }
 }
 getch();
 }
 }
