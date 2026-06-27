// BCS-05-0068/2025
// Sifuna Daniel Granton
// bank management system

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class BanckAccount {
    public:
        string accountHolderName;
        int accountNumber;
        double accountBalance;
    
    public: 
        //constructor

        BanckAccount(string name, int number, double balance) {
            accountHolderName = name;
            accountNumber = number;
            accountBalance = balance;

            cout << "Account successfully created." << endl;
        }

        void displayAccount() {
            cout << "\n ---------Account details ------------\n" << endl;
            cout << "Account Holder Name : " << accountHolderName << endl;
            cout << "Account Number: " << accountNumber << endl ;
            cout << "Account Balance: " << accountBalance << endl;
        }

        //Destructor

        ~BanckAccount () {
            cout << "\n Account closed successfully." << endl;
        }
};

int main() {
    
    BanckAccount bank("Daniel", 2524, 26236);

    bank.displayAccount();

    return 0;
}