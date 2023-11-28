#include "../headers/Point3D.h"
#include "../headers/Reader.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <fstream>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;



Reader::Reader(std::string filePath)
{   
    mFilePath=filePath;
    
}

Reader::~Reader()
{

}

void Reader::ReadLines()
{
    std::ifstream wif(mFilePath);
    if (wif) {
       istreambuf_iterator<char> iit{wif};
        istreambuf_iterator<char> eof;
		string in_words{iit, eof};
		
		auto nlines = count(cbegin(in_words), cend(in_words), '\n');
		
		std::cout << "The file contains " << nlines << " lines\n";				
		std::cout << "File contains " << in_words.size() << " characters\n";
	}
    
}
void Reader::getTriangles(std::list<Triangle>& triangles) 
{  
    std::ifstream dataFile;
    dataFile.open(mFilePath);
     
    auto ErrorFile=[&msg = "File error"]() mutable
    {
         std:: string msg = "File not exist, check your file.";
         return msg;
    };
 
    
    
    if (!dataFile.is_open()) { 
        std::cout<<ErrorFile()<<std::endl;
        return ;
    }

    std::string line;

    while (std::getline(dataFile, line)) 
    {
        
        if (line.find("vertex") != std::string::npos) 
        {
            std::istringstream iss(line);
            std::string token;
            double x, y, z;
 
            iss >> token >> x >> y >> z;
        
            Point3D point1(x, y, z);

            std::getline(dataFile,line);
        
            std::istringstream iss1(line);
            iss1 >> token >> x >> y >> z;
            Point3D point2(x, y, z);

            std::getline(dataFile,line);
            
            std::istringstream iss2(line);
            iss2 >> token >> x >> y >> z;
            Point3D point3(x, y, z);
            
            Triangle triangle(point1, point2, point3);
            triangles.push_back(triangle);
        }

    }
    dataFile.close();
}