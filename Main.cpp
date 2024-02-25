#include <iostream> 
#include<string> 
#include "CN.h" 
using namespace std; 
 
int main() 
{ 
 CN chrom; 
 
 const int capacity = 100; 
 
 int  numOfObjects, choice, ob1, ob2; 
 string type="Subject"; 
  
 cout << "Welcome to Schedule Maker!!\n" << endl; 
 cout << "Please enter the number of  Subjects" << endl; 
 cin >> numOfObjects; 
 string* objects = new string[numOfObjects]; 
 int ref, compare, counter = 1, color1, color2; 
 
 cin.ignore(); 
 cout << "please fill your Subjects list" << endl; 
 for (int i = 0; i < numOfObjects; i++) 
 { 
  cout << "Subject " << (i + 1) << " "; 
  getline(cin, objects[i]); 
  cout << endl; 
 } 
 cout << "please fill your Subjects list" << endl; 
 
 int relations[capacity][2] = { 0 }; 
 int colours[capacity][2] = { 0 }; 
 int size = 0; 
 
 cout << "please enter 1 to add a relation between the " << type << " and 0 to end 
adding " << endl; 
 cin >> choice; 
 while (choice != 0) 
 
 { 
  if (choice == 1) 
  { 
   size++; 
   cout << "Enter the common between Subjects with numbers" << endl << 
endl; 
   cout << "First Subject number "; 
   cin >> ob1; 
   cout << endl << "Second Subject number"; 
   cin >> ob2; 
   if (ob1 > numOfObjects || ob1<1 || ob2 > numOfObjects || ob2 < 1) 
   { 
    cout << "\nInvalid relation number\n"; 
   } 
   else 
   { 
    relations[size - 1][0] = ob1; 
    relations[size - 1][1] = ob2; 
   } 
 
 
  } 
  else if (choice == 0) 
  { 
    
   cout << "Thanks for entering data\n" << endl; 
  } 
  else 
  { 
   cout << "INVALID CHOICE " << endl << "Please try valid choice " << 
endl; 
 
  } 
 
  cout << "please enter 1 to add a relation between  the " << type << " and 0 
to end adding " << endl; 
  cin >> choice; 
 }; 
 if (size==0) 
 { 
  size++; 
  cout << "Thanks for entering data\n" << endl; 
  cout << "\nCromatic number is: 1\n"; 
  exit; 
 } 
 else 
 { 
 
  for (int i = 0; i < size; i++) 
   colours[i][0] = i + 1; 
 
  cout << chrom.Compare(chrom.getColour1(size, colours, relations), 
chrom.getColour2(size, colours, relations)); 
 
  for (int i = 0; i < size; i++) 
  { 
   for (int z = 0; z < size; z++) 
   { 
    if (colours[z][0] == relations[i][0]) 
    { 
     color1 = colours[z][1]; 
     compare = z; 
    } 
   } 
  } 
 
  for (int i = 0; i < size; i++) 
  { 
   for (int z = 0; z < size; z++) 
   { 
    if (colours[z][0] == relations[i][1]) 
    { 
     color2 = colours[z][1]; 
     ref = z; 
    } 
   } 
  } 
  cout << "\nCromatic number is: " << chrom.search(size, counter, ref, 
compare, relations) << endl; 
 } 
} #include <iostream> 
#include<string> 
#include "CN.h" 
using namespace std; 
 
int main() 
{ 
 CN chrom; 
 
 const int capacity = 100; 
 
 int  numOfObjects, choice, ob1, ob2; 
 string type="Subject"; 
  
 cout << "Welcome to Schedule Maker!!\n" << endl; 
 cout << "Please enter the number of  Subjects" << endl; 
 cin >> numOfObjects; 
 string* objects = new string[numOfObjects]; 
 int ref, compare, counter = 1, color1, color2; 
 
 cin.ignore(); 
 cout << "please fill your Subjects list" << endl; 
 for (int i = 0; i < numOfObjects; i++) 
 { 
  cout << "Subject " << (i + 1) << " "; 
  getline(cin, objects[i]); 
  cout << endl; 
 } 
 cout << "please fill your Subjects list" << endl; 
 
 int relations[capacity][2] = { 0 }; 
 int colours[capacity][2] = { 0 }; 
 int size = 0; 
 
 cout << "please enter 1 to add a relation between the " << type << " and 0 to end 
adding " << endl; 
 cin >> choice; 
 while (choice != 0) 
 
 { 
  if (choice == 1) 
  { 
   size++; 
   cout << "Enter the common between Subjects with numbers" << endl << 
endl; 
   cout << "First Subject number "; 
   cin >> ob1; 
   cout << endl << "Second Subject number"; 
   cin >> ob2; 
   if (ob1 > numOfObjects || ob1<1 || ob2 > numOfObjects || ob2 < 1) 
   { 
    cout << "\nInvalid relation number\n"; 
   } 
   else 
   { 
    relations[size - 1][0] = ob1; 
    relations[size - 1][1] = ob2; 
   } 
 
 
  } 
  else if (choice == 0) 
  { 
    
   cout << "Thanks for entering data\n" << endl; 
  } 
  else 
  { 
   cout << "INVALID CHOICE " << endl << "Please try valid choice " << 
endl; 
 
  } 
 
  cout << "please enter 1 to add a relation between  the " << type << " and 0 
to end adding " << endl; 
  cin >> choice; 
 }; 
 if (size==0) 
 { 
  size++; 
  cout << "Thanks for entering data\n" << endl; 
  cout << "\nCromatic number is: 1\n"; 
  exit; 
 } 
 else 
 { 
 
  for (int i = 0; i < size; i++) 
   colours[i][0] = i + 1; 
 
  cout << chrom.Compare(chrom.getColour1(size, colours, relations), 
chrom.getColour2(size, colours, relations)); 
 
  for (int i = 0; i < size; i++) 
  { 
   for (int z = 0; z < size; z++) 
   { 
    if (colours[z][0] == relations[i][0]) 
    { 
     color1 = colours[z][1]; 
     compare = z; 
    } 
   } 
  } 
 
  for (int i = 0; i < size; i++) 
  { 
   for (int z = 0; z < size; z++) 
   { 
    if (colours[z][0] == relations[i][1]) 
    { 
     color2 = colours[z][1]; 
     ref = z; 
    } 
   } 
  } 
  cout << "\nCromatic number is: " << chrom.search(size, counter, ref, 
compare, relations) << endl; 
 } 
} 