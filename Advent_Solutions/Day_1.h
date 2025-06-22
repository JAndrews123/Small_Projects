#pragma once

#include <iostream>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Day_1 {

public:
	Day_1();
	~Day_1();

	void compute();

private:
	void loadData(vector<int>& right, vector<int>& left);
	void sortData(vector<int>& Data);
	int findTotalDiff(vector<int> right, vector<int> left);

	vector<int> right, left;
};
