#include<iostream>
#include<string>
#include<fstream>
#include"Sequence.h"
using namespace std;

int main()
{
  Sequence DNA("/data/dna.txt");
  
  cout<<"The length of the sequence is: "<<DNA.length()<<endl;
  
  cout<<"The number of 'A' is: "<<DNA.numberOf('A')<<endl;
  cout<<"The number of 'T' is: "<<DNA.numberOf('T')<<endl;
  cout<<"The number of 'C' is: "<<DNA.numberOf('C')<<endl;
  cout<<"The number of 'G' is: "<<DNA.numberOf('G')<<endl;

  
  cout<<"The longest consecutive aequence is: "<<DNA.longestConsecutive()<<endl;
  
  cout<<endl;
 
  cout<<"The longest repeat sequence is: "<<DNA.longestRepeated()<<endl;

  return 0;
} 
