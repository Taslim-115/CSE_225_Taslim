//
// Created by USER on 3/31/2024.
//

#ifndef LAB07_TIMESTAMP_H
#define LAB07_TIMESTAMP_H


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


#endif //LAB07_TIMESTAMP_H
