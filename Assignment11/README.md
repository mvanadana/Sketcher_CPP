# Assignment 11
## Maps
### Overview
Update LinesMap Method in Reader Class
The LinesMap method is a recent addition to the Reader class, designed to facilitate line-level mapping and analysis within files.
### Explanation
1.The LinesMap method operates within the Reader class to process file content on a line-by-line basis.
2.This function is intended for mapping or performing analysis at the line level within the file.
3.Details of the implementation can vary based on specific mapping or analysis requirements.
### Function File
1.LinesMap is defined in /Assignment11/headers/Reader.h.
2.LinesMap is implementetd in /Assignment11/src/Reader.cpp

### Testing in main
int main()
{

    Reader reader("resources/cubeModel.stl");
     for (const auto& pair : reader.LinesMap()) {
        std::cout << "Line " << pair.first << ": " << pair.second << std::endl;
    }
   
    return 0;
}
