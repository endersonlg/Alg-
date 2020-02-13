#include <iostream>
using namespace std;

int main()
{
	string Nome;
	float SalarioTotal,SalarioFixo,Vendas;
	cin>>Nome;
	cin>>SalarioFixo;
	cin>>Vendas;
	SalarioTotal=SalarioFixo+(Vendas*0.15);
	cout << fixed;
	cout.precision(2);
	cout<<"Total= "<<SalarioTotal<<endl;
	system("pause");
	return 0;
}
