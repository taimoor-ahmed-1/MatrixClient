#include "stdafx.h"
#include "MatrixLib.h"
#include<vector>
#include<iostream>
using namespace std;

std::vector<std::vector<int>> matrixAdd(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b)
{
	std::vector<std::vector<int>> sum = vector<vector<int>>();
	std::vector<int>temp = vector<int>();
	if (a.size() != b.size() || a[0].size() != b[0].size())
	{
		cerr << "Unequal vectors!" << endl;
		return sum;
	}
	try{
		for (int i = 0; i < a.size(); ++i){
			for (int j = 0; j < b[0].size(); ++j)
			{
				temp.push_back(0);
			}
			sum.push_back(temp);
			temp.clear();
		}

		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < a[0].size(); j++)
			{
				sum[i][j] = a[i][j] + b[i][j];
			}
		}
	}
	catch (exception e)
	{
		cerr << e.what() << endl;
	}

	return sum;
}

std::vector<std::vector<int>> matrixSub(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b)
{
	std::vector<std::vector<int>> sub = vector<vector<int>>();
	std::vector<int>temp = vector<int>();
	if (a.size() != b.size() || a[0].size() != b[0].size())
	{
		cerr << "Unequal vectors!" << endl;
		return sub;
	}
	
	try{
		for (int i = 0; i < a.size(); ++i){
			for (int j = 0; j < b[0].size(); ++j)
			{
				temp.push_back(0);
			}
			sub.push_back(temp);
			temp.clear();
		}

		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < a[0].size(); j++)
			{
				sub[i][j] = a[i][j] - b[i][j];
			}
		}
	}
	catch (exception e)
	{
		cerr << e.what() << endl;
	}

	return sub;
}