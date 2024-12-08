#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account {
    private:
        int id;
        int ownerId;
        double balance;

    public:
        Account(int id, int ownerId, double balance);
        int getId() const;
        int getOwnerId() const;
        double getBalance() const;
        void deposit(double amount);
        void withdraw(double amount);
};

#endif // ACCOUNT_HPP
