// A simple magic 8 ball program

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;



void answers();  // prototype
int tryAgain(); // prototype

int main()
{
char z;
string question;

	for(z = 'y';z == 'y';z=tryAgain())
	{
		cout<<endl;
		cout<<"Ask your question: \n";
		getline(cin,question);
		answers();
	}

}

void answers()
{  				
srand((time(0)));
int randomNum = rand()%20+1;
						// these are 20 answers from the Magic 8 Ball
						// resource was Wikipedia
	if(randomNum==1)
		{cout<<"It is certain."<<endl;}
	else if(randomNum==2)
		{cout<<"It is decidedly so."<<endl;}
	else if(randomNum==3)
		{cout<<"Without a doubt."<<endl;}
	else if(randomNum==4)
		{cout<<"Yes definitely."<<endl;}
	else if(randomNum==5)
		{cout<<"You may rely on it."<<endl;}
	else if(randomNum==6)
		{cout<<"As I see it, yes."<<endl;}
	else if(randomNum==7)
		{cout<<"Most likely."<<endl;}
	else if(randomNum==8)
		{cout<<"Outlook is good."<<endl;}
	else if(randomNum==9)
		{cout<<"Yes."<<endl;}
	else if(randomNum==10)
		{cout<<"Signs point to yes."<<endl;}
	else if(randomNum==11)
		{cout<<"Reply hazy, try again."<<endl;}
	else if(randomNum==12)
		{cout<<"Ask again later."<<endl;}
	else if(randomNum==13)
		{cout<<"Better not tell you now."<<endl;}
	else if(randomNum==14)
		{cout<<"Cannot predict now."<<endl;}
	else if(randomNum==15)
		{cout<<"Concentrate and ask again."<<endl;}
	else if(randomNum==16)
		{cout<<"Don't count on it."<<endl;}
	else if(randomNum==17)
		{cout<<"My reply is no."<<endl;}
	else if(randomNum==18)
		{cout<<"My sources say no."<<endl;}
	else if(randomNum==19)
		{cout<<"Outlook not so good."<<endl;}
	else if(randomNum==20)
		{cout<<"Very doubtful."<<endl;}
cout<<endl;
}

int tryAgain()
{
char proceed;      	 // char is for passing int value
string input;		// string is for getline() 
			// cin produces extra space and breaks program
			
	cout<<"Try again? (Y/N) :";
	getline(cin,input);
	
	if (input == "Y" || input == "y")
		{proceed = 'y';}
	else
		{proceed = 'n';}

return proceed;
}
