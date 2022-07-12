#include<iostream>

using namespace std;

int q,n,a;

int main()
{
	cin>>q;

	while(q--)
	{
		cin>>n;
		int cnt = 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			if(a >= 1000)
				cnt++;
		}
		cout<<cnt<<"\n";
	}
}

// Problem Code:
// TODOLIST
// Contest Code:
// LTIME108
// Difficulty Rating:580
