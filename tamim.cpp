//
// Created by USER on 2/19/2024.
//


#include <bits/stdc++.h>
#include <chrono>


using namespace std;
#define endl "\n";

int main()
{

    // Start measuring time
    auto start = chrono :: high_resolution_clock::now();

   int *numPtr, num = 16 ;
   numPtr = &num;
   cout << num << endl;
   *numPtr = 20;
   cout << numPtr << endl;
   cout << &numPtr << endl;
   cout << num << endl;

    // End measuring time
    auto stop = chrono :: high_resolution_clock::now();
    // Calculate duration
    auto duration = chrono :: duration_cast< chrono :: milliseconds>(stop - start);



    // Output execution time
    cout << "Execution time: " << duration.count() << " milliseconds" << endl;

    return 0;
}

