#include <iostream>
#include <string>
#include "Moto.h"


using namespace std;


int main(){

	string color;
	string make;
	string model;
	int year;

	

	cout<<"Let's build a motorcycle "<< endl;
	cout<<"------------------------ "<< endl;
	cout<<"Select color: "<< endl;
	cin>>color;
	cout<<"Select make: "<<endl;
	cin>>make;
	cout<<"Select model: "<<endl;
	cin>>model;
	cout<<"Select year: "<< endl;
	cin>>year;
	cout<<"Your motorcycle's specs are "<< year << " " << color << " " << make<< " " << model << endl;
	
	

return 0;
}


