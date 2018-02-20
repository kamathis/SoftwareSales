// Kristi Mathis
// February 6th, 2018
// kamathis@dmacc.edu

// This program will compute 
// the discount based on units 
// sold and then the total cost
// of the purcahse.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int TWENTY_PERCENT_MIN = 10; // min units to purchase for 20%
	const int THIRTY_PERCENT_MIN = 20; // min units to purchase for 30%
	const int FORTY_PERCENT_MIN = 50;  // min units to purchase for 40%
	const int FORTY_PERCENT_MAX = 99;  // max units to purchase for 40%
	const double TWENTY_PERCENT = .2;  // 20% discount
	const double THIRTY_PERCENT = .3;  // 30% discount
	const double FORTY_PERCENT = .4;   // 40% discount
	const double FIFTY_PERCENT = .5;   // 50 % discount
	const double PACKAGE = 99.0;       // cost per package
	
	int units;
	double discount, price;
	
	cout << "Enter the number of units sold: ";
	cin >> units;
		//verification check
		if (units > 0){ //verification check
			// check for 1-9 & calculate price
			if (units < TWENTY_PERCENT_MIN) 
			{
			price = PACKAGE * units;
			// check for 10 - 19 & calculate discount
			}else if (units >= TWENTY_PERCENT_MIN && units < THIRTY_PERCENT_MIN)  
			{
			discount = (PACKAGE * units) * TWENTY_PERCENT;
			// check for 20-49 & calculate discount
			}else if (units < FORTY_PERCENT_MIN) 
			{
			discount = (PACKAGE * units) * THIRTY_PERCENT;
			// check for 50-99 & calculate discount
			}else if (units <= FORTY_PERCENT_MAX) 
			{
			discount = (PACKAGE * units) * FORTY_PERCENT;
			// units must be over 99 so 50% discount applies
			}else{
			discount = (PACKAGE * units) * FIFTY_PERCENT;
			}
			//calculate & display total price
			price = (PACKAGE * units) - discount;
			cout << "The total price for " << units; 
			cout << setprecision(2) << fixed;
			cout << " units is $" << price << ".";
		}else{
			cout << "An invalid input was entered."; // verification failed
		}
	

   return 0; 
}
