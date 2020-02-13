#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int i=1;
	string Frase;
	ifstream Arquivo;
	Arquivo.open("Frase.txt", ios::in);	
	if (Arquivo.is_open() && Arquivo.good())
	{
		getline(Arquivo,Frase);
	}
	Arquivo.close();
	while(Frase[i]!='\0')
	{
		if(Frase[i+1]!='\0')
		{
			cout<<Frase[i];
		}
		i++;
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
	
}
