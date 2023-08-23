#include<iostream>
#include<string.h>
using namespace std;

class Animal{
	public :
		 char name[100];
		 int age;
		 char info[1000];
		 void set(){
		 	
		 	cout<<"Enter Name = ";
		 	cin>>name;
		 	cout<<"Enter Age = ";
		 	cin>>age;
		 	cout<<"Enter Information = ";
		 	cin>>info;
		 	
		 }
};
class Zebra : public Animal{
	 public :
	 	void get(){
	 		cout<<"Name is :- "<<name<<endl
	 		    <<"Zebra Age is :-  "<<age<<endl
	 		    <<"Information for Zebra :- "<<info<<endl;	
		 }
};
class Dolphin : public Animal{
	  public :
	  	void print(){
	  				cout<<"Name is : "<<name<<endl
	  				    <<"Dolphin Age is : "<<age<<endl
	  				    <<"Information for Dolphine : "<<info<<endl;
				  }
};

int main(){
	Zebra z;
	   z.set();
	   cout<<" "<<endl;
	   z.get();
	cout<<"-----------------------"<<endl;
	Dolphin d;
	   d.set();
	   cout<<" "<<endl;
	   d.print();
	      
	
	return 0;
}
