#include<iostream>
#include<string>
#include<fstream>
#include"Sequence.h"
using namespace std;

int main()
{
  char fname;
  char base;
  cin>>fname>>base;
  Sequence DNA;
  DNA.Sequence (fname);
  
  cout<<"The length of the sequence is: ";
  DNA.Getlength ();
  
  cout<<"The number of base is: ";
  DNA.numberOf (base).Getnumber ();
  
  cout<<"The longest consecutive aequence is: "<<endl;
  DNA.longestConsecutive ().GetConsecutive ();
  
  cout<<"The longest repeat sequence is: "<<endl;
  DNA.longestRepeated ().GetRepeated ();
} 
