/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: its the .h file for the houses class

*/

#ifndef HOUSE_H
#define HOUSE_H
#include<iostream>
using namespace std;

class house {

    public:
    house(){material = "N/A"; num_of_exits = 0; location = "N/A"; resident = "N/A";};

    void set_material(string m){material = m;}
    void set_exits(int e){num_of_exits = e;}
    void set_location(string l){location = l;}
    void set_resident(string r){resident = r;}

    string get_material(){return material;}
    int get_exit(){return num_of_exits;}
    string get_location(){return location;}
    string get_resident(){return resident;}

    void input(istream& ins);
    
    virtual void output(ostream& outs);


    protected:
    string house_type;
    string material;
    int num_of_exits;
    string location;
    string resident;


};
#endif