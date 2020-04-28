#ifndef STOCKPURCHASE_H
#define STOCKPURCHASE_H

#include "Stock.h"

class StockPurchase
{
private:

	Stock stock; // The stock that was purchased
	int shares; // The number of shares
	double stockrokerCommission;

public:
	// The default constructor sets shares to 0. The stock
	// object is initialized by its default constructor.
	StockPurchase();

	// Constructor
	StockPurchase(const Stock& stockObject, int numShares, double stockbrokerCommission);
	StockPurchase(string sym, double price, int numShares, double stockbrokerCommission);
	StockPurchase(const StockPurchase& stockPurchaseObject);

	//Mutator function
	void set(Stock stockObject, int numShares, double stockbrokerCommission);
	void setStock(Stock stockObject);
	void setShares(int numShares);
	void setStockbrokerCommission(double stockbrokerCommission);

	// Accessor function
	Stock getStock() const;
	int getShares() const;
	double getStockbrokerCommission();
	double getCost() const;
	double getCostStockbrokerCommissio() const;

	void display() const;
};
#endif