//programmer Deepali Verma
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int item,quan[20],price[30],i;
	char name[20][20];
	cout<<"no of item purchased:";
	cin>>item;
	for(i=0;i<item;i++)
	{
	cout<<"name of item purchased:";
	cin>>name[i];
	cout<<"quantity of item purchased:";
	cin>>quan[i];
	cout<<"price of items purchased:";
	cin>>price[i];
    }
    system("CLS"); 
    //CLS is used to clear the input and show only the required output on the scren
    system("color B0");
    //color B0 is used to give a particular background color for the output screen
    cout<<"************Total Bill************"<<endl;
    cout<<"Name of item\tquantity\tprice\ttotal\t\n";
    for(i=0;i<item;i++)
    {
    	cout<<name[i]<<" \t         "<<quan[i]<<"      \t"<<price[i]<<"      \t"<<quan[i]*price[i]<<"   \n"<<endl;
	}
	return 0;
}
