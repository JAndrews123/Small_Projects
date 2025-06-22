

#include "Day_2.h"

Day_2::Day_2() {
    //do nothing
}

Day_2::~Day_2() {
    //do nothing
}

void Day_2::compute()
{
    loadData();
}

void Day_2::loadData()
{
    fstream input("Day_2_input.txt");

    string currLine;
    int ittr = 0;
    while (getline(input, currLine))
    {
        istringstream line(currLine);
        int temp;

        while (line >> temp)
        {
            levels.push_back(temp);
            ittr++;
        }

        evalSafety();
    }
}

void Day_2::evalSafety() 
{
    for (int i = 1; i < levels.size(); i++)
    {

    }
}