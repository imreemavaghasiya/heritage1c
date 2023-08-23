#include<iostream>
#include<string.h>
using namespace std;
class Mother{
	public :
		char msg[100];
		void display(){
			
			cout<<"hello Daughter "<<msg<<endl;
		}
};
class Daughter : public Mother{
	 public :
	 	  char msg[100];
	 	  void display(){
	 	  	cout<<"hello MoM"<<msg<<endl;
		   }	
};

int main(){
	Daughter d;
	 d.Mother :: display();
	 d.display();
	
	return 0;
}
