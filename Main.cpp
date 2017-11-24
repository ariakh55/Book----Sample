#include "Header.h"
#include "ClassBook.h"

int main(){
	vector <ClassBook> BookV;
	int opt;
	while(1){
		cout<<"\n\n====Book====";
		cout<<"\n1.Add";
		cout<<"\n2.Print";
		cout<<"\n=============";
		cout<<"Enter your Choice: "; cin>>opt;
		if(opt==1)
			BookV.push_back(Add_book());
		else if(opt==2)
			for(int i=0;i<BookV.size();i++)
				BookV[i].ClassBook::Print_book();
		else break;	
	}
	return 0;
}
