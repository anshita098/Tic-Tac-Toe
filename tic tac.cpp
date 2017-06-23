#include<bits/stdc++.h>
using namespace std;
char a[10]={'1','2','3','4','5','6','7','8','9'};

int win()
{
	if(a[0]==a[1] && a[1]==a[2])
	return 1;
	else
	if(a[3]==a[4] && a[4]==a[5])
	return 1;
	else
	if(a[6]==a[7] && a[7]==a[8])
	return 1;
	else
	if(a[0]==a[3] && a[3]==a[6])
	return 1;
	else
	if(a[1]==a[4] && a[4]==a[7])
	return 1;
	else
	if(a[2]==a[5] && a[5]==a[8])
	return 1;
	else
	if(a[0]==a[4] && a[4]==a[8])
	return 1;
	else
	if(a[2]==a[4] && a[4]==a[6])
	return 1;
}

int matrix()
{
	cout<<a[0]<<"|"<<a[1]<<"|"<<a[2]<<endl;
	cout<<"_____________"<<endl;
	cout<<a[3]<<"|"<<a[4]<<"|"<<a[5]<<endl;
	cout<<"_____________"<<endl;
	cout<<a[6]<<"|"<<a[7]<<"|"<<a[8]<<endl;
}

int main()
{
	int pplayer=0,count=0;
	char mark;
	int pos=0;
	cout<<"tic tac toe"<<endl;
	string player1,player2;
	cout<<"Enter player 1 name"<<endl;
	cin>>player1;
	cout<<"Enter player 2 name"<<endl;
	cin>>player2;
	
	while(1)
	{
		pplayer++;
		pplayer=pplayer%2;
		matrix();
		if(pplayer==1)
		{
			cout<<"turn of player 1!"<<endl;
			cout<<"Enter your mark"<<endl;
		}
		else
		{
			cout<<"turn of player 2!"<<endl;
			cout<<"Enter your mark"<<endl;
		}
		cin>>mark;
		
		cout<<"enter your position"<<endl;
		cin>>pos;
		
		if(pos==1 && a[0]=='1')
		a[0]=mark;
		else
		if(pos==2 && a[1]=='2')
		a[1]=mark;
		else
		if(pos==3 && a[2]=='3')
		a[2]=mark;
		else
		if(pos==4 && a[3]=='4')
		a[3]=mark;
		else
		if(pos==5 && a[4]=='5')
		a[4]=mark;
		else
		if(pos==6 && a[5]=='6')
		a[5]=mark;
		else
		if(pos==7 && a[6]=='7')
		a[6]=mark;
		else
		if(pos==8 && a[7]=='8')
		a[7]=mark;
		else
		if(pos==9 && a[8]=='9')
		a[8]=mark;
		else
		{
			cout<<"Invalid move"<<endl;
			pplayer--;
		}
		
		count++;
		int q=win();
		if(q==1)
		{
			if(pplayer==1)
			cout<<"Winner is "<<player1<<endl;
			else
			cout<<"Winner is "<<player2<<endl;
			break;
		}
		else
		if(count==9)
		{
			cout<<"Draw"<<endl;
			break;
		}
	}
}
