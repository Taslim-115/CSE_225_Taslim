#include <bits/stdc++.h>
#include "SortedType.cpp"
#include "TimeStamp.h"

using namespace std;

int main() {

    SortedType<int> is;
    cout << "Length of the list : " << is.LengthIs() << endl << endl;
    cout << "Insert five elements : ";
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        is.InsertItem(x);
    }

    cout << "All the members of the list : ";
    for (int i = 0; i < 5; i++) {
        int x;
        is.GetNextItem(x);
        cout << x << " ";

    }
    cout << endl << endl;

    int target = 6;
    bool found;

    is.RetrieveItem(target, found);
    cout << (found ? "Item is found" : "Item is not found") << endl;

    cout << (is.IsFull() ? "List is full" : "List is not full") << endl;

    int del = 1;
    is.DeleteItem(del);

    is.ResetList();

    cout << "All the members of the list : ";
    for (int i = 0; i < is.LengthIs(); i++) {
        int x;
        is.GetNextItem(x);
        cout << x << " ";

    }
    cout << endl;

    cout << (is.IsFull() ? "List is full" : "List is not full") << endl;


    SortedType<TimeStamp> tt;


    cout << "Insert 5 time values in the format ssmmhh : ";
    for (int i = 0; i < 5; i++) {
        int h, m, s;
        cin >> h >> m >> s;
        TimeStamp ts(h, m, s);
        tt.InsertItem(ts);

    }



    for (int i = 0; i < tt.LengthIs(); i++) {

        TimeStamp x;
        tt.GetNextItem(x);
        x.printItem();

    }

    return 0;
}
