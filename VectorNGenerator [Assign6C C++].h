//YUNPENG LING
//CS 52, Section 4118
//Assignment #5, Problem #C


//This program use user defined generate to fill an int vector

#include <algorithm>
#include <iostream>
#include<vector>




//Setup the generator function 
int assignValue(){
    
 
   static int i=30;
   return --i;    
}



int main()
{
    
    
    //Create an int type vector of size 10
    std::vector<int> IntVec(10);
    
    
    //Call generator function to fill the vector
    std::generate(IntVec.begin(), IntVec.end(), assignValue);
    
    
    //Use ranger-based for loop to output vector content
    std::cout<<"Here the content of this int vector: ";
    for(auto i : IntVec)
    {
        std::cout<<i<<" ";
    }
    
    
    
    return 0;
    
    }