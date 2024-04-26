//
// Created by USER on 3/12/2024.
//

#ifndef LAB05_TIMESTAMP_H
#define LAB05_TIMESTAMP_H


class TimeStamp {
private:
    int hour;
    int min;
    int sec;

public:
    TimeStamp();
    TimeStamp(int, int, int);
    bool operator == (TimeStamp );
    bool operator !=(TimeStamp );
    bool operator <(TimeStamp );
    bool operator >(TimeStamp );
    void printItem();



};

//#include "TimeStamp.cpp"

#endif //LAB05_TIMESTAMP_H
