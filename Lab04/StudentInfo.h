//
// Created by USER on 3/19/2024.
//

#ifndef LAB04_STUDENTINFO_H
#define LAB04_STUDENTINFO_H

#include <bits/stdc++.h>
using namespace std;


class StudentInfo {

private:
  string id;
  string name;
  float cgpa;

public:
    StudentInfo();
    StudentInfo(string,string,float );
    bool operator ==(StudentInfo);
    bool operator !=(StudentInfo);
    void printInfo();


};


#endif //LAB04_STUDENTINFO_H
