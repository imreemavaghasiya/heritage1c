#include<iostream>
#include<string.h>
using namespace std;

class Employe1{
	public :
		int id;
		char name[50];
		char post[50];
		char contact[10];
		
		void set(){
			cout<<"Enter Id = ";
			cin>>id;
			cout<<"Enter Name = ";
			cin>>name;
			cout<<"Enter Employe Post = ";
			cin>>post;
			cout<<"Enter Contact No. = ";
			cin>>contact;
		}
		void get(){
			cout<<"Id = "<<id<<endl
		        <<"Name = "<<name<<endl
		        <<"Employe Post = "<<post<<endl
		        <<"Contact Number = "<<contact<<endl;
		}
		
};
class Employe2{
	public :
		int id;
		char name[50];
		char post[50];
		char contact[10];
		
		void scan(){
			cout<<"Enter Id = ";
			cin>>id;
			cout<<"Enter Name = ";
			cin>>name;
			cout<<"Enter Employe Post = ";
			cin>>post;
			cout<<"Enter Contact No. = ";
			cin>>contact;
		}
		void  print(){
			cout<<"Id = "<<id<<endl
		        <<"Name = "<<name<<endl
		        <<"Employe Post = "<<post<<endl
		        <<"Contact Number = "<<contact<<endl;
		}
	
	
};
class Employe3 : public Employe1,public Employe2  {
	  public :
	  	int id;
	  	char name[50];
	  	char post[50];
	  	char contact[10];
	  	 void kal(){
	  	 	cout<<"Enter Id = ";
	  	 	cin>>id;
	  	 	cout<<"Enter Name = ";
	  	 	cin>>name;
	  	 	cout<<"Enter Employe post = ";
	  	 	cin>>post;
	  	 	cout<<"Enter Contact no. = ";
	  	 	cin>>contact;
		   }
		void lal(){
			cout<<"ID = "<<id<<endl
			    <<"Name = "<<name<<endl
				<<"Employe Post = "<<post<<endl
				<<"Contacat Number = "<<contact<<endl;
		}
	
	
};

int main(){
	
	Employe3 e;
	cout<<"-------Employe 1 Enter Data-------"<<endl;
	e.set();
	cout<<"------Employe 1 Data------"<<endl;
	e.get();
	cout<<"--------Employe 2 Enter Data---------"<<endl;
	e.scan();
	cout<<"------Employe 2 Data------"<<endl;
	e.print();
	cout<<"--------Employe 3 Enter Data--------"<<endl;
	e.kal();
	cout<<"------Employe 3 Data------"<<endl;
	e.lal();
	
	return 0;
}
