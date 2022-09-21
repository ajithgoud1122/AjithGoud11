#include<iostream>
using namespace std;
int main()
{
int number,input;
number=int(input);

count=0

for i in range(2,int(number/2)+1):

   if(number%i==0):

       count=1

       break

if(count==0):

   print("The number is prime number")

else:

   print("The number is composite number")
   return 0;
}