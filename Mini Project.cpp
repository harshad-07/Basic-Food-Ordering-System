#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
using namespace std;
class Person
{
  protected:
      string name;
      long long phno;
  public:
      void getdetail(void)
      {
    cout<<"\n\nEnter name : ";
    cin>>name;
    cout<<"\nEnter Your Contact no. : ";
    cin>>phno;
    try
    {
      if (phno == 0)
      {
        throw phno;
        cout<<"The value you have entered is"<<phno<<endl;
      }
    }
    catch(int x){
      cout<<"Invalid choice. Enter a valid number.";
    }
}
    void dispdetail(void)
    {
    cout<<"\n\t\tHello "<<name<<"!!! What would you like to order?\n\n";
    }
    friend void editDetail(void)  //Friend function
    {
      char choice;
      cout<<"Do you want to edit info? (y/n)"<<endl;
      cin>>choice;
      switch (choice) {
        case 'y':
        cout<<"We are resetting the dinfo..."<<endl;
        case 'n':
        cout<<"Proceeding without resetting..."<<endl;
      }
    }
};
class account : virtual public Person
{
  protected:
       char emid[90];
  public:
        void getmail(void)
       {
       cout<<"\nEnter Email Id : ";
       cin>>emid;
       }
};
class admin : virtual public Person  //Virtual Class
{
  protected:
       string loc;
  public:
       void getadd(void)
       {
        cout<<"\nEnter Current Address(Without Giving Space e.g. Lokmanya-Nagar,Nagpur) :- ";
        cin>>loc;
       }
};
class Menu
{
	protected:
		int choice,quantity,fin=0;
		char change,ans;
	public:
	 void getmenu(void)
	 {
	  do
	  {
        order:
          cout<<"\n\tEnter Your Choice: ";
          cin>>choice;
          cout<<"\tWrong Choice? Do you want to change this order?(y/n): ";
          cin>>change;
      if(change=='y')
      {
    	goto order;
	  }
	  else
	   {
	    switch(choice)
        {
	    case 1:
		    cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+280*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 2:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+220*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 3:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+220*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 4:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+290*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 5:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+135*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 6:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+440*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 7:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+210*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 8:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+140*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 9:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+425*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 10:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+124*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 11:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+380*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 12:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+300*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 13:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+248*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 14:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+400*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 15:
			cout<<"\n\tEnter the quantity: ";
		    cin>>quantity;
		    fin=fin+160*quantity;
		    cout<<"\n\n\tYour Total Bill Right Now: Rs. "<<fin;
		    cout<<"\n\n\tDelicious!!!Your order is being saved!!!";
		    cout<<"\n\n\tHungury? Do you want to add more??(y/n)\n\t--> ";
		    cin>>ans;
		    break;
		case 16:
			exit(0);
			break;
		default: cout<<"\n\tEnter Valid Choice Please!!";
        }
       } 
      }while(ans=='y');
      
	  cout<<"\n\t\t\t\t\t\t\t ================================================"<<endl;
	  cout<<"\t\t\t\t\t\t\t|                    Order Bill                 |"<<endl;
	  cout<<"\t\t\t\t\t\t\t ================================================"<<endl;
	  cout<<"\n\t\t\t\t\t\t\t  Bill No : CP51            Order : NB1353"<<endl;
	  cout<<"\n\n\n\n\t\t\t\t\t\t\t  ---->YOUR TOTAL BILL IS Rs."<<fin<<endl;
	  cout<<"\n\n\n\t\t\t\t\t\t\t  Your Order will be Deliverd in 40 mins!!!"<<endl;
	  cout<<"\n\n\n\t\t\t\t\t\t\t   THANKS FOR USING OUR ONLINE SERVICE!!!"<<endl;
	  cout<<"\n\n\n\t\t\t\t\t\t\t\t TILL THEN, EXPLORE OUR SYSTEM!!!"<<endl;
	  cout<<"\n\t\t\t\t\t\t\t ================================================"<<endl;
	  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t--------> CODE BY GROUP 28";
	 }
		void dispmenu(void)
		{
		cout<<"\n\n\n\t\t\t\t\t ========== WELCOME TO FOOD ORDERING SYSTEM =========="<<endl;
	    cout<<"\n\n\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	    cout<<"\n\n\n\t===========================\t\t\t=============MENU=============\t\t\t\t==========================="<<endl;
	    cout<<"\t--> [1] Veg Kolhapuri (Rs.280)\t\t\t--> [6] Paneer Pizza(R)(Rs.440)\t\t\t\t--> [11] Chicken Sizzler (Rs.380)\n\t--> [2] Chrispy Chicken (Rs.220)\t\t--> [7] Spaghetti (Rs.210)\t\t\t\t--> [12] Paneer Pulav (Rs.300)\n\t--> [3] Chicken Chilly (Rs.220)\t\t\t--> [8] Sandwitch (Rs.140)\t\t\t\t--> [13] French Fries (Rs.248)\n\t--> [4] Ham Burger (Rs.290)\t\t\t--> [9] Margherita Pizza(Rs.425)\t\t\t--> [14] Paaplet Fry (Rs.400)\n\t--> [5] Faluda (Rs.135)\t\t\t\t--> [10] Cocktail (Rs.124)\t\t\t\t--> [15] Hot Dog (Rs.160)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT\n\n\n\t\t\t\t\tWE WILL BE ADDING SOME MORE DISHES IN FUTURE!!! STAY TUNED!!!"<<endl;
		}
};
class master : public account, public admin, public Menu
{
    public:
    void create(void)
    {
       cout<<"\n\n\t=====SIGN-IN=====\n";
       getdetail();
       getmail();
       getadd();
    }
    void display(void)
    {
      dispdetail();
      dispmenu();
      getmenu();
    }
    void update(void)
    {
      cout<<"\n\n=====UPDATE DETAILS=====\n";
      cout<<"\nChoose detail you want to update\n";
      cout<<"\n--> 1)  NAME\n";
      cout<<"--> 2)  CONTACT NO.\n";
      cout<<"--> 3)  EMAIL ID\n";
      cout<<"--> 4)  LOCATION\n";
      cout<<"\nEnter your choice: ";
      int choice;
      cin>>choice;
      switch(choice)
      {
        case 1 : cout<<"\n\nEnter Name : - ";
             cin>>name;
             break;
        case 2 : cout<<"\n\nEnter Contact no :- ";
             cin>>phno;
             break;
        case 3 : cout<<"\n\nEnter Email Id :- ";
             cin>>emid;
             break;
        case 4 : cout<<"\n\nEnter Current Address :- ";
             cin>>loc;
             break;
        default: cout<<"\n\nInvalid choice\n\n";
      }
    }
};
int main()
{
    //exception handling implementation
    master ob1;
    int choice;
    while(1)
    {

       cout<<"\n\n\t\t\t*******ONLINE FOOD ORDERING SYSTEM*******\n\n";
       cout<<"\nNOTE:- If you are new, We suggest you to Register First!\n";
       cout<<"\n--> 1)  Login/Register\n";
       cout<<"--> 2)  Menu\n";
       cout<<"--> 3)  Update  Info\n";
       cout<<"--> 4)  Customer Support\n";
       cout<<"--> 5)  Exit\n";
       cout<<"\nEnter your choice: ";
       cin>>choice;
       switch(choice)
       {
         case 1 :ob1.create();
              break;
         case 2 : ob1.display();
              break;
         case 3 : ob1.update();
              break;
         case 4 :
            cout << "Thanks for using our System!!! We looking forward to serve you Hot & Delicious Food" << endl;
  	        cout << "For any problem contact: 180050069 or visit our nearest branch" << endl;
            break;
         case 5 : exit(1);
        default : cout<<"\n\nInvalid Choice\nTry Again!!!\n\n";
       }
    }
    return 0;
}
