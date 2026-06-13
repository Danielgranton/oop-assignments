/*
Sifuna Daniel Granton
BCS-05-0068/2025
c++ program to calculate monthly water bills
*/
#include<iostream> 
#include<string>
using namespace std;
//function to get customer details
void getcustomerdetails(string &name,float &unitsconsumed){
	cout<<"enter name:"<<endl;
	getline(cin,name);
	
	cout<<"enter unitsconsumed:"<<endl;
	cin>>unitsconsumed;
}
//function to calculate bill
float calculatebill(float unitsconsumed,float rateperunit){
	return unitsconsumed * rateperunit;
}
//function to appply discount
float applydiscount(float unitsconsumed,float bill){
	if(unitsconsumed > 100){
		return bill * 0.10;
	}
	else{
		return 0;
	}
}
//function to display bill
void displaybill(string name,float unitsconsumed,float totalbill,float discount,float finalamount){
	cout<<"\n=====WATERBILL====="<<endl;
	cout<<"name :"<<name<<endl;
	cout<<"unitsconsumed :"<<unitsconsumed<<endl;
	cout<<"totalbill :"<<totalbill<<endl;
	cout<<"discount :"<<discount<<endl;
	cout<<"finalamount :"<<finalamount<<endl;
}
int main(){
	string name;
	float unitsconsumed,totalbill,discount,finalamount;
	 
	 //calling functions
	 getcustomerdetails(name,unitsconsumed);
	 totalbill = calculatebill(unitsconsumed,60);
	 discount = applydiscount(unitsconsumed,totalbill);
	 finalamount = totalbill - discount;
	 displaybill(name,unitsconsumed,totalbill,discount,finalamount);
	 
	 return 0;
	 
}