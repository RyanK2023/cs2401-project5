#include<iostream>
#include<list>
#include<fstream>
#include"nest.h"
#include"dam.h"
#include"cave.h"
#include"burrow.h"
#include"hive.h"

int menu();

int main() {
    
    cout << "Welcome to Animal Home Construction Inc's House Buying Software!" << endl;

    list<house*>houses;
    list<house*>::const_iterator i;
    string type = " ";
    ifstream ins;
    ins.open("houses.txt");
    if(ins.fail()) {
        cout << "Could not find txt file, starting fresh" << endl;
    }
    
    while(!ins.eof()) {
        ins >> type;
        if (type == "nest") {
            nest *tmp = new nest;
            tmp->input(ins);
            houses.push_back(tmp);
        } else if (type == "dam") {
            dam *tmp = new dam;
            tmp->input(ins);
            houses.push_back(tmp);
        } else if (type == "cave") {
            cave *tmp = new cave;
            tmp->input(ins);
            houses.push_back(tmp);
        } else if (type == "burrow") {
            burrow *tmp = new burrow;
            tmp->input(ins);
            houses.push_back(tmp);
        } else if (type == "hive") {
            hive *tmp = new hive;
            tmp->input(ins);
            houses.push_back(tmp);
        } else {
            cout << "type not recognized" << endl;
        }
    }
    
    
    ins.close();
    //house *tmp;
    int ch = 0;
    ch = menu();



    while(ch != 7) {
        cout << "Each house has a material, number of exits, location, resident, and two unique features" << endl;

        if(ch == 1) {
            cout << "You have ordered a nest, please enter all base features, a shiny object, and number of eggs" << endl;
            nest *tmp = new nest;
            tmp->input(cin);
            houses.push_back(tmp);
        } else if (ch == 2) {
            cout << "You have ordered a dam, please enter all base features, type of water body, and the height of the water in the dam" << endl;
            dam *tmp = new dam;
            tmp->input(cin);
            houses.push_back(tmp);
        } else if (ch == 3) {
            cout << "You have ordered a cave, please enter all base features, type of bed, and choice of edible animal carcass" << endl;
            cave *tmp = new cave;
            tmp->input(cin);
            houses.push_back(tmp);
        } else if (ch == 4) {
            cout << "You have ordered a burrow, please enter all base features, depth of the burrow, and number of tunnels" << endl;
            burrow *tmp = new burrow;
            tmp->input(cin);
            houses.push_back(tmp);
        } else if (ch == 5) {
            cout << "You have ordered a hive, please enter all base features, color of honey, and number of bees" << endl;
            hive *tmp = new hive;
            tmp->input(cin);
            houses.push_back(tmp);
        } else if(ch == 6) {
            cout << endl;
            for (i = houses.begin(); i != houses.end(); ++i) {
                (*i)->output(cout);
	        }
            cout << endl;
        } else {
            //quit the program 
        }


    ch = menu();
    }

    ofstream outs;
    outs.open("houses.txt");
    for (i = houses.begin(); i != houses.end(); ++i) {
        (*i)->output(outs);
	}

}

int menu() {
    int choice;

    cout << "Enter a number between 1 and 7" << endl;
    cout << "Each house has a material, number of exits, location, resident, and two unique features" << endl;
    cout << "1: Order a nest, unique features are a shiny object and the ability to add a number of eggs to the nest" << endl;
    cout << "2: Order a dam, unique features are the ability too determine what kind of water to submerge the dam in and how deep the water is" << endl;
    cout << "3: Order a cave, unique features are your choice of bed and you can add an animal carcass to eat" << endl;
    cout << "4: Order a burrow, unique features are the ability to determine how deep the burrow is and the number of tunnels in the burrow" << endl;
    cout << "5: Order a hive, unique features are color of honey and number of bees" << endl;
    cout << "6: View all houses in the list" << endl;
    cout << "7: Save and exit the program" << endl; 

    cin >> choice;
    return choice;
}
