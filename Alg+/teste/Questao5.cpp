#include <iostream>
using namespace std;
#define N 5
int main()
{
	int Numero;
	float Total;
	
	for(int i=0;i<N;i++)
	{
		cin>>Numero;
		Total=Total+Numero;
	}
	cout << fixed;
	cout.precision(2);
	Total=Total/N;
	cout<<Total<<endl;
	system("pause");
	return 0;
}
