#include<iostream>
using namespace std;
int main()
{
    int sum=0, count=0, size, i,j;
    int problem[3];
    cin>>size;
    for(i=0;i<size;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>problem[j];
            sum=sum+problem[j];
        }

        if(sum>=2)
        {
            count++;
        }

        sum=0;
    }
    cout<<count;
}