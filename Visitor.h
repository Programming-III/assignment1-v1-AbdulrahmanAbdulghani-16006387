#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>

using namespace std;
class Visitor{
    private: 
    string visitorName;
    int ticketsBought;
    
    public: 
    Visitor(){
        visitorName = "Abdulrahman";
        ticketsBought = 0;
    }
    
    Visitor(string s, int t){
        visitorName = s;
        ticketsBought = t;
    }
    
    ~Visitor() {}
    
    void displayInfo(){
        cout << "Visitor Name: " << visitorName << endl;
        cout << "Tickets Bought" << ticketsBought << endl;
    }
};








#endif
