/*
	Hannah Kendall Alexa Gorada

	stockTrade.cpp

	Calculate total cost, total proceeds, commission paid, and
	gains/losses (amount and percentage) using user data on
	company name and symbol, number of shares transacted, cost per share
	at time of buying, price (market value) per share at time of selling.


	Input: company name and symbol, number of shares transacted, cost per share
	at time of buying & price (market value) per share at time of selling

	Processing: 1.) Initialize iTrade at 2% or 0.02
				2.) Declare constants and variables
				3.) Prompt user for company name & symbol
				4.) Prompt user for number of shares transacted
				5.) Prompt user for price of share at selling
				6.) Prompt user for price of share at selling
				7.) Calculate cost of shares bought, price of shares sold, 
					cost of commission at time of buying and selling, 
					total cost, total proceeds, total cost of commission, 
					and profit gain or loss and its percentage.
				8.) Display stock, quantity of shares, total cost,
					total proceeds, total commission, profit gain or loss
					and its percentage.

	Output: Realized Gains/Losses Report
*/

// Header Files
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Constants & Variables
	const double iTrade = 0.02;
	double sharesTransacted, costAtBuy, priceAtSell;

		string companyName, symbol;

	// Intro
	cout << "Stock Investment Performance Calculator ..." << endl; 
	cout << "\n"; 

	// Prompt user for company name & symbol
	cout << "Please enter: " << endl;
	cout << "Company Name (letters only): \t";
	cin >> companyName;
	cout << "Symbol (no spaces): \t\t";
	cin >> symbol;

	// Prompt user for number of shares transacted
	cout << "Number of Shares transacted: \t";
	cin >> sharesTransacted;

	//Prompt user for cost of share at buying
	cout << "Cost per Share (@ buying): \t";
	cin >> costAtBuy;

	//Prompt user for price of share at selling
	cout << "Cost per Share (@ selling): \t";
	cin >> priceAtSell;

	//Calculations
	double boughtSharesCost = costAtBuy * sharesTransacted,
		soldSharesPrice = priceAtSell * sharesTransacted,
		commissionCost = boughtSharesCost * iTrade,
		commissionPrice = soldSharesPrice * iTrade,
		totalCost = boughtSharesCost + commissionCost,
		totalProceed = soldSharesPrice - commissionPrice,
		commission = commissionCost + commissionPrice,
		gain_loss = totalProceed - totalCost, percentage = (gain_loss * 100) / totalCost;

	//Display Realized Gains/Losses Report
	cout << "\n";
	cout << "Realized Gains/Losses Report ... \n";
	cout << "------------------------------------------------------\n";
	cout << "Stock: " << "\t\t" << companyName << ". (" << symbol << ") \n";
	cout << "Quantity: " << "\t" << sharesTransacted << " shares." << endl;
	cout << "\n";
	cout << "Total Cost: " << "\t $" << totalCost << endl;
	cout << "Total Proceeds:  " << "$" << totalProceed << endl;
	cout << "Commissions: " << "\t $" << commission << endl;
	cout << "Gains/Losses: " << "\t $" << gain_loss << " (" << percentage << "%)" << endl;
	return 0;
}

