// DIGITAL CLOCK 
#include<iostream>
#include <windows.h>
using namespace std;
int  main()
{
	// variables
	int hours =0 ;
	int min =0 ;
	int sec =0 ;
	// end of variables
	cout<<"Hours : ";
	cin>>hours ;
	cout<<"Minute : ";
	cin>>min ;
	cout<<"Seconed : ";
	cin>>sec ;

	while (true)              // while(1)   or the condution is true for ever 
	{
		system("cls") ;        // system clear screen   ====> clear the screen every sec.

		if(sec>59)
		{
			min++;
			sec=0;
		}
		if(min>59)
		{
			hours++;
			min=0;
		}
		if(hours>23)
		{
			hours=0;

		}
		cout<<"***************"<<endl<<endl;
		cout<<hours<<" : "<<min<<" : "<<sec<<" : ";   
		cout<<endl<<endl; 
		cout<<"***************"<<endl;
		sec++;

		Sleep(1000);        // to make terminal slow ====> to use it we need the library ====>   #include <windows.h>

		
	}
	return 0;
}
	