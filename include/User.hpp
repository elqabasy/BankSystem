#ifndef USER_HPP
#define USER_HPP

#include <iostream>
using namespace std;

class User {
private:
    int id;
    string name;
    string email;

public:
    User(int id, const string& name, const string& email);
    int getId() const;
    string getName() const;
    string getEmail() const;
};

#endif // USER_HPP
