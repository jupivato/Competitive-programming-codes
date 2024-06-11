#include<bits/stdc++.h>
using namespace std;

int main ()
{
	double d, vf, vg;
	while(cin >> d >> vf >> vg)
	{
		double timef = 12/vf;
		double timeg = sqrt(144+(d*d))/vg;
		if(timef >= timeg) cout << 'S' << endl;
		else cout<<'N'<<endl;
	}
	return 0;
}