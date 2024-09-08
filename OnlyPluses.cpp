/* 
Kmes has written three integers a, b and c in order to remember that he has to give Noobish_Monk a×b×c bananas.

Noobish_Monk has found these integers and decided to do the following at most 5 times:
pick one of these integers;
increase it by 1

For example, if a=2, b=3 and c=4, then one can increase a three times by one and increase b two times. After that a=5, b=5, c=4. Then the total number of bananas will be 5×5×4=100.

What is the maximum value of a×b×c Noobish_Monk can achieve with these operations?
*/



#include<iostream>
using namespace std;
int main() {
	int i, testcases, a, b, c, j;
	cin>>testcases;
	for(i=0; i<testcases; i++)
	{
		cin>>a>>b>>c;
		for(j=0; j<5; j++)
		{
			if(a<=b && a<=c) {
				a++;
			}

			else if(b<=a && b<=c) {
				b++;
			}

			else {
				c++;
			}
		}
		cout<<a*b*c<<endl;
		a=0;b=0;c=0;
	}
}
