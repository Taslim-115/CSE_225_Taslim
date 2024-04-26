//
// Created by USER on 3/10/2024.
//
#include <bits//stdc++.h>
#include "Movie.h"

#include <string>

using namespace std;

Movie::Movie()
{
     year =0;
     name = nullptr;
     genre = nullptr;
     director = nullptr;
     runt = nullptr;
}

Movie::Movie(string name, string director, string genre, int year, string runt)
{
    this->year = year;
    this->name = name;
    this->genre = genre;
    this->director = director;
    this->runt = runt;
}

bool Movie::operator==(Movie m)
{
    if (this->name == m.name)
        return true;
    else
        return false;
}

bool Movie::operator!=(Movie m)
{
    if (this->name == m.name)
        return false;
    else
        return true;
}

void Movie::printmovies() {
    cout << "Name :" << name << " Director : " << director << " Genre : " << genre << " Year : " << year << " Runtime : " << runt << endl;
}



