#include <iostream>
#include "QueType.cpp"

using namespace std;

void checkEmpty(bool b) {

    cout << (b ? "Queue is Empty" : "Queue is not Empty") << endl;
}

void checkFull(bool b) {

    cout << (b ? "Queue is Full" : "Queue is not Full") << endl;
}

template<class ItemType>
void Print(QueType<ItemType> &qu) {

    QueType<ItemType> temp;
    while (!qu.IsEmpty()) {
        int x;
        qu.Dequeue(x);
        temp.Enqueue(x);
        cout << x << " ";
    }
    cout << endl;
    while (!temp.IsEmpty()) {
        int x;
        temp.Dequeue(x);
        qu.Enqueue(x);
    }
}

vector<string> generateBinaryNumbers(int n) {
    vector<string> result;
    QueType<string> q;
    q.Enqueue("1");
    for (int i = 0; i < n; i++) {
        string s;
        q.Dequeue(s);
        result.push_back(s);
        string a = s + "0";
        string b = s + "1";
        q.Enqueue(a);
        q.Enqueue(b);

    }
    return result;
}


int main() {

    QueType<int> q(5);
    checkEmpty(q.IsEmpty());
    cout << "Enter 4 items : ";
    int t = 4;
    while (t--) {
        int x;
        cin >> x;
        q.Enqueue(x);
    }
    checkEmpty(q.IsEmpty());
    checkFull(q.IsFull());
    q.Enqueue(6);
    Print(q);
    checkFull(q.IsFull());
    int d = 8;
//    if (!q.IsFull())
//        q.Enqueue(d);
//    else
//        cout << "Queue Overflow" << endl;

    //!q.IsFull() ? q.Enqueue(d) : cout << "Queue Overflow" << endl;
    !q.IsFull() ? q.Enqueue(d) : ([]() { cout << "Queue Overflow" << endl; })();
    q.Dequeue(d);
    q.Dequeue(d);
    Print(q);
    q.Dequeue(d);
    q.Dequeue(d);
    q.Dequeue(d);
    checkEmpty(q.IsEmpty());
    //    if (!q.IsEmpty())
//        q.Dequeue(d);
//    else
//        cout << "Queue Underflow" << endl;
    !q.IsEmpty() ? q.Dequeue(d) : ([]() { cout << "Queue Underflow" << endl; })();


    //Task 2
    int n;
    cout << "Enter the number of Binary value you want to generate: ";
    cin >> n;
    vector<string> ans = generateBinaryNumbers(n);
    for (const auto &val: ans)
        cout << val << endl;


    return 0;
}
