// PointerExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "vector"

using namespace std;

/* This prints nTimes "sex" on the screen */
void add(int n, int nTimes, vector<int> vec) {

	// This is the loop for printing the input
	for (int i = 0; i < nTimes; i++)
	{
		vec.push_back(n);
	}

	// TODO: Print the contents of the vector
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
}

int main()
{
	int a = 0;

	vector<int> vec;
	vec.push_back(-17);
	vec.push_back(1);
	add(69, 100, vec);

	cin >> a;
    return 0;
}

