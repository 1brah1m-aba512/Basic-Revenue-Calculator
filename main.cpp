//Cmpleted during 16/02/2024 - 23/02/2024
//Ibrahim Abasiz


//Adding input output libraray to output onto the console
#include <iostream>

//Use the standard namespace for ease
using namespace std;

int main(){

	//Create a string Array with the name of the strings to
	string monthName[12] = {"Januray","February","March","April","May","June","July","August","September","October","November","December"};

	//create a integer array to store each month's revenue
	int monthRev[12];
	int annualRev;

	//Create Variables to store the Average Revenue both in rands and Dollars
	double aveRevRand;
	double aveRevDollar;

	//Iterate through the month and get the revenue in each month
	for (int i = 0; i<12;i++){

	//Get the Revenue for each Month
	cout<<"What is the Revenue in Rands for " <<monthName[i]<<" ?";
	cin>>monthRev[i];

	//Validation
	char choice ;
	cout<<"Would you like to confirm the amount R"<<monthRev[i]<<" for "<< monthName[i]<<"? (type y or n)"<<endl;
    cin>>choice;

    switch(choice){

	case 'y':

	//Find annual Revenue by summing the revenue of each month
	annualRev += monthRev[i];

	break;

	case 'n':

	i=i-1;

	break;
	}

	//Clear the display to keep a Simple design
	system("cls");

	}

	//Find the average revenue
	aveRevRand = annualRev / 12;

	//Convert the Average revenue to Dollars
	aveRevDollar = aveRevRand * 0.0053;

	for (int j; j<12;j++){

		cout<<monthName[j]<<" : R"<<monthRev[j]<<endl;

	}

	//Output the Averages onto the console
	cout <<" "<<endl;
	cout <<"Average Monthly Revenue in Rands: R"<<aveRevRand<<endl;
	cout <<" "<<endl;
	cout <<"Average Monthly Revenue in Dollars: $"<<aveRevDollar<<endl;

	return 0;
}
