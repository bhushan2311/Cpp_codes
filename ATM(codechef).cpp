/*Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is
 a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
 For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.*/

#include <iostream>
using namespace std;

int main()
{
   /* int amount;
    double balance;
    double rem_bal;
    cin>>amount;
    cin>>balance;
    if(amount%5==0)
    {
        if(amount<balance && (amount+0.5)<=balance)
        {
            rem_bal=balance-amount-0.5;
            cout<<rem_bal;
        }
        else
        cout<<balance;
    }
    else
    cout<<balance;*/


	/*int x;
    float y;
    cin>>x>>y;
    if(x % 5 == 0 && x+0.5 <= y){
        cout<<y - x - .5<<endl;
    }
    else{
        cout<<y<<endl;
    }*/

    long int x;
     float y;
     cin>>x>>y;
    if(x%5==0)
    {
        if(x<y)
        cout<<y-x-0.5;
        else if(x=y)
            cout<<y;
        else
            cout<<y;
    }
    else
        cout<<y;

	return 0;
}
/*
int main() {
	int wtd;
	double bal;
	double rem_bal;
	cin>>wtd;
	cin>>bal;
	if(wtd%5!=0)
	{
	    cout<<bal;
	}
	else if((wtd+0.5)>bal && wtd>=bal)
	{
	    cout<<bal;
	}
	else
	{
	     rem_bal=bal-wtd-0.5;
	     cout<<rem_bal;
	}
	return 0;


	return 0;
}
*/
