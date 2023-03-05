#include <iostream>
#include <string>

using namespace std;

/*This program defines a BankAccount class that contains a name and balance for a bank account, and methods for depositing, withdrawing, and getting the balance.
The main function creates an instance of the BankAccount class and allows the user to interact with it by choosing from a menu of options.

The program demonstrates several key concepts in object-oriented programming, including class definitions, constructors, member functions, and object instantiation.
It also uses conditional statements and loops to provide a user-friendly interface for managing the bank account.
*/

class BankAccount {
  private:
    string owner;
    double balance;

  public:
    BankAccount(string name, double initial_balance) {
      owner = name;
      balance = initial_balance;
    }

    void deposit(double amount) {
      balance += amount;
      cout << "Deposited " << amount << " into account. New balance is " << balance << endl;
    }

    void withdraw(double amount) {
      if (balance - amount < 0) {
        cout << "Insufficient funds. Withdrawal cancelled." << endl;
      } else {
        balance -= amount;
        cout << "Withdrew " << amount << " from account. New balance is " << balance << endl;
      }
    }

    double get_balance() {
      return balance;
    }
};

int main() {
  string name;
  double initial_balance, deposit_amount, withdraw_amount;

  cout << "Welcome to MyBank!" << endl;
  cout << "Please enter your name: ";
  cin >> name;

  cout << "Please enter your initial balance: ";
  cin >> initial_balance;

  BankAccount my_account(name, initial_balance);

  cout << "Your account has been created. Your current balance is " << my_account.get_balance() << endl;

  while (true) {
    int choice;

    cout << "What would you like to do?" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check balance" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
      cout << "How much would you like to deposit? ";
      cin >> deposit_amount;
      my_account.deposit(deposit_amount);
    } else if (choice == 2) {
      cout << "How much would you like to withdraw? ";
      cin >> withdraw_amount;
      my_account.withdraw(withdraw_amount);
    } else if (choice == 3) {
      cout << "Your current balance is " << my_account.get_balance() << endl;
    } else if (choice == 4) {
      cout << "Thank you for using MyBank!" << endl;
      break;
    } else {
      cout << "Invalid choice. Please try again." << endl;
    }
  }

  return 0;
}
