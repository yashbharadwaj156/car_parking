using namespace std;
#include<iostream>
#include<conio.h>
#include<windows.h>
class car_parking
{
	public:
		int number;
		int car,rickshaw,bus;
		int amount,count;
		
		car_parking()
		{
			number=0;
			car=0;rickshaw=0;bus=0;
			amount =0;count=0;
		}

	void dashboard()
	{
		cout<<"\t\t  P A R K I N G 	M A N A G E M E N T\n";
			cout<<"\t\t____________________________________________\n\n";
			cout<<"\t\t\tD A S H B O A R D\n";
			cout<<"\t\t1- ENTRY IN RICKSHAW\n";
			cout<<"\t\t2- ENTRY IN CAR \n";
			cout<<"\t\t3- ENTRY IN BUS\n";
			cout<<"\t\t4- SHOW ALL DATA\n";
			cout<<"\t\t5- DELETE ALL DATA\n";
			cout<<"\t\t	press-";
			cin>>number;
			
	}
	void entry_data()
	{
		if(number==1)
		{
			if(count<=50)
			{
				amount=amount+100;
				rickshaw++;
				count++;
				
			}
			else
				cout<<"\t\tOOPS! parking is full\n\t\tsry for the inconvience caused";
		}
	
		else if(number==2)
		{
			if(count<=50)
			{
				amount=amount+200;
				car++;
				count++;
			}
			else
				cout<<"\t\tOOPS! parking is full\n\t\tsry for the inconvience caused";
		}
		else if(number==3)
		{
			if(count<=50)
			{
				amount=amount+300;
				bus++;
				count++;
			}
			else
				cout<<"\t\tOOPS! parking is full\n\t\tsry for the inconvience caused";
		}
	}
	void show_data()
	{
	if(number==4)
	{
		cout<<"\t\t*****************************************\n";
		cout<<"\t\tTotal amount- "<<amount<<endl;
		cout<<"\t\tTotal number of vehicles parked -"<<count<<endl;
		cout<<"\t\tNumber of rickshaws parked- "<<rickshaw<<endl;
		cout<<"\t\tNumber of cars parked- "<<car<<endl;
		cout<<"\t\tNumber of bus parked- "<<bus<<endl;
		cout<<"\t\t*****************************************\n";
		
		
	}
	else if(number==5)
	{
		amount = 0;
		count = 0;
		rickshaw = 0;
		car = 0;
		bus = 0;
		cout<<"\t\t*****************************************\n";
		cout<<"\t\t\t DATA DELETED\n";
		cout<<"\t\t*****************************************\n";
	}
		
	}
	
};
int main()
{
	car_parking c;
	while(true)
	{
		c.dashboard();
		c.entry_data();
		system("cls");
		c.show_data();
		
	}	
	return 0;
		
}
