/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .h file for the nest child class 

*/
#ifndef NEST_H
#define NEST_H
#include<iostream>
#include"house.h"
using namespace std;

class nest : public house {
    
    public:
    nest(){shiny_object = "N/A"; num_of_eggs = 0;}

    void input(istream& ins);

    void output(ostream& out);


    private:
    string shiny_object; //birds collect shiny objects
    int num_of_eggs;
};

#endif