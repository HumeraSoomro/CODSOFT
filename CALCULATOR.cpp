#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int a,b,c,d;
   char op;
   char choice;
   cout<<"\n\n\t\t\t\t\t\t\t\t*************************************\n";
   cout<<"\t\t\t\t\t\t\t\t\t!!! SIMPLE CALCULATOR!!!\n";
   cout<<"\t\t\t\t\t\t\t\t*************************************\n";
   cout<<"ENTER YOUR CHOICE FOR CALCULATION";
   cout<<"\nA)NUMBER IN FRACTION";
   cout<<"\nB)SIMPLE NUMBERS";
   cout<<"\nC)EXIT\n";
   cout<<"ENTER YOUR CHOICE:";
   cin>>choice;
   system("cls");
   if (choice=='a'||choice=='A')
   {
   do
  {
   cout<<"ENTER FIRST FRACTION(a/b):";
   cin>>a>>op>>b;
   cout<<"ENTER SECOND FRACTION(c/d):";
   cin>>c>>op>>d;
   int numerator,denominator;
   cout<<"ENTER OPERATOR:";
   cin>>op;
   switch(op)
   {
   	case '+':numerator=(a*d)+(b*c);
   	         denominator=b*d;break;
   	case '-':numerator=(a*d)-(b*c);
   	         denominator=b*d;break;
   	case '*':numerator=a*c;
   	         denominator=b*d;break;
    case '/':numerator=a*d;
   	         denominator=b*c;break;
	default :cout<<"INVALID OPERATOR!";							         
   }
   cout<<"RESULT:"<<numerator<<"/"<<denominator<<endl;
   cout<<"DO YOU WANT TO CONTINUE(Y/N)";
   cin>>choice;
  }
 while(choice=='Y'||choice=='y');
}
else if(choice=='B'||choice=='b')
{
	do
	{
		cout<<"\nENTER FIRST NUMBER:";
		cin>>a;
		cout<<"ENTER SECOND NUMBER:";
		cin>>b;
		cout<<"ENTER OPERATOR(+,-,*,/):";
		cin>>op;
		switch(op)
		{
			case '+':cout<<"RESULT:"<<a<<"+"<<b<<"="<<a+b;break;
			case '-':cout<<"RESULT:"<<a<<"-"<<b<<"="<<a-b;break;
			case '*':cout<<"RESULT:"<<a<<"*"<<b<<"="<<a*b;break;
			case '/':cout<<"RESULT:"<<a<<"/"<<b<<"="<<(float)a/b;break;
			default:cout<<"INVALID OPERATOR"<<endl;
		}
		cout<<"\nDO YOU WANT DO CONTINUE(Y/N):";
		cin>>choice;
	}
	while(choice=='y'||choice=='Y');
}
else if(choice=='c'||choice=='C')
{
	cout<<"EXITING...\nTHANKYOU!!";
}
  else{
  	cout<<"INCORRECT INPUT:";
  }

  return 0;
 }
