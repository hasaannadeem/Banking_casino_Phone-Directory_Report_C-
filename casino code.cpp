
#include<iostream>
#include<string>        // For Use of String in my Program
#include<cstdlib>      // For Random Numbers
#include<conio.h>     // For use the system function
#include<ctime>      // For use time to generate 
void draw_line(int n, char ch);
void rule();

using namespace std;

int main ()
{
	
	


	
	
	cout<<"**************************************************************************************************"<<endl;
	cout<<"**************************************************************************************************"<<endl;
	cout<<"**************************************************************************************************"<<endl;
	cout<<"**************************************************************************************************"<<endl;
	cout<<"				Start Of Project by Mujahid farooqi"<<endl;
	cout<<"**************************************************************************************************"<<endl;
	cout<<"**************************************************************************************************"<<endl;
	cout<<"**************************************************************************************************"<<endl;
	cout<<"**************************************************************************************************"<<endl<<endl<<endl<<endl;
	 
	 
	 
	 


	 
	
	system("color 4F");  // Console Background Color will be red and font color will be white
	// Get Player Info
	 
	 
	string player_name;
	int amount;            // Hold's Player Current Balance
	int bet;              // Hold's Player Betting Amount Entered By Player
	int guess;           // Hold's Player Entered Number
	int dice;            // Hold's Computer Generator Number
	char choice;         // Hold's the user Choice
	
	
	// "Seed" The Random Generator
	srand(time(0));
	
	cout<<"\t\t\t";
	// Draw a Line
	draw_line(50,'-'); 
	cout<<"\n\t\t\t\t\tWelcome To Casino Game";
	cout<<"\n\t\t\t";
	draw_line(50,'-');
	cout<<"\n\n\t\t\t\tEnter Your Name : ";
	getline(cin,player_name);
	cout<<"\n\t\t\t\tEnter Your Amount in PKR : ";
	cin >>amount;
	
	
	do
	{
		system("cls");        // For Clear screen
		
		rule();               // call the function to show rules on the screen
		
		cout<<"\n\t\t\tYour Current Balance is : "<<amount<<" PKR\n";
		do
		{
			//Get Player's Betting Amount
			
			cout<<"\n\t\t\tEnter Amount you want to Bet : ";cin>>bet;
			if(bet>amount)
			{
				cout<<"\n\n\t\tSorry Your Current Balance is Less then entered amount"<<"\n\t\t\t\tTry again\n\n";
			}
			
			
		}while(bet>amount);
			
			//Get Player's Number for Betting
			
			do
			{
				cout<<"\n\t\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10";
				cout<<"\n\n\t\t\tEnter Your Choice : ";
				cin >>guess;
				if(guess<0 || guess>10)
				{
					cout<<"\n\n\t\t\t\tYour Entered Wrong Number"<<"\n\t\t\t\t\t\tPlz Try Again : ";
					
				}
				
				
			}while(guess<0 || guess>10);
			
			dice = rand()%10+1;      // Will hold the randomly generated number between 1 to 10
			
			if(dice==guess)
			{
				cout<<"\n"<<player_name<<" , Congrats You won PKR : "<<bet*10;
				amount = amount+bet*10;    // Amount will increase 10 Times
			}
			else
			{
				cout<<"\n"<<player_name<<" , Bad Luck You Lost PKR : "<<bet;
				amount = amount - bet;    // Amount will decrease after neglecting loss Amount
			}
			
			cout<<"\n\nWinning Number Was : "<<dice;
			cout<<"\n\nYour Current Amount is = "<<amount;
			if(amount==0)
			{
				cout<<"\n\nSorry You have No Money to Play";
				break;
			}
				
		
	cout<<"\n\nWould you Like to Play Again (Y/N) : ";
	cin >>choice;	
	}
	while(choice=='y'||choice=='Y');
	
	cout<<"\n\n\t\t";
	draw_line(80,'-');
	cout<<"\n\n\t\t\t\t\tThank you for Playing this Game\n"<<"\t\t\t\t\t\tHave A Good Day\n";
	cout<<"\n\t\t";
	draw_line(80,'-');
	
	return 0;
	
} // End the Main Function



void draw_line(int n,char ch)
{
	for(int i=0;i<n;i++) 
	{
		cout<<ch;
	}
}



void rule()
{
	system("cls");
	cout<<"\t\t";
	draw_line(80,'-');
	cout<<"\n\t\t\t\t\t\tGame Rules";
	cout<<"\n\t\t";
	draw_line(80,'-');
	cout<<endl;
	cout<<"\n\t\t\t1.You can entere number only between 1 to 10.";
	cout<<"\n\t\t\t2.If you win the game you will get 10 times to your Betting Amount.";
	cout<<"\n\t\t\t3.If you loss the game you will loss only your Betting Amount.\n\n";
	cout<<"\t\t";
	draw_line(80,'-');
	
	
	

//   *************************************************************************************************************
//   *************************************************************************************************************
//   *************************************************************************************************************
//   *************************************************************************************************************
//   *************************************************************************************************************
//   *************************************************************************************************************





//                                END OF PROJECT


//                              RESPECTED SIR ADREES

//                        THANKS TO GIVE ALOT OF KNOWLEDGE AND LOVE.

//                      


// ****************************************************************************************************************
// ****************************************************************************************************************
// ****************************************************************************************************************
// ****************************************************************************************************************
// ****************************************************************************************************************
// ****************************************************************************************************************





	
	}
