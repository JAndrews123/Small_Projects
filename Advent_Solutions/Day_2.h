#pragma once

#include <iostream>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Day_2 {

public:
	Day_2();
	~Day_2();

	void compute();

private:
	void loadData();
	void evalSafety();
	vector<int> levels;
};