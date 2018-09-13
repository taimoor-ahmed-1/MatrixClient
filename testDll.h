#pragma once
#ifdef MATRIXLIBRARY_EXPORTS  
#define MATRIXLIBRARY_API __declspec(dllexport)   
#else  
#define MATRIXLIBRARY_API __declspec(dllimport)   
#endif 

namespace MatrixLibrary{
	class Class1
	{
	public:
		/*static MATRIXLIBRARY_API std::vector<std::vector<int>> matrixAdd(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);
		static MATRIXLIBRARY_API std::vector<std::vector<int>> matrixSub(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);
		static MATRIXLIBRARY_API std::vector<std::vector<int>> matrixTranspose(std::vector<std::vector<int>> matrix);
		static MATRIXLIBRARY_API void printVector(std::vector<std::vector <int>> v);
		static MATRIXLIBRARY_API std::vector<std::vector<int>> matrixMultiply(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);
		static MATRIXLIBRARY_API bool checkVectors(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);*/
		static MATRIXLIBRARY_API void Add(int a[][3], int b[][3], int sum[][3], int r, int c);
		static MATRIXLIBRARY_API void Transpose(int r, int c, int a[10][10], int b[10][10]);
		static MATRIXLIBRARY_API void Multiply(int r1, int c1, int r2, int c2, int a[10][10], int b[10][10], int mult[10][10]);
		static MATRIXLIBRARY_API void Sub(int a[][3], int b[][3], int sub[][3], int r, int c);
		//static MATRIXLIBRARY_API void Add(int a[][100], int b[][100], int r, int c);
		//static MATRIXLIBRARY_API void Sub(int a[100][100], int b[100][100], int r, int c);
	};
}
