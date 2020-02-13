#include <iostream>
using namespace std;

int main()
{
	int numero;
	int maior;
	maior=0;
	cin>>numero;
	while(numero>=0)
	{
		if(maior<numero)
		{
			maior=numero;
		}
		cin>>numero;
	}
	cout<<maior<<endl;
	system("pause");
	return 0;
}
