/**
* @file Lab 10.1
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Dagan Poulin
* @assignment Lab 10.1
* @date 11/9/2020
* @credits
* 
*/

//Multifile project criteria met
#include <iostream>
#include <vector>
#include <string>
#include "util.h"

using namespace std;

int main()
{
    vector<string> stringList; //Vector initialized in main
    
    stringList.push_back("A series of unique");
    stringList.push_back("Strings that are");
    stringList.push_back("Being used to demonstrate");
    stringList.push_back("They are all unique");
    stringList.push_back("Objects");

    int i = 0;
    cout<<"Demonstrating a vector of 5 strings:\n\n";
    while(i<stringList.size())
    {
        cout<<"Vector of strings, position "<<i<<": "<<stringList[i]<<endl; //List all strings
        i++;
    }
    cout<<"\nReturning a random element of the string list: "<<randomElement(stringList)<<endl<<endl<<endl; //RNG is initialized in randomElement, randomElement called, selected & returned

    vector<double> doubleList; //Vector initialized in main
    i=0;
    doubleList.push_back(0.345345345345); 
    doubleList.push_back(0.865135456871);
    doubleList.push_back(0.907468413540);
    doubleList.push_back(0.978968357832);
    doubleList.push_back(0.006565988787);
    cout<<"Demonstrating a vector of 5 doubles:\n\n";

    while(i<stringList.size())
    {
        cout<<"Vector of doubles, position "<<i<<": "<<doubleList[i]<<endl; //List all doubles
        i++;
    }
    cout<<"\nSum: "<<sum(doubleList)<<"\nAvg: "<<avg(doubleList)<<"\nLowest: "<<lowest(doubleList)<<"\n\n"; //Sum, Avg, Lowest criteria met


    string multiWord = "A little bird with a yellow bill"; //camelCase criteria met, string reference used in function declaration, srint is passes and modified by reference, algorithm is correct

    cout<<multiWord<<" -----> "<<camelCase(multiWord)<<endl; //Demonstration of camelCase algorithm.

    return EXIT_SUCCESS; //Function end
}
