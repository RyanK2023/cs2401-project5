/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .h file for the cave child class 

*/
#ifndef CAVE_H
#define CAVE_H
#include<iostream>
#include"house.h"
using namespace std;

class cave : public house {

    public:

    cave(){bed = "N/A"; animal_carcass = "N/A";}

    void input(istream& ins);

    void output(ostream& outs);

    private:
    string bed; //bears can make bed of leafs lol
    string animal_carcass; //imagine that theres a deer carcass for the bear or whatever to eat in the cave
};

#endif