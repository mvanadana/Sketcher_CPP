# Assignment 8
##  Algorithms and Iterators Workshop
### Overview
The ReadLines method in the Reader class in /Assignment8/src/Reader.cpp is designed to analyze a file, counting the number of lines and characters within it.
### Function 
1.ReadLines definition is defined in /Assignment8/headers/Reader.h
2.ReadLines implementation is in /Assignment8/src/Reader.cpp

### Explanation
1. The method opens a file stream (ifstream) using the provided file path (mFilePath).
2. If the file is successfully opened, it reads the entire content into a string in_words.
3. It then calculates the number of lines by counting the newline characters (\n) in the string.
4. Additionally, it determines the total number of characters in the file using the size() method of the string.
