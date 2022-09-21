#include<iostream>
using namespace std;
class student
{
char name[50];
int rollno;
int total;
 public:
 	void readdetails(void);
 	{
 		cout<<"\nenter the name";
 		cin>>name;
 		cout<<"\nenter the rollno";
 		cin>>rollno;
 		cout<<"\n Enter total marks out of 500: ";
 		cin>>total;
	 }
}
void student::gradeCal(void)
{
  float percentage;
  percentage=(float)total/500.00*100.00;
  cout<<percentage<<"%\n";
  if(percentage>=75.00)
   {
   cout<<"Grade: A\n";
   }
   else
   { 
   if((percentage>=60.00)&&(percentage<75.00))
     { 
	 cout<<"Grade: B\n";
     }
    }
    else if
    
