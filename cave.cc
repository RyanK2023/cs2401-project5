/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .cc file for the cave child class 

*/
#include<iostream>
#include"house.h"
#include"cave.h"
using namespace std;

void cave::input(istream& ins){
        if(&ins == &cin) {
            house_type = "cave"; house::input(ins); cout << "Enter a type of bed" << endl; 
            ins >> bed; cout << "Enter what animal you want to eat" << endl; ins >> animal_carcass;
        } else {
            house_type = "cave"; house::input(ins); ins >> bed; ins >> animal_carcass;
        }
}

void cave::output(ostream& outs){
        if(&outs == &cout) {
            house::output(outs); outs << " Bed Type: " << bed << " Food: " << animal_carcass << endl;
        } else {
            house::output(outs); outs << " " << bed << " " << animal_carcass << endl;
        }
    }