/*

    Name: Ryan Kilkenney
    Date: 4/7/2020
    Purpose: Its the .cc file for the hive child class 

*/
#include<iostream>
#include"house.h"
#include"hive.h"
using namespace std;

void hive::input(istream& ins){
        
        if(&ins == &cin) {
            house_type = "hive"; house::input(ins); cout << "Enter the color of bee honey" << endl; ins >> honey_color; 
                            cout << "Enter the number of bees" << endl; ins >> num_of_bees;
        } else {
            house_type = "hive"; house::input(ins);  ins >> honey_color; ins >> num_of_bees;
        }
                            
}

void hive::output(ostream& outs){
        
        if(&outs == &cout) {
            house::output(outs); outs << " Honey Color: " << honey_color << " Bee Number: " << num_of_bees << endl;
        } else {
            house::output(outs); outs << " " << honey_color << " " << num_of_bees << endl;
        }
    
    }
