cmake_minimum_required(VERSION 3.15) 


set(PROJECT_NAME Build)				 		 
project("${PROJECT_NAME}")			 	


set(CMAKE_CXX_STANDARD 17)			 
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
			 

add_executable("${PROJECT_NAME}" main.cpp			 					 
			         coutFunc.cpp
				 coutFunc.hpp
			         findFunc.cpp
			         findFunc.hpp
                 	         readFunc.cpp
			         readFunc.hpp
			         sortFunc.cpp
				 sortFunc.hpp)
