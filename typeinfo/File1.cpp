#pragma hdrstop
#pragma argsused

#include <tchar.h>
#include <stdio.h>
#include <iostream>
#include <typeinfo>

using namespace std;

class tabanSinif
{
 public:
 tabanSinif();
~tabanSinif();
};


 class Turemis1 : public tabanSinif
{
public:
Turemis1();
~Turemis1();
};

class Turemis2 : public tabanSinif
{
public:
Turemis2();
~Turemis2();
};

int main()
{

int i;
tabanSinif *p, tabaNesne;
Turemis1 tnesne1;
Turemis2 tnesne2;

cout<<"i deðiþkeninin tipi "<<typeid(i).name()<<endl;

p=&tabaNesne;

cout<<"p pointerinin tipi "<<typeid(*p).name()<<endl;

p=&tnesne1;

cout<<"p pointerinin tipi "<<typeid(*p).name()<<endl;

p=&tnesne2;

cout<<"p pointerinin tipi "<<typeid(*p).name()<<endl;

return 0;
}


