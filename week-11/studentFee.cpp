#include <iostream>
#include <string>

using namespace std;

class Student {
    private :
        string studentName;
        string admissionNumber;
        double feeBalance;

    public:
        // input student details
        void inputStudentData() {
            cout << "Enter Student Name: ";
            getline(cin, studentName);

            cout << "Enter Admission Number: ";
            getline (cin, admissionNumber);

            cout << "Enter fee Balance: ";
            cin >> feeBalance;
        }

        //payment process
        void makePayment() {
            double payment;

            cout << "Enter payment Amount: ";
            cin >> payment;

            feeBalance -= payment;

            if (feeBalance < 0){
                feeBalance = 0;
            }
        }

        // display student stutas
        void displayStatus(){
            cout << "\n======= Student Fee Status =======" << endl;
            cout << "Student Name: " << studentName << endl;
            cout << "Admission Number: " << admissionNumber << endl;
            cout << "Remaining Fee Balance: " << feeBalance << endl;
        }
};

int main() {
    Student student;

    student.inputStudentData();
    student.makePayment();
    student.displayStatus();

    return 0;
}