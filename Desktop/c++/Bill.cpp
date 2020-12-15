#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{ 
int num_min;
char s_code,nmc,jk;
double amnt_due,ttl;
const double reg_fee = 10.00;
const double reg_over = 0.50;
const double prem_fee = 25.00;
const double prem_day = 0.10;
const double prem_night = 0.05;
string acc_num;

cout<<fixed;
cout<<setprecision(2);

cout<<setw(50)<<"Calculates and Display the Bill of Telephone Company"<<endl;
cout<<"Please Enter Account Number: ";
getline(cin,acc_num);
cout<<endl;

cout<<"Plaese Enter Service Code: "<<endl;
cout<<"R or r (Regular Service)"<<endl;
cout<<"P or p (Premium Service)"<<endl;
cout<<"Choose: "<<endl;
cin>>s_code;
cout<<endl;

system("cls");
switch (s_code)
{
case 'R': 
case 'r':
cout<<"Thank you for purchasing Regular Service that has an amount of P10.00"<<endl;
cout<<"Enter the number of minutes used in the service: ";
cin>>num_min;
if( num_min >= 0)
{
cout<<"\n";
}
else
{
cout<<endl;
cout<<"Invalid Number of minutes! Please try again!" <<endl;
return 0;
}
	

	if (num_min>50)
	{
	amnt_due=(num_min-50)*reg_over;
	ttl=amnt_due+reg_fee;
	}
	else
	{
	ttl=reg_fee;
	cout<<"Free Charge."<<endl;
	}
	
	cout<<"\t\t----------------------------------------------------"<<endl;
	cout<<"\t\t\tAccount Number: "<<acc_num<<endl;
	cout<<endl;
	cout<<"\t\t\tService Code: Regular Service"<<endl;
	cout<<endl;
	cout<<"\t\t\tNumber of minutes used in the service: "<<num_min<<setw(10)<<"minute/s"<<endl;
	cout<<endl;
	cout<<"\t\t\tAmount Due: P "<<ttl<<endl;
	cout<<endl;
	cout<<endl;
	
	
	break;



case 'P': 
case 'p':
cout<<"Thank you for purchasing Premium Service that has an amount of P25.00"<<endl;
cout<<endl;
cout<<"Service Code: Premium Service"<<endl;
cout<<endl;
cout<<"Enter the number of minutes used in the service: "<<endl;
cin>>num_min;
if(num_min>=0)
{
cout<<"\n";
}
else
{
cout<<endl;
cout<<"Invalid Number of minutes! Please try again!" <<endl;
return 0;
}
cout<<endl;
cout<<"A. For calls made from 6:00 AM to 5:59 PM, the first 75 mins. are free; Charges for over 75 mins. are P0.10 per minute"<<endl;
cout<<endl;
cout<<"B. For calls made from 6:00 PM to 5:59 AM, the first 100 mins. are free; Charges for over 100 mins. are P0.05 per minute"<<endl;
cout<<endl;
cout<<"Choose: "<<endl;
cin>>jk;
cout<<endl;

	system("cls");
	switch (jk)
	{
	case 'A':
	case 'a':

		if (num_min>75)
		{
		amnt_due=(num_min-75)*0.10;
		ttl=amnt_due+prem_fee;
		}
		else
		{
		ttl=prem_fee;
		}

	break;

	case 'B':
	case 'b':

		if (num_min>100)
		{
		amnt_due=(num_min-100)*0.05;
		ttl=amnt_due+prem_fee;
		}
		else
		{
		ttl=prem_fee;
		}

	break;

default:
{
cout<<"Invalid Input!!! Please Try Again!"<<endl;
}
return 0;
}
cout<<endl;
cout<<"\t\t---------------------------------------------"<<endl;
cout<<"\t\t\tAccount Number: "<<acc_num<<endl;
cout<<"\t\t\tService Code: Premium Service"<<endl;
cout<<endl;
cout<<"\t\t\tNumber of minutes used in the service: "<<num_min<<setw(10)<<"minute/s"<<endl;
cout<<"\t\t\tAmount Due: P "<<ttl<<endl;
cout<<endl;
cout<<endl;

return 0;

}
}



