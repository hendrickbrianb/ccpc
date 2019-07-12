#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
		char answer;
		bool exit = false;
	do{

	int choice,x,y;
	cout <<"Menu:"<<"\n";
	cout <<"\t\b\b\b\b"<<"1.Add"<<endl;
	cout <<"\t\b\b\b\b"<<"2.Subtract"<<endl;
	cout <<"\t\b\b\b\b"<<"3.Multiply"<<endl;
	cout <<"\t\b\b\b\b"<<"4.Division"<<endl;
	cout <<"\t\b\b\b\b"<<"5.Modulo"<<endl;
	cout << endl;
	cout <<"Enter Your Choice:"<<" "<<flush;
	cin >> choice;
	cout <<"Enter Two Numbers:"<<" "<<flush;
	cin >> x >> y;
	switch (choice)
	{
		case 1:
			cout <<"Result:"<<" "<< x+y <<endl;
			break;
		case 2:
			cout <<"Result"<<" "<< x-y <<endl;
			break;
		case 3: 
			cout <<"Result"<<" "<< x*y <<endl;
			break;
		case 4:
			if(y==0){
				cout <<"You Must Enter A Nonzero Number"<<endl;
			}
			else
			{
			cout <<"Result"<<" "<< x/y <<endl;
			}
		case 5:
			cout <<"Result"<<" "<< x%y <<endl;
			break;
		default:
			cout <<"Invalid"<< endl;
	}
	cout <<"Continue ?"<<flush;
	cin >> answer;
		switch (answer)
		{
		
			case 'y':
			case 'Y':
				 exit = false;
				 break;
			default:
				exit = true;
		}
					
				
	}while(!exit);

	getch();
	return 0;
}
