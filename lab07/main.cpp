#include <iostream>
#include "SortedType.cpp"
#include "TimeStamp.h"

int main() {

    SortedType<TimeStamp> tt;


    cout << "Insert 5 time values in the format ssmmhh : ";
    for (int i = 0; i < 5; i++) {
        int h, m, s;
        cin >> h >> m >> s;
        TimeStamp ts(h, m, s);
        tt.InsertItem(ts);

    }


    TimeStamp d(25,36,17);
    tt.DeleteItem(d);

    for (int i = 0; i < tt.LengthIs(); i++) {

        TimeStamp x;
        tt.GetNextItem(x);
        x.printItem();

    }
    return 0;
}
