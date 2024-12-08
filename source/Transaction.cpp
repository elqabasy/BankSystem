#include "Transaction.hpp"
#include <sstream>

#include "Transaction.hpp"
#include <sstream>
using namespace std;


Transaction::Transaction(int id, int fromAccountId, int toAccountId, double amount, const string& type)
    : id(id), fromAccountId(fromAccountId), toAccountId(toAccountId), amount(amount), type(type) {}

int Transaction::getId() const { return id; }

int Transaction::getFromAccountId() const { return fromAccountId; }

int Transaction::getToAccountId() const { return toAccountId; }

string Transaction::toString() const {
    stringstream ss;
    ss << "Transaction ID: " << id << ", Type: " << type
       << ", From: " << (fromAccountId == -1 ? "N/A" : to_string(fromAccountId))
       << ", To: " << (toAccountId == -1 ? "N/A" : to_string(toAccountId))
       << ", Amount: " << amount;
    return ss.str();
}
