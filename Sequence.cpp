#include<iostream>
#include<string>
#include<string.h>
#include<cstdlib>
#include<fstream>
#include<algorithm>
#include"Sequence.h"
using namespace std;

bool Cmp(char*, char*);

Sequence::Sequence(string fname)
{  
   ifstream inF("/data/dna.txt");
   int i = 0;
   if (!inF)
   { 
     cerr<< "File could not be opened" << endl;
     exit(EXIT_FAILURE);  
   }
}

int Sequence::length()
{
   ifstream inF("/data/dna.txt");
   string ss;
   while ((getline(inF, ss)) && (ss.length() != 0))
   {
     len += ss.length();
     s += ss;
   }
   return len;
}

int Sequence::numberOf(char base)
{
   ifstream inF("/data/dna.txt");
   length();
   char S;
   int a = 0, t = 0, c = 0, g = 0;
   for (int i = 0; i < len; i++)
   {
      while ((S=inF.get())!=EOF)
      {
         switch (S)
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
   }
   switch (base)
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

string Sequence::longestConsecutive()
{
  ifstream inF("/data/dna.txt");
  length();
  string Con;
  int count = 1;
  int longestC = 1;
  int longestP = 0;
  for (int i = 0; i < len - 1; i++)
  {
      if (s[i] == s[1 + i])
      {
        count++;
      }
      else
      {   
        if (count > longestC)
        { 
           longestC = count;
           longestP = i;
        }
        count = 1;
      }
  }
  if (count > longestC)
  {
      Con = s.substr(len - count);
  }
  else 
      Con = s.substr(longestP - longestC + 1, longestC);

  return Con;
}

string Sequence::longestRepeated()
{
  ifstream inF("/data/dna.txt");
  string Re;
  char* aa = new char[1200000];
  char**bb = new char*[1200000];
  aa = (char*)s.data();
  for (int i = 0; i < len; i++)
  {
     bb[i] = &aa[i];
  }
  sort(bb, bb + len, Cmp);

  int comlen = 0;
  int longestlen = 0;
  int t = 0;
  for (int j = 0; j < len - 1; j++)
  {
     while (bb[j] && bb[j + 1])
     {
        if (bb[j] == bb[j + 1])
        {
           comlen++;
        }
        bb[j]++;
        bb[j + 1]++;
      }
      if (comlen > longestlen)
      {
         t = j;
         longestlen = comlen;
      }
   }
   for (int k = 0; k < longestlen; k++)
   {
      Re += bb[t][k];
   }

   return Re;
}


bool Cmp(char* a1, char* a2)
{
   if (strcmp(a1, a2) >= 0)
   {  
      return false;
   }
   return true;
} 
 
