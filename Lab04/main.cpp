#include <bits/stdc++.h>
#include "UnsortedType.cpp"
#include "StudentInfo.h"

using namespace std;

int main() {


    UnsortedType<int> usi;
    cout << "Enter 4 elements : ";
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        usi.InsertItem(x);
    }

    cout << "Members of the list : ";
    for (int i = 0; i < usi.LengthIs(); i++) {
        int x;
        usi.GetNextItem(x);
        cout << x << " ";
    }

    cout << endl;

    cout << "Length of the list : " << usi.LengthIs() << endl;

    int x = 1;
    usi.InsertItem(x);

    usi.ResetList();
    cout << "Members of the list : ";
    for (int i = 0; i < usi.LengthIs(); i++) {
        int x;
        usi.GetNextItem(x);
        cout << x << " ";
    }

    int r = 4;
    bool found;
    usi.RetrieveItem(r, found);
    cout << (found ? "Item is  found. " : "Item is not found.") << endl;

    r = 5;
    usi.RetrieveItem(r, found);
    cout << (found ? "Item is  found. " : "Item is not found.") << endl;

    r = 9;
    usi.RetrieveItem(r, found);
    cout << (found ? "Item is  found. " : "Item is not found.") << endl;

    r = 10;
    usi.RetrieveItem(r, found);
    cout << (found ? "Item is  found. " : "Item is not found.") << endl;

    cout << (usi.IsFull() ? "List is full.\n " : "List is not ful\n");


    int d = 5;
    usi.DeleteItem(d);
    cout << (usi.IsFull() ? "List is full.\n " : "List is not full\n");

    d = 1;
    usi.DeleteItem(d);

    usi.ResetList();
    cout << "Members of the list : ";
    for (int i = 0; i < usi.LengthIs(); i++) {
        int x;
        usi.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;

    d = 6;
    usi.DeleteItem(d);

    usi.ResetList();
    cout << "Members of the list : ";
    for (int i = 0; i < usi.LengthIs(); i++) {
        int x;
        usi.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;

    StudentInfo s1("15234", "Jon", 2.6);
    StudentInfo s2("13732", "Tyrion", 3.9);
    StudentInfo s3("13569", "  Sandor", 1.2);
    StudentInfo s4("15467", "   Ramsey2", 3.1);
    StudentInfo s5("16285", " Arya", 3.1);

    UnsortedType<StudentInfo> uss;

    uss.InsertItem(s1);
    uss.InsertItem(s2);
    uss.InsertItem(s3);
    uss.InsertItem(s4);
    uss.InsertItem(s5);

    StudentInfo D = s4;
    uss.DeleteItem(D);

    StudentInfo R = s3;
    uss.RetrieveItem(R,found);
    cout << (found ? "Item is  found. " : "Item is not found.") << endl;
    R.printInfo();

    cout << "Members of the list : "<< endl;
    for (int i = 0; i < uss.LengthIs(); i++) {
        StudentInfo x;
        uss.GetNextItem(x);
        x.printInfo();

    }
    cout << endl;



    return 0;
}
