#ifndef STOCK_H
#define STOCK_H

#include <string>

using namespace std;
class Stock
{
private:
	string symbol; // Trading symbol of the stock
	double sharePrice; // Current price per share
public:
	// Default constructor
	Stock();

	// Constructor
	Stock(const string sym, double price);

	// Copy constructor
	Stock(const Stock& obj);

	// Mutator function
	void set(string sym, double price);
	void setSymbol(string sym);
	void setSharePrice(double price);

	// Accessor functions
	string getSymbol() const;
	double getSharePrice() const;
	void display() const;
};
#endif