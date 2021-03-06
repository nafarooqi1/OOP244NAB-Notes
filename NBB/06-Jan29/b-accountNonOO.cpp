#include <iostream>
using namespace std;
struct Account {
   char* m_bankName;
   int m_number;
   double m_balance;
};

double getBalance(const Account& A) {
   return A.m_balance;
}
int getNumber(const Account& A) {
   return A.m_number;
}
const char* getBankName(const Account& A) {
   return A.m_bankName;
}
void open(Account& acc, int number, double balance) {
   acc.m_number = number;
   acc.m_balance = balance;
}
void display(const Account& acc) {
   cout << "Account Number: " << getNumber(acc) << ", Balance: " << getBalance(acc) << endl;
}
void depost(Account& acc, double value) {
   acc.m_balance += value;
}
bool withdraw(Account& acc, double value) {
   bool possible = acc.m_balance >= value;
   if (possible) {
      acc.m_balance -= value;
   }
   return possible;
}
double close(Account& acc) {
   double balance = acc.m_balance;
   acc.m_balance = 0.0;
   acc.m_number = 0;
   return balance;
}

int main() {
   Account checking;
   open(checking, 12345, 543.21);
   display(checking);
   cout << "Deposting 200 bucks" << endl;
   depost(checking, 200.0);
   //checking.m_balance += 22.33; // I can do this, where I am not supposed to
   display(checking);
   cout << "withdrawing 420 dollars: " << endl;
   if (withdraw(checking, 420.0)) {
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      cout << "Insufficient funds" << endl;
   }
   display(checking);
   cout << "withdrawing 420 dollars: " << endl;
   if (withdraw(checking, 420.0)) {
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      cout << "Insufficient funds" << endl;
   }
   display(checking);
   cout << "Closing: ";
   display(checking);
   cout << "closed the account and withdrew " << close(checking) << endl;
   display(checking);
   return 0;
}