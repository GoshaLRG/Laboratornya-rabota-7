#include "readFunc.hpp"
#include <iostream>

namespace gl
{
	void readFunc(int string, int column, int matrix[100][100])
	{
		for (int i = 0; i < string; i++)
			for (int j = 0; j < column; j++)
				std::cin >> matrix[i][j];
	}
}
