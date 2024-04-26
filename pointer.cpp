//
// Created by USER on 2/19/2024.
//


#include <bits/stdc++.h>

using namespace std;
#define endl "\n";

int main()
{


//   int *numPtr, num = 16 ;
//   numPtr = &num;
//   cout << num << endl;
//   *numPtr = 20;
//   cout << numPtr << endl;
//   cout << &numPtr << endl;
//   cout << num << endl;

//int a = 8;
//char *ptr = NULL;
//ptr = (char*)&a;
//cout << "Hello" << endl;
//cout << (int)*ptr << endl;
//cout << (int)*ptr << endl;
//
//int x = 5;
//int &ref = x;
//cout << "Address of x   : " << &x << endl;
//cout << "Address of ref : " << &ref << endl;
//
//ref = 10;
//cout << "x   : " << x << endl;
//cout << "ref : " << x << endl;


//Task 1
//int size;
//cout << "Enter the size of the array: ";
//cin  >> size;
//
////Dynamically allocating memory for the array
//int* arr = new int[size];
//
//cout << "Enter " << size << " integers: " ;
//for(int i = 0; i< size; ++i){
//    cin >> arr[i];
//}
//
//    cout << "Values in the array:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    delete[] arr;


//Task 2
int rows, cols;

cout << "Enter the number of rows: ";
cin >> rows;
cout << "Enter the number of columns: ";
cin >> cols;

char** array = new char*[rows];
for(int i = 0; i < rows; ++i) {
    array[i] = new char[cols]; // why it is taking input string of any side
}

cout << "Enter " << rows << " strings of length " << cols - 1 << "or less: " << endl;
    for (int i = 0; i < rows; ++i) {
        cin >> array[i];
    }
cout << "All the strings: " << endl;
    for (int i = 0; i < rows; ++i) {
        cout << array[i] << endl;
    }
    delete[] array;

    return 0;
}

