
#include "stdafx.h"
#include "MatrixLib.h"
#include <iostream>
#include <vector>
using namespace std;

bool checkVectors(vector<vector<int>> a, vector<vector<int>> b){
	if (a[0].size() == b.size())
		return true;
	return false;
}
vector<vector<int>> matrixMultiply(vector<vector<int>> a, vector<vector<int>> b)
{
	vector <vector <int>> c;
	vector<int> temp;
	if (!checkVectors(a, b))
		return c;
	try{
		for (int i = 0; i < a.size(); ++i){
			for (int j = 0; j < b[0].size(); ++j)
			{
				temp.push_back(0);
			}
			c.push_back(temp);
			temp.clear();
		}
		for (int i = 0; i < a.size(); ++i)
		for (int j = 0; j < b[0].size(); ++j)
		for (int k = 0; k < a[0].size(); ++k)
		{
			c[i][j] += a[i][k] * b[k][j];
		}
	}

	catch (exception e)
	{
		cerr << e.what() << endl;
	}
	return c;
}
void printVector(vector<vector <int>> v){
	for (int i = 0; i < v.size(); i++){
		for (int j = 0; j < v[0].size(); j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}