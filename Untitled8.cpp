#include <iostream>
using namespace std;

int harshad(int num){
    
    int sum = 0;
    int temp = num;
    
    while(temp != 0){
        sum = sum + temp % 10;
        temp /= 10;
    }
    
   
    return num % sum == 0;
}

int main ()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    if(harshad(n))
        cout << n << " is a Harshad's number";
    else
        cout << n << " is not a Harshad's number";

    return 0;
}