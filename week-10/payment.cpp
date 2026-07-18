// BCS-05-0068/2025
// Sifuna Daniel Granton
// Payment system

#include <iostream>

using namespace std;

class Payment{

    public:
            //cash payment
            void processPayment( int amount){
                cout << "Cash Payment" << endl;
                cout << "Amount Paid: " << amount << endl;
                cout << endl;
            }

            //card payment
            void processPayment(int amount , double fee) {
                double total = amount + fee;

                cout << "Card Payment" <<endl;
                cout <<"Amount: " << amount << endl;
                cout << "Transaction Fee: " << fee << endl;
                cout << "Final Payment: " << total << endl;
                cout << endl;
            }

            //Mobile payment
            void processPayment(int amount, double fee, double discount) {
                double total = amount + fee - discount;

                cout << "Mobile Payment" << endl;
                cout << "Amount: " << amount << endl;
                cout << "Transaction fee: " << fee << endl;
                cout << "Discount: " << discount << endl;
                cout << "Final Payment: " << total << endl;
                cout << endl;
            }
};

int main(){
    Payment payment;

    //cash payment
    payment.processPayment(1000);

    //card payment
    payment.processPayment(1000, 50);

    //mobile payment
    payment.processPayment(1000, 20, 30);
}