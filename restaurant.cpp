#include<iostream>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;


void setpassword();
int search_customer(char []);
void factors(int);
void manager();
void start();
void set();
void factor();
void customer();
void cls();
int show_types();
int show_foods(int );
char password[100];
bool setpass=false;
struct food{
	int cate;
	int fcode;
	int time;
	long long price;
	char fname[100];
	char ingred[100];
};
food foods[20];
struct food_type{
	int code_ft;
	char name_ft[100];
};
food_type tfoods[4];

struct sefaresh{
	char name[100];
	int code_sefaresh[20];
	int tedad_sefaresh[20];
	int sefaresh_index=0;
	bool paid=false;
	bool ready=false;
	long long total_price=0;
	int total_time;
	
	
};
sefaresh sefareshha[100];

int customer_index=0;
int main()
{
	set();
	start();
	
	
	
	getch();
	return 0;
}

void cls()
{
	system("cls");
}
int show_types()
{
	int q;
	cls();
	cout<<"\n Our types of food:\n\n";
	for(int i=0;i<4;i++)
	{
		cout<<endl<<" "<<tfoods[i].code_ft<<"."<<tfoods[i].name_ft<<endl;
	}
	cout<<"\n Which type do you want: ";
	cin>>q;
	return q;
}
int show_foods(int n)
{
	int q;
	cls();
	cout<<"\n Our foods of "<<tfoods[q-1].name_ft<<":\n\n";
	for(int i=0;i<20;i++)
	{
		if(n==foods[i].cate)
		 cout<<endl<<" "<<foods[i].fcode<<"."<<foods[i].fname<<" ("<<foods[i].ingred<<")"<<"  price: "<<foods[i].price<<"  time: "<<foods[i].time<<endl;
		
	}
	cout<<"\n Which one do you want: ";
	cin>>q;
	return q-1;
}
void customer()
{
	int q;
	
	q=show_types();
	q=show_foods(q);
	sefareshha[customer_index].code_sefaresh[sefareshha[customer_index].sefaresh_index]=q;
	cout<<"\n How many do you want: ";
	cin>>q;
	sefareshha[customer_index].tedad_sefaresh[sefareshha[customer_index].sefaresh_index]=q;
	sefareshha[customer_index].sefaresh_index++;
	cout<<"\n Do you want another food (Y/N): ";
	char qq;
	cin>>qq;
	if(qq=='y'||qq=='Y')
	{
		customer();
	}
	
}

void factors(int j)
{
	
	
	cout<<"\n\t\tFactor Mr./Ms  "<<sefareshha[j].name<<endl;
	for(int i=0;i<sefareshha[j].sefaresh_index;i++)
	{
		
		cout<<"\n\n "<<i+1<<"."<<foods[sefareshha[j].code_sefaresh[i]].fname<<"\ttedad: "<<sefareshha[j].tedad_sefaresh[i];
		cout<<"\tprice: "<<foods[sefareshha[j].code_sefaresh[i]].price<<"\ttotal price: "<<foods[sefareshha[j].code_sefaresh[i]].price*sefareshha[j].tedad_sefaresh[i];
		
	
	}
	
	cout<<"\n-------------------------------------------------------------";
	cout<<"\n Your food will be ready after "<<sefareshha[j].total_time<<" minute";
	cout<<"\n\n Total price: "<<sefareshha[j].total_price<<" Toman\n";
	
	if (sefareshha[j].paid==true)
		cout<<"\n It is paid";
	else
		cout<<"\n It is not piad";
	if (sefareshha[j].ready==true)
		cout<<"\n It is ready;";
	else
		cout<<"\n It is not ready";
}



