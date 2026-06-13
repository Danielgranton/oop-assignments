// Sifuna Daniel granton
// BCS-05-0068/2025
// Employee salary calculator

#include <iostream>
#include <cmath>

using namespace std;

int main () {

    string name;
    float hours, basic_pay = 0, tax = 0,net_pay=0;
    int rate;

    for (int i = 1; i <=3; i++) {
        if (i == 1) {
            cout << i << ". Enter name: ";
            cin >> name;
        } else if (i == 2) {
            cout << i << ". Enter hours worked: ";
            cin >> hours;

        } else if (i == 3) {
            cout << i << ". Enter rate per hour: ";
            cin >>  rate;
        }
    }

    basic_pay =  hours * rate*60;
    if (basic_pay > 50000) {
        tax = 0.2 * basic_pay;
    } else if (basic_pay >= 20000 && basic_pay <= 50000) {
        tax = 0.1 * basic_pay;
    } else if ( basic_pay < 20000) {
        tax = 0;
    }

    net_pay = basic_pay - tax;
    cout << "Employee Name: " << name << endl;
    cout << "Basic Pay: " << basic_pay << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Pay: " << net_pay << endl;
    return 0;

}