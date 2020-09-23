/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .h file for the dam child class 

*/
#ifndef DAM_H
#define DAM_H
#include<iostream>
#include"house.h"
using namespace std;

class dam : public house {
    
    public:

    dam(){water_type = "N/A"; water_height = 0;}

    void input(istream& ins);

    void output(ostream& outs);

    private:
    string water_type; //lake? stream? pond? river?
    int water_height; //how high the water is
};

#endif