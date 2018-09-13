#include "stdafx.h"
#include "MatrixLib.h"
#include<vector>
#include<iostream>

using namespace std;

vector<vector<int>> matrixTranspose(vector<vector<int>> matrix)
{
	vector<vector<int>> trans = vector<vector<int>>();
	vector<int> temp = vector<int>();
	try{
		for (int i = 0; i < matrix[0].size(); i++)
		{
			for (int j = 0; j < matrix.size(); j++)
			{
				temp.push_back(0);
			}
			trans.push_back(temp);
		}
		for (int i = 0; i < matrix.size(); i++)
		{
			for (int j = 0; j < matrix[0].size(); j++)
			{
				trans[j][i] = matrix[i][j];
			}
		}
	}
	catch (exception e)
	{
		cerr << e.what() << endl;
		return trans;
	}

	return trans;

}