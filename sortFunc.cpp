#include "sortFunc.hpp"
#include <iostream>

namespace gl
{
	int sortFunc(int numStr, int string, int column, int matrix[100][100])
	{
		for (int i = 0; i < string; i++)
		{
			int count = 0;

			for (int j = 0; j < column - 1; j++)
			{
				if (matrix[i][j] == 8)
					count++;
			}

			if (i == numStr)
				return count;
		}
	}

	void sortFunc(int string, int column, int matrix[100][100])
	{
		for (int i = 0; i < string; i++)
		{
			for (int j = 0; j < column - 1; j++)
			{
				if (gl::sortFunc(i, string, column, matrix) > 0)
				{
					if (matrix[i][j] > matrix[i][j + 1])
						std::swap(matrix[i][j], matrix[i][j + 1]);
				} 
			}
		}
	}
}
