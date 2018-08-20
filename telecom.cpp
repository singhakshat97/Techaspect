#include<iostream>
using namespace std;

//declare a class named as details to enter and display the details of plans
class details
{
	string plan_name;
	int monthly_rental;
	int free_net;
	int free_calls;
	int free_sms;
	int call_charges;
	int sms_charges;
	int data_charges;
	int roaming_chargs;
	
	void inputdetails()
	{
		cin>>plan_name;
		cin>>monthly_rental;
		cin>>free_net;
		cin>>free_calls;
		cin>>free_sms;
		cin>>call_charges;
		cin>>sms_charges;
		cin>>data_charges;
		cin>>roaming_chargs;
	}
	
	void displaydetails()
	{
		cout<<plan_name;
		cout<<monthly_rental;
		cout<<free_net;
		cout<<free_calls;
		cout<<free_sms;
		cout<<call_charges;
		cout<<sms_charges;
		cout<<data_charges;
		cout<<roaming_chargs;
	}
}d;

class retrieve
{
	displaydetails();
	
}

int main()
{
	d.inputdetails();
	d.displaydetails();
}
