#include "../inc/Knapsack.hh"
//****************************************************************************************
Knapsack::Knapsack()
{

}
//****************************************************************************************
DVDlist Knapsack:: _ZwrocListePlyt()const
{
  return  ListaPlyt;
}
//****************************************************************************************
void Knapsack::_WczytajPliki(std::string NazwaPliku)
{
  std::ifstream Plik_Wart;
  int Temp;
  Plik_Wart.open(NazwaPliku.c_str(),std::ios::in);
  
  if(!Plik_Wart)
    {
      std::cerr << "Blad przy otwieraniu Pliku: " 
		<< std::endl;exit(1);
    }
  else
    {
      while(!Plik_Wart.eof())
	{
	 Plik_Wart >> Temp;
	 ListaPlikow.push_back(Temp);
	}
    }
  Plik_Wart.close();
}
//****************************************************************************************
void Knapsack::_PrzydzielPliki()
{
  ListaPlikow.sort();
  while(!ListaPlikow.empty())
    {
      DVDdisk Temp(4700000);
      while((Temp.GiveFreeSpace() > 0 || !ListaPlikow.empty()))
	{ 
	  if(ListaPlikow.back() + Temp.AlreadyAdded() < Temp.GiveCapacity())
	    {
	      if(Temp.AddFile(ListaPlikow.back()))
		{
		  ListaPlikow.pop_back();
		}
	      else
		{
		  std::cerr <<"Bład! Nie udalo sie dodac pliku do plyty!"
			    << std::endl; exit(1);
		}
	    }
	  else
	    {
	      ListaPlyt.Add(Temp);
	      break;
	    }
	}
    }
}
//****************************************************************************************
void Knapsack::_ZawartoscListyPlikow()
{
  if(ListaPlikow.empty())
    std::cout << "Lista Pusta!" << std::endl;
  else
    {
      std::list<int>::iterator iter;
      for(iter = ListaPlikow.begin(); iter != ListaPlikow.end(); ++iter)
	std::cout << *iter << std::endl;
    }
}
//****************************************************************************************
