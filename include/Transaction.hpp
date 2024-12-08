#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP

#include <string>
#include <iostream>
using namespace std;

class Transaction {
    private:
        int id;
        string type;
        double amount;
        int toAccountId;
        int fromAccountId;

    public:
        Transaction(int id, int fromAccountId, int toAccountId, double amount, const string& type);
        int getId() const;
        string toString() const;
        int getFromAccountId() const; // Add this method
        int getToAccountId() const; 
};

#endif // TRANSACTION_HPP
