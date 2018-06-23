#include<iostream>
#include<string>
#include<fstream>
#include"Squence.h"
using namespace std;

Sequence::Sequence (string fname)
{  
   ifstream inF (fname);
   int i=0;
   string* s;
   if (!inF)
   { 
     ceer<<"File could not be opened"<<endl;
     exit(EXIT_FAILURE);  
   }
   while(getline(inF,s[i])
   {
     i++;
   }
}

int Sequence::length ()
{
   Sequence(fname);
   len=s.length();
   return len;
}

int Squence::numberOf(char base)
{
  int a,t,c,g=0;
  while((s=getline(inF)!=EOF)
  {
     switch(s)
     {
       case'A':
         ++a;
         break;
       case'T':
         ++t;
         break;
       case'C':
         ++c;
         break;
       case'G':
         ++g;
         break;
       default:
         break;
     }
  }
  switch(base)
  {
    case'A':
      number=a;
      break;
    case'T':
      number=t;
      break;
    case'C':
      number=c;
      break;
    case'G':
      number=g;
      break;
    default:
      break;
  }
  return number;
}

string Sequence::longestConsecutive ()
{
  length ();
  int pos=0;
  int count=1;
  int longest pos=0;
  int longestcount=1;

  for(int i=1;i<len;i++)
  {
     if(s[i]==s[longestpos])
       longestcount++;
     else
     {
       if(longestcount>count)
       {
         count=longestcount;
         pos=longestpos;
       }
       longestcount=1;
       longestpos=i;
     }

  }
}

string Sequence::longestRepeated ()
{
}
