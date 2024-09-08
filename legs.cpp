#include<iostream>
using namespace std;
int main(){
    int i, testcases, n, q=0, s=0;
    cin>>testcases;
    for(i=0;i<testcases;i++)
    {
        cin>>n;
        q=n/4;
        s=n%4;
        q=q+(s/2);
        cout<<q<<endl;
        q=0;
        n=0;
        s=0;
    }
}