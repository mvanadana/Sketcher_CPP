# Assignment 9
## Sequential Containers : List
### Overview
This assignment involves use of sequential containers  list.
### Function File
Reader Class Functions in Sketcher.
File: /Assignment9/src/Reader.cpp

Function Definition: The Reader class in this file is responsible for reading .stl files and extracting data related to triangles.

Reads and stores triangle data from the provided .stl file.
Utilizes a std::list<Triangle> named mTriangles within the triangulation class to store the extracted triangle information.
getPoints() Method:

 Functionality:

Extracts Point3D data from the file and stores it in a vector of points.
The extracted points are stored in a std::list<Point3D> passed as a reference parameter points.
Writer Class Function in Sketcher.
File: /Assignment9/src/Reader.cpp


Function Definition: The Writer class in this file contains a write() function responsible for writing points into a file specified as an argument.

Functionality:

The write() function, within the Writer class, writes the provided std::list<Triangle>& triangles to a file specified by filePath.
It is used to save points in the given file.


