/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .h file for the hive child class 

*/
#ifndef HIVE_H
#define HIVE_H
#include<iostream>
#include"house.h"
using namespace std;

class hive : public house {
    
    public:
    
    hive(){honey_color = "N/A"; num_of_bees = 0;}

    void input(istream& ins);

    void output(ostream& outs);


    private:
    string honey_color;
    int num_of_bees;

};
#endif