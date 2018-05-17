
#incude "Reservation.h"
#include <string>
#include <iostream>

using namespace std;

void Reservation::getDate
{
      cout << "Enter date for booking in D/M/Y format:" <<endl;
    cin >> d >> slash_dummy >> m >> slash_dummy >> y >> endl;
    cout << "The date you have chosen is: " << d << "/" << m << "/" << y <<endl;
    cout << "Is this correct? Y/N"<< endl;
    cin >> response;
    if (response == 'Y')
    {
        //go to time
    }
    else if(response == 'N')
    {
        cout << "Please enter another date in D/M/Y format" <<endl;
        cout << "The date you have chosen is: " << d << "/" << m << "/" << y <<endl;
    }


}

void Reservation::getTime()
{
    cout << "Please enter the time you wish to book in hh:mm :" << endl;
    cin >> hour;
    time.ignore(); //skips the :
    cin >> min;
}

void Reservatopm::getNumber()
{
    cout << "Please enter the number of people you wish to book for: " << endl;
    cin >> number;
    if (number < total_available)
    {
        return number;
    }
   else 
    {
        cout << "Please enter a smaller number, the restaurant's capacity has been reached:" << endl;
        cin >> number_new;
        return number_new;
    }

}

void Reservation::getName()
{
    cout << "Please enter your first name:";
    cin >> name;

}

void Reservation::getPnumber()
{
    cout<< "What number may we contact you at?";
    cin << pnumber;

}
