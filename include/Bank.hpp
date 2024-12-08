#ifndef BANK_HPP
#define BANK_HPP

#include <vector>
#include <string>
#include "Account.hpp"
#include "User.hpp"
#include <iostream>
#include "Transaction.hpp"
using namespace std;

class Bank {
    private:
        vector<User> users;
        vector<Account> accounts;
        vector<Transaction> transactions;

    public:
        Bank();
        void loadData();
        void saveData();

        void createUser(const string& name, const string& email);
        void createAccount(int userId, double initialDeposit);
        void transferMoney(int fromAccountId, int toAccountId, double amount);
        void deposit(int accountId, double amount);
        void withdraw(int accountId, double amount);

        void showUserDetails(int userId);
        void listAllAccounts();
        void listTransactionHistory(int accountId);

    
};

#endif // BANK_HPP
