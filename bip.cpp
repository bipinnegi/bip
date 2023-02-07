#include <iostream>
#include <windows.h>
using namespace std; 
int main()
{
	int i,a;
	for(i=1;i<2;i)
	{
		cout<<"to change the text enter the number:\nblue=1\ngreen=2\naqua=3\nred=4\npurle=5\nyellow=6\nwhite=7\ngray=8\nto close the window enter anything axcept these numbers\nenter your number here:";
		cin>>a;
		switch(a)
		{
			case 1:
				system("color 01");                                                                          
				cout<<"\ntext is now blue\n";
				break;
			case 2:
			  	system("color 02");
				cout<<"\ntext is now green\n";
				break;
			case 3:
			  	system("color 03");
				cout<<"\ntext is now aqua\n";
				break;	
			case 4:
			  	system("color 04");
				cout<<"\ntext is now red\n";
				break;	
			case 5:
			  	system("color 05");
				cout<<"\ntext is now purple\n";
				break;	
			case 6:
			  	system("color 06");
				cout<<"\ntext is now yellow\n";
				break;	
			case 7:
			  	system("color 07");
				cout<<"\ntext is now white\n";
				break;	
			case 8:
			  	system("color 08");
				cout<<"\ntext is now gray\n";
				break;	
			default :
			     return 0;	
		}
	}
}