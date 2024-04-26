//
// Created by USER on 3/12/2024.
//

#include <iostream>
#include "TimeStamp.h"

using namespace std;

TimeStamp::TimeStamp() {
    hour = 0;
    min = 0;
    sec = 0;
}

TimeStamp::TimeStamp(int h, int m, int s) : hour(h), min(m), sec(s) {}

bool TimeStamp::operator==(TimeStamp t) {
    if (hour == t.hour && min == t.min && sec == t.sec)
        return true;
    else return false;

}

bool TimeStamp::operator!=(TimeStamp t) {

    if (hour != t.hour || min != t.min || sec != t.sec)
        return true;
    else return false;
}

void TimeStamp::printItem() {

    // cout << "Hour : " << hour << "Minute : " << min << "Second : " << sec << endl;
    printf("  %02d:%02d:%02d\n ", hour, min, sec);


}

bool TimeStamp::operator>(TimeStamp t) {
    if ((hour > t.hour) || ((min == t.min) && (min > t.min)) || ((hour == t.hour) && (min == t.min) && (sec > t.sec)))
        return true;
    else
        return false;
}

bool TimeStamp::operator<(TimeStamp t) {

    if ((hour < t.hour) || ((hour == t.hour) && (min < t.min)) || ((hour == t.hour) && (min == t.min) && (sec < t.sec)))
        return true;
    else
        return false;
};

