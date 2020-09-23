/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .cc file for the dam child class 

*/
#include<iostream>
#include"house.h"
#include"dam.h"
using namespace std;

void dam::input(istream& ins){
        if(&ins == &cin) {
            house_type = "dam"; house::input(ins); cout << "Enter the type of water body" << endl; 
            ins >> water_type; cout << "Enter height of the water(meters)" << endl; ins >> water_height;
        } else {
            house_type = "dam"; house::input(ins); ins >> water_type; ins >> water_height;
        }

}

void dam::output(ostream& outs){
        if(&outs == &cout) {
           house::output(outs); outs << " Water Body Type: " << water_type << " Water Height: " << water_height << endl;
        } else {
            house::output(outs); outs << " " << water_type << " " << water_height << endl;
        }
    }