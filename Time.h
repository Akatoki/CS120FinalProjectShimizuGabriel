// time class header
#ifndef TIME_H
#define TIME_H

#include <iostream>


using namespace std;

class Time
{
    public:
        Time();
        Time(int hour, int min) throw (logic_error);
        static int elapsedMin(Time t1, Time t2);
        string toString();

    private:

};

#endif
