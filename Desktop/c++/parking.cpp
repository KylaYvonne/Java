#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;
int main()
{
char vhcle,tfin,stfin,tfout,stfout;
int a,b,c,d,e,f,rt;
double itc,ftc;
cout<<"Type of Vehicle";
cout<<"\n1. C-Car";
cout<<"\n2. B-Bus";
cout<<"\n3. T-Truck"<<endl;
cout<<"\n";
cout<<"Choose:";
cin>>vhcle;
cout<<"\n";
if (toupper(vhcle)=='C'||toupper(vhcle)=='B'||toupper(vhcle)=='T')
{
cout<<"\n";
}
else
{
cout<<"Sorry. Your input of letters is invalid. Please try again.";
return 0;
}
cout<<"Hour vehicle entered (0-24): ";
cin>>a;
cout<<"\nMinute vehicle entered (0-60): ";
cin>>b;
cout<<"\n";
cout<<"\nHour vehicle left (0-24): ";
cin>>c;
cout<<"\nMinute vehicle left (0-60): ";
cin>>d;
if (a>24||b>60||c>24||d>60)
{
cout<<"\n\nInvalid Time! Please try again.";
return 0;
}

if (a>=0&&b>=0&&c>=0&&d>=0)
{
cout<<"\n";
}
else
{
cout<<"\n\nInvalid Time! Please try again.";
return 0;
}
//FOR PARKING TIME
if (a>c)
{
cout<<"\n";
cout<<"You are not allowed to park your vehicle overnight or past midnight.";
cout<<"\nIf so, we will be forced to tow it away. Thank you for your consideration! Have a good day.";
return 0;
}
else if (b<d)
{
e=c-a;
f=d-b;
}
else if (b>d)
{
e=(a==c)?0:(c-1)-a;
f=60-b+d;
}
else if (b==d)
{
e=c-a;
f=0;
}
//FOR ROUNDED TOTAL
rt=(f>=1)?e+1:e;
//TYPE OF VEHICLE
switch (toupper(vhcle))
{
case 'C':
{
cout<<setw(50)<<"PARKING LOT CHARGES"<<endl;
cout<<setw(52)<<"Type of Vehicle: Car"<<endl;
itc=(rt<=3)?0:(rt-3)*1.50;
}
break;

case 'T':
{
cout<<setw(50)<<"PARKING LOT CHARGES"<<endl;
cout<<setw(52)<<"Type of Vehicle: Truck"<<endl;
itc=(rt<=2)?rt*10:(rt-2)*5+(2*10);
}
break;

case 'B':
{
cout<<setw(50)<<"PARKING LOT CHARGES"<<endl;
cout<<setw(52)<<"Type of Vehicle: Bus"<<endl;
itc=(rt>1)?(rt-1)*10+20:rt*20;
}
break;

default:
return 0;
}
if (b==60)
{
b=0;
a++;
}
if (d==60)
{
d=0;
c++;
}//for adding one to hour
switch (a%24)
{
case 0:
{
tfin=(b>=1)?'A':'M';
stfin=(b>=1)?'M':'N';
a=(a==0||a==24)?12:a=a;
}
break;
case 1:case 2:case 3:case 4:case 5: case 6:
case 7:case 8:case 9:case 10:case 11:
{
tfin='A';
stfin='M';
}
break;
case 12:
{
a=12;
tfin=(b>=1)?'P':'N';
stfin=(b>=1)?'M':'N';
}
break; 

case 13:case 14:case 15:case 16:
case 17:case 18: case 19:case 20:case 21:case 22:case 23:
{
a=a-12;
tfin='P';
stfin='M';
}
break;

default:
cout<<"\n";
}

switch (c%24)
{
case 0:
{
tfout='M';
stfout='N';
c=(c==0||c==24)?12:a=a;
if (d>=1)
{
cout<<"\n\nYou are not allowed to park your vehicle overnight or past midnight.";
cout<<"\nIf so, we will be forced to tow it away. Thank you for your consideration.";
return 0;
}
}
break;
case 1:case 2:case 3:case 4:case 5: case 6:
case 7:case 8:case 9:case 10:case 11:
{
tfout='A';
stfout='M';
c=(c==0||c==24)?12:c=c;
}
break;

case 12:
{
c=12;
tfout='N';
stfout='N';
}
break;

case 13:case 14:case 15:case 16:
case 17:case 18: case 19:case 20:case 21:case 22:case 23:
{
c=c-12;
tfout='P';
stfout='M';
}
break;

default:
cout<<"Invalid Input!!";
return 0;
}
cout<<"\t\t\t\t"<<"TIME-IN:  "<<a<<":"<<setw(2)<<setfill('0')<<b<<" "<<tfin<<stfin<<endl;
cout<<"\t\t\t\t"<<"TIME-0UT: "<<c<<":"<<setw(2)<<setfill('0')<<d<<" "<<tfout<<stfout<<endl;
cout<<"\t\t\t\t"<<"PARKING TIME:  "<<setw(2)<<e<<":"<<setw(2)<<setfill('0')<<f<<"HH:MM"<<endl;
cout<<"\t\t\t\t"<<"ROUNDED TOTAL: "<<setw(2)<<rt<<" hrs"<<endl;
cout<<fixed<<setprecision(2);
cout<<"\t\t\t\t"<< showpoint<<"TOTAL CHARGE: P"<<itc;
return 0;
}