void factor()
{
	char qq;
	cls();
	cout<<"\n\t\tFactor Mr./Ms  "<<sefareshha[customer_index].name<<endl;
	sefareshha[customer_index].total_price=0;
	sefareshha[customer_index].total_time=0;
	for(int i=0;i<sefareshha[customer_index].sefaresh_index;i++)
	{
		
		cout<<"\n\n "<<i+1<<"."<<foods[sefareshha[customer_index].code_sefaresh[i]].fname<<"\ttedad: "<<sefareshha[customer_index].tedad_sefaresh[i];
		cout<<"\tprice: "<<foods[sefareshha[customer_index].code_sefaresh[i]].price<<"\ttotal price: "<<foods[sefareshha[customer_index].code_sefaresh[i]].price*sefareshha[customer_index].tedad_sefaresh[i];
		sefareshha[customer_index].total_price+=foods[sefareshha[customer_index].code_sefaresh[i]].price*sefareshha[customer_index].tedad_sefaresh[i];
	
		if(foods[sefareshha[customer_index].code_sefaresh[i]].time>sefareshha[customer_index].total_time)
			sefareshha[customer_index].total_time=foods[sefareshha[customer_index].code_sefaresh[i]].time;
			
	}
	
	cout<<"\n-------------------------------------------------------------";
	cout<<"\n Your food will be ready after "<<sefareshha[customer_index].total_time<<" minute";
	cout<<"\n\n Total price: "<<sefareshha[customer_index].total_price<<" Toman\n";
	cout<<endl<<" Do you pay (Y/N): ";
	cin>>qq;
	if((qq=='y')||(qq=='Y'))
		sefareshha[customer_index].paid=true;
	else
		sefareshha[customer_index].paid=false;
	
}
void set()
{
	for(int i=0;i<4;i++)
		tfoods[i].code_ft=i+1;
	for(int i=0;i<20;i++)
		foods[i].fcode=i+1;
	////////////////////////////  1
	foods[0].cate=1;
	foods[0].time=20;
	foods[0].price=150000;
	strcpy(foods[0].fname,"gonzolla");
	strcpy(foods[0].ingred,"chertopert");
	////////////////////////////  2
	foods[1].cate=1;
	foods[1].time=15;
	foods[1].price=15000;
	strcpy(foods[1].fname,"peperoni");
	strcpy(foods[1].ingred,"chertopert");
	////////////////////////////  3
	foods[2].cate=2;
	foods[2].time=15;
	foods[2].price=30000;
	strcpy(foods[2].fname,"hamburger");
	strcpy(foods[2].ingred,"chertopert");
	////////////////////////////  4
	foods[3].cate=2;
	foods[3].time=10;
	foods[3].price=18000;
	strcpy(foods[3].fname,"shamibaboli");
	strcpy(foods[3].ingred,"chertopert");
	////////////////////////////  5
	foods[4].cate=3;
	foods[4].time=10;
	foods[4].price=180000;
	strcpy(foods[4].fname,"salad fasl");
	strcpy(foods[4].ingred,"chertopert");
	////////////////////////////   6
	foods[5].cate=3;
	foods[5].time=6;
	foods[5].price=150000;
	strcpy(foods[5].fname,"salad shirazi");
	strcpy(foods[5].ingred,"chertopert");
	////////////////////////////  7
	foods[6].cate=4;
	foods[6].time=4;
	foods[6].price=15000;
	strcpy(foods[6].fname,"noshabe");
	strcpy(foods[6].ingred,"chertopert");
	/////////////////////////////////8
	foods[7].cate=4;
	foods[7].time=6;
	foods[7].price=1000;
	strcpy(foods[7].fname,"ab madani");
	strcpy(foods[7].ingred,"chertopert");
	////////////////////////////  
	
	
	
	strcpy(tfoods[0].name_ft,"Pizza");
	strcpy(tfoods[1].name_ft,"Sandwich");
	strcpy(tfoods[2].name_ft,"Salad");
	strcpy(tfoods[3].name_ft,"Drink");
	
}
void start()
{
	char qqq[100];
	cout<<"\n \\\\\\ Hello. Welcome to our restaurant ///\n";
	cout<<" \n Who are you (1.manager 2.customer) : ";
	int q;
	cin>>q;
	while(q!=1&&q!=2)
	{
		cls();
		cout<<"\n Invalid input!!!";
		cout<<" \n Who are you (1.manager 2.customer) : ";
		cin>>q;
	}
	
	if(q==1)
	{
		manager();
	}
	char qq;
	if(q==2) 
	{
		cout<<"\n Are you new customer (Y/N): ";
		cin>>qq;
		if((qq=='y')||(qq=='Y'))
		{
			cout<<"\n What's your name: ";
			cin>>sefareshha[customer_index].name;
			customer();
			factor();
			customer_index++;
		}
		else
		{
			cout<<"\n What's your name: ";
			cin>>qqq;
			q=search_customer(qqq);
			if(q==-1)
			{
				cout<<"\n Customer was not found!!! \n";
				getch();
			}
			else
			{
				factors(q);
				getch();
			}
		}
		
		
	}
	cls();
	start();
	
}
void manager()
{
	int q;
	char qq;
	char qqq[100];
	cls();
	if(setpass==false)
	{
		cout<<"\n Do you want to set a password (Y/N)?";
		cin>>qq;
		if((qq=='y')||(qq=='Y'))
		{
			setpassword();
		}
		
	}
	else
	{
		cout<<" Enter your password: ";
		cin>>qqq;
		while(strcmp(qqq,password))
		{
			cout<<"\n It is incorrect!!!";
			cout<<"\n Enter your password: ";
			cin>>qqq;
			
		}
	}
	
	for(int i=0;i<customer_index;i++)
	{
		cout<<"\n "<<i+1<<". ";
		factors(i);
		cout<<"\n\n===========================================\n\n";
	}
	cout<<"\n Enter the customer code 1...n to view details or enter 0 to change your password: ";
	cin>>q;
	if(q==0)
	{
		setpassword();
	}
	else if((q>0)&&(q<=customer_index))
	{
		factors(q-1);
		cout<<"\n\n Is it ready (Y/N)?";
		cin>>qq;
		if((qq=='y')||(qq=='Y'))
			sefareshha[q-1].ready=true;
	}
	else
	{
		cout<<"\n Entered invalid number!!!";
	}
	getch();
}
int search_customer(char name[])
{
	for(int i=0;i<customer_index;i++)
	{
		if(!strcmp(name,sefareshha[i].name))
			return i;
	}
	return -1;
}
void setpassword()
{
	char qqq[100];
	cout<<" Enter your new password: ";
	cin>>qqq;
	while(strlen(qqq)<8)
	{
		cout<<"\n Your password must have at least 8 charactors!!!";
		cout<<"\n Enter your new password: ";
		cin>>qqq;
	}
	strcpy(password,qqq);
	setpass=true;
}
