/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Budget.cpp
 * Author: Shayon
 * 
 * Created on August 12, 2016, 5:12 PM
 */

#include "Budget.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>


using namespace std;

Budget::Budget() {
    housing = 0.0;
    utilities = 0.0;
    household = 0.0;
    transportation = 0.0; 
    food = 0.0; 
    medical = 0.0;
    insurance = 0.0;
    entertainment = 0.0;
    clothing = 0.0;
    misc = 0.0;
}

Budget::Budget(const Budget& orig) {
}

Budget::~Budget() {
}

void Budget::buildbudget (std::ostream& outs, std::istream& ins){
    if (outs == cout and ins == cin) {
        outs << "Enter Housing Budget: " << endl;
        ins >> this->housing;
        outs << "Enter Utilities Budget: "<< endl;
        ins >> this->utilities;
        outs << "Enter Household Budget: "<< endl;
        ins >> this->household;
        outs << "Enter Transportation Budget: "<< endl;
        ins >> this->transportation;
        outs << "Enter Food Budget: " << endl;
        ins >> this->food;
        outs << "Enter Medical Budget: " << endl;
        ins >> this->medical;
        outs << "Enter Insurance Budget: " << endl;
        ins >> this->insurance;
        outs << "Enter Entertainment Budget: " << endl;
        ins >> this->entertainment;
        outs << "Enter Clothing Budget: " << endl;
        ins >> this->clothing;
        outs << "Enter Miscellaneous Budget: " << endl;
        ins >> this->misc;
    }
} 

void Budget::datafileout (ostream& fouts) {
    fouts << housing << endl;
    fouts << food << endl;
    fouts << medical << endl; 
    fouts << insurance << endl;
    fouts << entertainment << endl;
    fouts << clothing << endl;
    fouts << misc << endl;        
    
}

void Budget::retreivecontent (istream& fins) {
    fins >> housing;
    fins >> food;
    fins >> medical; 
    fins >> insurance;
    fins >> entertainment;
    fins >> clothing;
    fins >> misc;
}

void Budget::upamount(int dec, double spent) {
    switch (dec) {
        case 1:
            if (this->housing < spent) {
                cout << "You have over spent!" << endl; 
                this->housing = this->housing - spent;
                cout << "\n"; 
                cout << "You now have $" << this->housing << " of available housing allowance." << endl; 
            }
            else {
                this->housing = this->housing - spent;
                cout << "\n";
                cout << "You now have $" << this->housing << " of available housing allowance" << endl;
            }
            break;
        case 2:
            if (this->food < spent) {
                cout << "You have over spent!" << endl;
                this->food = this->food - spent;
                cout << "\n";
                cout << "You now have $" << this->food << " of available food allowance." << endl;
            }
            else {
                this->food = this->food - spent;
                cout << "\n";
                cout << "You now have $" << this->food << " of available food allowance" << endl;
                
            }
            break;
        case 3:
            if (this->medical < spent) {
                cout << "You have over spent!" << endl;
                this->medical = this->medical - spent;
                cout << "\n";
                cout << "You now have $" << this->medical << " of available medical allowance." << endl;
            }
            else {
                this->medical = this->medical - spent;
                cout << "\n";
                cout << "You now have $" << this->medical << " of available medical allowance" << endl;
                
            }            
            break;
        case 4:
            if (this->insurance < spent) {
                cout << "You have over spent!" << endl;
                this->insurance = this->insurance - spent;
                cout << "\n";
                cout << "You now have $" << this->insurance << " of available insurance allowance." << endl;
            }
            else {
                this->insurance = this->insurance - spent;
                cout << "\n";
                cout << "You now have $" << this->insurance << " of available insurance allowance" << endl;
                
            }
            break;
        case 5:
            if (this->entertainment < spent) {
                cout << "You have over spent!" << endl;
                this->entertainment = this->entertainment - spent;
                cout << "\n";
                cout << "You now have $" << this->entertainment << " of available entertainment allowance." << endl;
            }
            else {
                this->entertainment = this->entertainment - spent;
                cout << "\n";
                cout << "You now have $" << this->entertainment << " of available entertainment allowance" << endl;
                
            }
            break;
        case 6:
            if (this->clothing < spent) {
                cout << "You have over spent!" << endl;
                this->clothing = this->clothing - spent;
                cout << "\n";
                cout << "You now have $" << this->clothing << " of available clothing allowance." << endl;
            }
            else {
                this->clothing = this->clothing - spent;
                cout << "\n";
                cout << "You now have $" << this->clothing << " of available clothing allowance" << endl;
                
            }
            break;
        case 7:
            if (this->misc < spent) {
                cout << "You have over spent!" << endl;
                this->misc = this->misc - spent;
                cout << "\n";
                cout << "You now have $" << this->misc << " of available miscellaneous allowance." << endl;
            }
            else {
                this->misc = this->misc - spent;
                cout << "\n";
                cout << "You now have $" << this->misc << " of available miscellaneous allowance" << endl;
                
            }
            break;
            
            
    }
}


void Budget::final(int choice) {
    switch (choice) {
        case 1:
        {   cout << "\n"; 
            cout << "Housing Budget is $" << this->housing << endl; 
            cout << "Food Budget is $" << this->food << endl; 
            cout << "Medical Budget is $" << this->medical << endl; 
            cout << "Insurance Budget is $" << this->insurance << endl; 
            cout << "Entertainment Budget is $" << this->entertainment << endl; 
            cout << "Clothing Budget is $" << this->clothing << endl; 
            cout << "Miscellaneous Budget is $" << this->misc << endl; 
            int total_budget = this->housing + this->food + this->medical + this->insurance + this->entertainment + this->clothing + this->misc;
            cout << "Total Budget = $" << total_budget;
            cout << "\n";
            break;
        }
        case 2: 
            cout << "\n";
            cout << "Housing Budget is currently = $" << this->housing << endl;
            cout << "Please Input New Housing Budget" << endl; 
            cin >> this->housing; 
            break;
        case 3:
            cout << "\n";
            cout << "Food Budget is currently = $" << this->food << endl;         
            cout << "Please Input New Food Budget" << endl; 
            cin >> this->food;            
            break;
        case 4:
            cout << "\n";
            cout << "Medical Budget is currently = $" << this->medical << endl;           
            cout << "Please Input New Medical Budget" << endl; 
            cin >> this->medical; 
            break;
        case 5:
            cout << "\n";
            cout << "Insurance Budget is currently = $" << this->insurance << endl;            
            cout << "Please Input New Insurance Budget" << endl;
            cin >> this->insurance; 
            break;
        case 6: 
            cout << "\n";
            cout << "Entertainment Budget is currently = $" << this->entertainment << endl;           
            cout << "Please Input New Entertainment Budget" << endl; 
            cin >> this->entertainment;
            break;
        case 7:
            cout << "\n";
            cout << "Clothing Budget is currently = $" << this->clothing << endl;            
            cout << "Please Input New Clothing Budget" << endl; 
            cin >> this->clothing;
            break;
        case 8: 
            cout << "\n";
            cout << "Miscellaneous Budget is currently = $" << this->misc << endl;            
            cout << "Please Input New Miscellaneous Budget" << endl; 
            cin >> this->misc;
            break;
        case 9:
            
            break;
                   
    }
}

    
    
    
