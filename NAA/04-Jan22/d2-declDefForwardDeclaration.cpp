#include <iostream>
using namespace std;

struct Student;  // forward declration (don't know if only C++)
                // can only be used for pointers and reference
void dispStudent(const Student* sp);

struct Student {
   char name[81];
   int stNo;
   double balance;
};

int main() {
   Student S = { "Fred", 123456, 1234.56 };
   dispStudent(&S);
   return 0;
}

void dispStudent(const Student* sp) {
   cout << "Name: " << sp->name << endl;
   cout << "Student Number: " << sp->stNo << endl;
   cout << "Account Balance: " << sp->balance << endl;
}