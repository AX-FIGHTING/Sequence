#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<string>

class Squence{
public:
  Sequence (std::string);
  int length ();
  int numberOf (char);
  std::string longestConsecutive ();
  std::string longestRepeated ();
  void Getlength();
  void Getnumber();
  void Getconsecutive();
  void Getrepeated();
private:
  std::string s;
  int number;
};

#endif
  
