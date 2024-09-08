/* 
It's another beautiful day on Farmer John's farm.
After Farmer John arrived at his farm, he counted n legs. It is known only chickens and cows live on the farm, and a chicken has 2 legs while a cow has 4
What is the minimum number of animals Farmer John can have on his farm assuming he counted the legs of all animals? */

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
