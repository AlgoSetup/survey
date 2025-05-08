//survey of beverages votes
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main ()
{
unsigned int choice;
int vote = 0, person = 1, vote1 =0, vote2= 0, vote3 = 0, vote4 = 0;
	cout << "1. Coffee"<<endl; 
	cout <<"2. Tea" <<endl; 
	cout <<"3. Coke" <<endl; 
	cout <<"4. Orange Juice"<<endl;
	cout <<"Please input the faverite beverage of person " <<person <<endl;
	cout <<"Choose 1, 2 ,3, or 4 from the above menu or -1 to exit the program." <<endl;
	cin >> choice;
	while ( choice != -1 || !(choice <=1 && choice >=4) );
do
{
	//do {

	//getline (cin, choice);
    //} 
	//cin >> choice;
    switch (choice)
    {
	    case 1 : ++ vote1;
		++person;
		break;
	    case 2: ++ vote2;
		++person;
		break;
	    case 3: ++ vote3;
		++person;
		break;
	    case 4: ++ vote4;
		++person;
		break;
	}
} while ( choice >=1 && choice <=4 );

if ( choice = -1)
	{	cout <<"The total number of people surveyed is "<<person <<". The results are as follows:" <<endl;
  	    cout <<"Beverages" <<setw(7) <<"Number of votes" <<endl;
 	    cout <<"*****************************" <<endl;
  	    cout <<"Cofee" <<setw(7) <<vote1 <<endl;
  	    cout <<"Tea" <<setw(7) <<vote2 <<endl;
  	    cout <<"coke" <<setw(7) <<vote3 <<endl;
  	    cout <<"Orange Juice" <<setw(7) <<vote4 <<endl;
	}
return 0;
}