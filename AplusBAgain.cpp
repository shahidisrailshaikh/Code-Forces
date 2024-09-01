
#include <iostream>
using namespace std;
int main()
{
    int digit,size,sum,i,a;
    cin>>size;
    for(i=1;i<=size;i++)
    {
        cin>>digit;
        if(digit>=10)
        {
            a=digit/10;
            sum=sum+(digit%10)+a;
            
        }
        cout<<sum<<endl;
        sum=0;
        digit=0;
    }
    

    return 0;
}