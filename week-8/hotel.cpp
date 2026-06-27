// BCS-05-0068/2025
// Sifuna Daniel Granton
// hotel booking management system

#include <iostream>
#include <string>

using namespace std;

class RoomBooking {
    public:
        string guestName;
        int roomNumber, numberOfDaysBooked;

    public:
        //constructor
        RoomBooking (string name, int roomNo, int noOfDays) {
            guestName = name;
            roomNumber = roomNo;
            numberOfDaysBooked = noOfDays;

            cout << "Room Booking Confirmed" << endl;
        }

        void displayBooking() {

            cout << "\n -------Booking Details---------\n" << endl;
            cout << "Guest Name: " << guestName << endl ;
            cout << "Room Number: " << roomNumber << endl;
            cout << "Number of days Booked: " << numberOfDaysBooked << endl;

        }

        ~RoomBooking (){
            cout << "\nBooking ended, room released" << endl;
        }
};

int main() {

    RoomBooking room("Granton", 101, 7);

    room.displayBooking();

    return 0;
}