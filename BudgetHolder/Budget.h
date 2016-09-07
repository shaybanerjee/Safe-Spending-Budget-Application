/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Budget.h
 * Author: Shayon
 *
 * Created on August 12, 2016, 5:12 PM
 */

#ifndef BUDGET_H
#define BUDGET_H


#include <iostream>
using namespace std;
class Budget {
public:
    Budget();
    Budget(const Budget& orig);
    virtual ~Budget();
    double get_housing () const{return housing;}
    double get_utilities() const{return utilities;}
    double get_houshold () const {return household;}
    double get_transportation() const {return transportation;}
    double get_food()const{return food;}
    double get_medical() const {return medical;}
    double get_insurance () const {return insurance;}
    double get_entertainement () const {return entertainment;}
    double get_clothing () const{return clothing;}
    double get_misc () const {return misc;}
    void buildbudget (std::ostream& outs, std::istream& ins);
    void datafileout (ostream& fouts);
    void retreivecontent (istream& fins); 
    void upamount(int dec, double spent);
    void final(int choice); 
private:
    double housing;
    double utilities;
    double household;
    double transportation; 
    double food;
    double medical; 
    double insurance;
    double entertainment;
    double clothing;
    double misc;
    

};
std::ostream& operator << (std::ostream& outs, Budget &tmp);
std::istream& operator >> (std::istream& ins, Budget &tmp); 
#endif /* BUDGET_H */

