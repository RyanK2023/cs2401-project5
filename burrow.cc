/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .cc file for the burrow child class 

*/
#include<iostream>
#include"house.h"
#include"burrow.h"
using namespace std;

void burrow::input(istream& ins) {
        if(&ins == &cin) {
            house_type = "burrow"; house::input(ins); cout << "Enter the depth of the burrow" << endl; ins >> depth; 
            cout << "Enter the number of tunnels in the burrow" << endl; ins >> num_of_tunnels;
        } else {
            house_type = "burrow"; house::input(ins); ins >> depth; ins >> num_of_tunnels;
        }

}

void burrow::output(ostream& outs){
        if(&outs == &cout) {
            house::output(outs); outs << " Depth: " << depth << " Tunnel Number: " << num_of_tunnels << endl;
        } else {
            house::output(outs); outs << " " << depth << " " << num_of_tunnels << endl;
        }
    
}