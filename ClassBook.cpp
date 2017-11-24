#include "ClassBook.h"
#include "Header.h"

int book_id = 100;

ClassBook::ClassBook(int Id,string name,int count){
	BId=Id;
	Bname=name;
	Bcount=count;
	cout<<"\n\nBook Added";
}

void ClassBook::Print_book(){
	cout<<"ID: "<<BId<<" "<<"Name: "<<Bname<<" "<<"Count: "<<Bcount<<endl; 
}

ClassBook Add_book(){
	int id,count;
	string name;
	cout<<"Enter the book name: "; cin>>name;
	cout<<"Enter the book count: "; cin>>count;
	id=book_id;
	book_id++;
	return ClassBook(id,name,count);
}