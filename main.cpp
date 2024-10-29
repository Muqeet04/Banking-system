#include <iostream>
using namespace std;

int deposit (int b){
   	float d;
	cout<<"Enter a amount ";cin>>d;
	while(d<1)
	{
		cout<<"Enter a valid amount : ";cin>>d;
		static_cast<int>(d);
		if (d>=1)
		break;
	}
	b+=d;
	cout<<"Money deposited : "<<d<<"\nYour Updated balance is: "<<b<<endl;
	return b;
	
}
void bal(int b){
	cout<<"You balance is : "<<b<<endl;
}
int withdraw (int b){
	float w;
	cout<<"Enter a amount ";cin>>w;
			static_cast<int>(w);

		while(w>b)
	{
		cout<<"\nInsufficient amount \n\nEnter amount";cin>>w;
		if (b>w)
		break;
	}
	b -= w;
	cout<<"\nMoney withdrawn successfully : "<<w<<"\nYour new balance is : "<<b<<endl;
	return b;
	
}
int transfer (int b){
		float t;
	    cout<<"Enter a amount ";cin>>t;
	    static_cast<int>(t);

		while(t>b)
	{
		cout<<"\nInsufficient amount";cin>>t;
		if (b>t)
		break;
	}
	b-=t;
	cout<<"Money transfered to recipient : "<<t<<endl<<"Your new balance is : "<<b<<endl;
	return b;
}

int main() {
	char op ;
	int balance;
	cout<<"Welcome To Banking System";
	do
	{
	cout<<endl<<"Choose your Desiered option";
	cout<<"\nD deposit\nB balance\nW withdraw\nT Transfer\nE Exit\n";cin>>op;
			switch(op){
		case 'd':
		case 'D':
		{
		 balance =   deposit(balance);
		    break;
			}
		case 'b':
		case 'B':
		{
		    bal(balance);
		    break;
				}
		case 'w':
		case 'W':
		{
		balance =	withdraw(balance);
			break;
				}	
		case 't':
		case 'T':
		{
		balance =	transfer(balance);
			break;
				}					
	}
	
	if(op=='E'||op=='e')
	{
		cout<<"\nThank you for using our service";
		break;

	}
	}while(op!='E'||op!='e');

}