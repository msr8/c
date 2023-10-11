#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;
    int seconds;

    Time(int h, int m, int s) {
        hours   = h;
        minutes = m;
        seconds = s;
    }

    bool isValid() {
        return (hours >= 0 && hours <= 23) &&
               (minutes >= 0 && minutes <= 59) &&
               (seconds >= 0 && seconds <= 59);
    }

    Time operator+(const Time &other) {
        Time result(0,0,0);
        // Seconds
        result.seconds = seconds + other.seconds;
        // Minutes
        result.minutes = minutes + other.minutes + (result.seconds / 60);
        result.seconds %= 60;
        // Hours
        result.hours = hours + other.hours + (result.minutes / 60);
        result.minutes %= 60;
        result.hours %= 24;
        // Return
        return result;
    }
};



int main() {
    Time t1(1,20,34);
    Time t2(2,50,50);
    Time t3 = t1 + t2;

    // Check if time3 is valid
    if (!t3.isValid()) {
        cout << "Invalid time" << endl;
        return 1;
    }

    cout << t1.hours << ":" << t1.minutes << ":" << t1.seconds << " + ";
    cout << t2.hours << ":" << t2.minutes << ":" << t2.seconds << " = ";
    cout << t3.hours << ":" << t3.minutes << ":" << t3.seconds << endl;

    return 0;
}
