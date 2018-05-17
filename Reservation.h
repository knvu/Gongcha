#ifndef RESERVATION_H
#define RESERVATION_H
#include <string>

using namespace std;

class Reservation 
{
    private:
            int time_hour;
            int time_min;
            int month;
            int day;
            int year;
            int number;
            int number_new;
            int total_available;
            char slash_dummy;
            char response;
            char name1;
            string pnumber[10];

    public:
           void getTime();
           void getDate();
            void getNumber();
            void getName();
            void getPnumber();
};

#endif //RESERVATION_H
