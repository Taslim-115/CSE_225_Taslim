//
// Created by USER on 3/10/2024.
//

#ifndef LABTASK_MOVIE_H
#define LABTASK_MOVIE_H
#include <string>
using namespace std;

class Movie {

    string name;
    string director;
    string genre;
    int year;
    string runt;

public:
    Movie();
    Movie(string,string,string,int,string);
    bool operator == (Movie m);
    bool operator != (Movie m);
    void printmovies();

};


#endif //LABTASK_MOVIE_H
