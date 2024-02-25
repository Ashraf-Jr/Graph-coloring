#include "CN.h" 
#include<iostream> 
using namespace std; 
 
CN::CN() 
{ 
 cn = 0; 
} 
CN::~CN() 
{ 
 cout << "\nDestructor is called\n"; 
} 
int CN::search(int size, int counter, int ref, int compare, int relations[][2]) 
{ 
 counter++; 
 for (int i = 0; i < size; i++) 
 { 
  if (relations[i][1] == ref || relations[i][0] == compare) 
  { 
   if (relations[i][1] == ref || relations[i][1] == compare) 
   { 
    counter++; 
     
   } 
  } 
 
 } 
 return(counter); 
} 
int CN::Compare(int color1, int color2) 
{ 
 int counter = 0; 
 if (color1 == color2) 
  counter++; 
 return(counter); 
 
} 
int CN::getColour2(int size, int colours[][2], int relations[][2]) 
{ 
 int color2; 
 for (int i = 0; i < size; i++) 
 { 
  for (int z = 0; z < size; z++) 
  { 
   if (colours[z][0] == relations[i][1]) 
   { 
    color2 = colours[z][1]; 
    return (color2); 
   } 
 
  } 
 } 
 
} 
 
int CN::getColour1(int size, int colours[][2], int relations[][2]) 
{ 
 
 int color1; 
 for (int i = 0; i < size; i++) 
 { 
  for (int z = 0; z < size; z++) 
  { 
   if (colours[z][0] == relations[i][0]) 
   { 
    color1 = colours[z][1]; 
    return (color1); 
   } 
  } 
 } 
 
} 