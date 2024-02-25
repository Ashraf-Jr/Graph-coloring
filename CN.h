#pragma once 
 
#include<iostream> 
using namespace std; 
 
class CN 
{ 
private : 
 int cn; 
public: 
 CN(); 
 ~CN(); 
 int search(int size, int counter, int ref, int compare, int array[][2]); 
int Compare(int color1, int color2); 
int getColour2(int size, int colours[][2], int relations[][2]); 
int getColour1(int size, int colours[][2], int relations[][2]); 
};