#include "coutFunc.hpp"
#include <iostream>

namespace gl
{
	void coutFunc(int string, int column, int matrix[100][100])
	{
		for (int i = 0; i < string; i++)
		{
			for (int j = 0; j < column; j++)
				std::cout << matrix[i][j] << "\t";
			std::cout << std::endl;
		}
	}
}