#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
  int i;
  float preco, soma=0, media=0, maior=0, menor=15;
  for (i=1; i<=15; i++)
    {
      cout<<"Digite o valor do produto:\n";
      cin>>preco;
      cout<<i<<"° preço = "<<preco<<"\n";
      if (preco>maior)
      {
        maior = preco;
      }
      soma = soma+preco;
    }
  media = soma/15;
  cout<<"O maior preço é "<<maior<<"\n";
  cout<<"A média é "<<media;
  return 0;
}