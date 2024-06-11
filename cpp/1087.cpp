#include<bits/stdc++.h>

using namespace std;

int main()
{
	int l1, c1, l2, c2;
	int dL, dC;
	
	cin >> l1 >> c1 >> l2 >> c2;//scanf("%d%d%d%d", &l1, &c1, &l2, &c2);
	
	while(l1 || c1 || l2 || c2)
	{
		dL = fabs(l1-l2);
		dC = fabs(c1-c2);
		
		if(l1 == l2 && c1 == c2)//não move
		{
			cout << "0" << endl;
		}
		else if (l1 == l2 && c1 != c2)//horizontal
		{
			cout << "1" << endl;	
		}
		else if (l1 != l2 && c1 == c2)//vertical
		{
			cout << "1" << endl;
		}
		else if (dL == dC)//diagonal válida
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "2" << endl;
		}
		
		cin >> l1 >> c1 >> l2 >> c2;
	}
	
	return 0;
}