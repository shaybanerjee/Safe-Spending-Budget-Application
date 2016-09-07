/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shayon
 *
 * Created on August 12, 2016, 5:09 PM
 */

#include <cstdlib>
#include "Budget.h"
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

/*
 * 
 */
int choice(); 
int menu();


int main(int argc, char** argv) {
    string filename = "budgetDatafile.txt";
    ifstream filein (filename.c_str());
    if (!filein.fail()){
        Budget oldbud; 
        oldbud.retreivecontent (filein);        
        double spent;
        cout << "Please Select one of the following: " << endl;
        cout << "\n";
        int decision = choice(); 
        cout << "\n";
        cout << "Enter amount spent: " << endl; 
        cin >> spent;
        oldbud.upamount(decision, spent); 
        int final_decision;
        while (final_decision != 9) {
            final_decision = menu(); 
            oldbud.final(final_decision); 
        }
    }
    else {
        cout << "A new datafile has been created to store your budget." << endl;
        ofstream new_data_file(filename.c_str());
        cout << "Please fill in the following information: " << endl;
        Budget *newbud = new Budget();
        newbud->buildbudget(cout, cin); 
        newbud->datafileout(new_data_file);
        delete newbud; 
           
        
    } 
    return 0;
}

int choice () {
    int numbstore; 
    cout << "1. Update Housing Budget." << endl; 
    cout << "2. Update Food Budget." << endl;
    cout << "3. Update Medical Budget." << endl; 
    cout << "4. Update Insurance Budget." << endl; 
    cout << "5. Update Entertainment Budget." << endl; 
    cout << "6. Update Clothing Budget" << endl; 
    cout << "7. Update Miscellaneous" << endl;
    cin >> numbstore;
    return numbstore;
     
}

int menu () {
    int numbstore; 
    cout << "\n";
    cout << "Menu: " << endl;

    cout << "1. View Budget Details." << endl; 
    cout << "2. Change Housing Budget" << endl; 
    cout << "3. Change Food Budget" << endl;
    cout << "4. Change Medical Budget" << endl;
    cout << "5. Change Insurance Budget" << endl;
    cout << "6. Change Entertainment Budget" << endl;
    cout << "7. Change Clothing Budget" << endl;
    cout << "8. Change Miscellaneous Budget" << endl;
    cout << "9. Quit" << endl; 
    cin >> numbstore;
    return numbstore;
}