#ifndef CLASSBOOK_H
#define CLASSBOOK_H

#include "header.h"

class ClassBook{
public:
	int BId,Bcount;
	string Bname;
	ClassBook(int Id,string name,int count);
	void Print_book();
};

ClassBook Add_book();

#endif