/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .h file for the burrow child class 

*/
#ifndef BURROW_H
#define BURROW_H
#include<iostream>
#include"house.h"
using namespace std;

class burrow : public house {
    
    public:
    
    burrow(){depth = 0; num_of_tunnels = 0;}

    void input(istream& ins);
                            
    void output(ostream& outs);


    private:
    int depth;
    int num_of_tunnels;
};

#endif