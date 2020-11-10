#include "util.h"
#include <string>
#include <iostream>
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
using namespace std;

//Returns a random element of the given string vector
string randomElement(vector<string> input)
{
    cout<<"calling randomElement\n";
    srand(time(NULL));
    int gen = rand();
    
    int index = ( gen % (input.size()+1) );
    return input[index];
}

//Returns the sum of the given double vector
double sum(vector<double> input)
{
    int i = 0;
    double sum=0;
    while(i<input.size())
    {
        sum+=input[i];
        i++;
    }
    return sum;
}

//Returns the average of the given double vector
double avg(vector<double> input)
{
   return (sum(input)/input.size());
}

//Returns the lowest value of the given double vector
double lowest(vector<double> input)
{
    int i = 0;
    double lowest = ARBITRARILYHIGHNUMBER;
    while(i<input.size())
    {
        if(input[i]<lowest)
        {
            lowest=input[i];
        }
        i++;
    }
    return lowest;
}

//Converts a string's casing to camelCase
string camelCase(string &input)
{
    int i = 0;
    string toReturn="";

    while(i<input.length())
    {
        if(i>0)
        {
            if(input[i]!=' ')
            {
                if(input[i-1]==' ')
                {
                    toReturn += toupper(input[i]);
                }
                else
                {
                    toReturn += input[i];
                }
                
            }
        }
        else if(i==0)
        {
            toReturn += tolower(input[0]);
        }
        i++;
    }
    return toReturn;
}
