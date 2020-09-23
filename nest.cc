/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .c file for the nest child class 

*/
#include<iostream>
#include"house.h"
#include"nest.h"
using namespace std;

void nest::input(istream& ins){
        if(&ins == &cin) {
            house_type = "nest"; house::input(ins); cout << "Enter a shiny object" << endl; 
            ins >> shiny_object; cout << "Enter number of eggs" << endl; ins >> num_of_eggs;
        } else {
            house_type = "nest"; house::input(ins); ins >> shiny_object; ins >> num_of_eggs;
        }
    }

void nest::output(ostream& outs){ 
        if(&outs == &cout) {
            house::output(outs); outs << " Shiny Object: " << shiny_object << " Egg Num: " << num_of_eggs << endl;
        } else {
            house::output(outs); outs << " " << shiny_object << " " << num_of_eggs << endl;
        }
        
    }