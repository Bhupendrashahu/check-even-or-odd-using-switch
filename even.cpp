#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of the no \n ";
	cin>>n;
	switch(n%2==0)
	{
		case 0:
			cout<<n<<" is odd no";
			break;
	    case 1:
	        cout<<n<<" is even no";
	        break;
	}
}
