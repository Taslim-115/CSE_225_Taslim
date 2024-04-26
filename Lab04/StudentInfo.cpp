//
// Created by USER on 3/19/2024.
//

#include "StudentInfo.h"

StudentInfo::StudentInfo() {

    id = "";
    name = "";
    cgpa = 0.0;

}

StudentInfo::StudentInfo(string id, string name, float cgpa) : id(id), name(name), cgpa(cgpa) {
}

bool StudentInfo::operator==(StudentInfo s) {
    if(id == s.id) return  true;
    else return false;
}

bool StudentInfo::operator!=(StudentInfo s) {
    if(id != s.id) return  true;
    else return false;
}

void StudentInfo::printInfo() {

    //cout << "Id :" << id << "Name : " << name << "Cgpa : " << cgpa << endl;
    cout << id << ", " << name << ", " << cgpa << endl;

}
