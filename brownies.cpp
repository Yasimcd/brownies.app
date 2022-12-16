// brownies.cpp 
// This program determines how many brownies will fit in a baking pan of a specified size. 
// Yasim Cruz 
#include <iostream> 
using namespace std;

int main()
{   //NEEDED VARIABLES 

   int length = 0,         
          width = 0,          
          panArea,
          largeBrownies,
          smallBrownies,
          largePortion,
          smallPortion;         
   
   // PROMPT FOR AND INPUT THE INFORMATION THE PROGRAM NEEDS TO GET FROM THE USER.
   cout << "Enter baking pan length (in inches): ";
   cin  >> length;
   
   cout << "Enter baking pan width (in inches): ";
   cin  >> width; 
   
   // PERFORM ALL NEEDED COMPUTATIONS AND ASSIGN THE RESULTS TO VARIABLES.
   largeBrownies = 2 * 2;
   smallBrownies = 1 * 1;
   panArea = length * width; 
   largePortion = panArea/largeBrownies;
   smallPortion = panArea/smallBrownies; 
   
   //DISPLAY THE REQUESTED INFORMATION.
   cout << "A " << length << " x " << width << " inch pan can hold ";
   cout << smallPortion << " small brownies " << "or ";
   cout << largePortion << " large brownies." << endl;
   
   return 0;
}
