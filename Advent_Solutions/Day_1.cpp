// DumbTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void loadData(vector<int>& right, vector<int>& left);
void sortData(vector<int>& Data);
int findTotalDiff(vector<int> right, vector<int> left);


int main()
{
    vector<int> right, left;
    loadData(right, left);
    sortData(right);
    sortData(left);
    int value = findTotalDiff(right, left);

    cout << "total value = ";
    cout << value;
}

void loadData(vector<int>& right, vector<int>& left)
{
    string line;
    int num1, num2;
    fstream input("Day_1_input.txt");

    while (input >> num1 >> num2) {
        right.push_back(num1);
        left.push_back(num2);
    }
}

void sortData(vector<int>& Data)
{
    int newSwap = 1;
    int oldSwap = 0;
    int swap = 0;

    while (!(newSwap == 0))
    {
        oldSwap = newSwap;
        newSwap = 0;
        for (int i = 0; i < Data.size()-1; i++)
        {
            if (Data[i] > Data[i + 1]) {
                swap = Data[i];
                Data[i] = Data[i + 1];
                Data[i + 1] = swap;
                newSwap++;
            }
        }
    }
}

int findTotalDiff(vector<int> right, vector<int> left)
{
    int total = 0;
    for(int i = 0; i < right.size(); i++)
    {
        total += abs((right[i] - left[i]));
    }
    return total;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
