#include "Account.hpp"
#include <stdexcept>

Account::Account(int id, int ownerId, double balance) : id(id), ownerId(ownerId), balance(balance) {}

int Account::getId() const { return id; }

int Account::getOwnerId() const { return ownerId; }

double Account::getBalance() const { return balance; }

void Account::deposit(double amount) {
    if (amount <= 0) throw std::invalid_argument("Deposit amount must be positive.");
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount <= 0) throw std::invalid_argument("Withdrawal amount must be positive.");
    if (amount > balance) throw std::runtime_error("Insufficient balance.");
    balance -= amount;
}
