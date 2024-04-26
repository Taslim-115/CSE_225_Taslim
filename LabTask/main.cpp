#include <iostream>
#include "UnsortedType.h"
#include "Movie.cpp"
using namespace std;

int main() {

    Movie m1("Final fantasy","Square Enix","Action",2022,"1h 50 mins");
    UnsortedType<Movie> list;
    list.InsertItem(m1);
    Movie m2("Malcolm X","Spike Lee","Biography",1992,"2h 54 mins");
    list.InsertItem(m2);
    Movie m3("Old Boy","Park Chan-wook","Thriller",2003,"2h 20 mins");
    list.InsertItem(m3);
    Movie m4("Stranger Than Fiction","Marc Forster","Fantasy",2007,"1h 57 mins");
    list.InsertItem(m4);
    Movie m5("American Beauty","Sam Mendes","Comedy",1999,"2h 05m");
    list.InsertItem(m5);
    for(int i=0;i<5;i++){
        Movie b;
        list.GetNextItem(b);
        b.printmovies();
    }
    cout<<"\n";
    cout<<"END OF THE LIST"<<endl;
    list.DeleteItem(m1);
    list.ResetList();
    for(int i=0;i<list.LengthIs();i++){
        Movie b;
        list.GetNextItem(b);
        b.printmovies();
    }
    cout<<"\n";
    cout<<"END OF THE LIST"<<endl;
    list.ResetList();
    bool found = false;
    list.RetrieveItem(m1,found);
    if(found){
        cout<<"FOUND"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    for(int i=0;i<4;i++){
        Movie b;
        list.GetNextItem(b);
        b.printmovies();
    }
    cout<<"\n";
    cout<<"END OF THE LIST"<<endl;
    return 0;
}
