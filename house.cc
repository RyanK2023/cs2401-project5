/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .cc for the houses class

*/

#include<iostream>
#include"house.h"
using namespace std;

void house::input(istream& ins){
        
        if(&ins == &cin) {
            cout << "Enter a material " << endl; ins >> material; cout <<"Enter number of exits " << endl; 
            ins >> num_of_exits; cout << "Enter a location" << endl; ins >> location; cout << "Enter a resident" << endl; ins >> resident;
        } else {
            ins >> material; ins >> num_of_exits; ins >> location; ins >> resident;
        }
        
    }

void house::output(ostream& outs) {
        if(&outs == &cout) {
            outs << "Type: " << house_type << " Material: " << material << " Exit Num: " << num_of_exits << " Location: " << location << " Resident: " << resident;
        } else {
            outs << house_type << " " << material << " " << num_of_exits << " " << location << " " << resident;
        }
    }