// BCS-05-0068/2025
// Sifuna Daniel Granton
// fees management system

#include <iostream>
#include <string>

using namespace std;

class Student {

    public:
        string studentName;
        string studentAdmmissionNumber;
        double feeBalance = 0.0;

    void inputStudent () {
        
        for (int i = 1; i <= 3; i++ ) {

            if ( i == 1 ) {

                cout << i << ". Enter the student name: ";
                getline(cin , studentName);

            }  else if ( i == 2 ) {

                cout << i << ". Enter the student admission number: ";
                getline(cin , studentAdmmissionNumber);

            } else if ( i == 3 ) {

                cout << i << ". Enter the fee amount: ";
                cin >> feeBalance;
                cin.ignore();   
            }
        }
    }

    void makePayment() {

        double paymentAmount;

        cout << "Enter the amount to pay: ";
        cin >> paymentAmount;

        if (paymentAmount > feeBalance) {

            cout << "Payment successful. You have paid more than the fee amount." << endl;
            feeBalance = feeBalance - paymentAmount;

        } else if (paymentAmount < feeBalance) {

            cout << "Payment successful. You have paid less than the fee amount." << endl;
            feeBalance = feeBalance - paymentAmount;

        } else {

            cout << "Payment successful. You have paid the exact fee amount." << endl;
            feeBalance = 0.0;
        }
    }

    void displayStatus() {

        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << studentAdmmissionNumber << endl;
        cout << "Fee Balance: " << feeBalance << endl;

    }
};

int main() {

    Student student;

    cout << "\n======Enter Student Details======\n" << endl;

    student.inputStudent();

    cout << "\n=======Make Payment========\n" << endl;
    student.makePayment();

    cout << "\n ========Student Details ========\n" << endl;
    student.displayStatus();

    return 0;
}