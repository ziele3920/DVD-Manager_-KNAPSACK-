#include "../inc/Knapsack.hh"
//****************************************************************************************
/*!
 *\file Knapsack
 *
 * Zawiera definicje klasy Knapsack
 */
//****************************************************************************************

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

  ListaPlikow.sort(std::greater<int>());
  std::list<int>::iterator it;
  bool missBegin = false;

  while(!ListaPlikow.empty()) {
      DVDdisk actualDisk(4700000);
      for(it = ListaPlikow.begin(); it != ListaPlikow.end(); ++it) {
          if(missBegin) {
              --it;
              missBegin = false;
          }
          if(actualDisk.GiveFreeSpace() == 0) break;
          if(actualDisk.AddFile((*it))) {
             it = ListaPlikow.erase(it);
             if(it == (--ListaPlikow.end()))
                 --it;
             else if(it == ListaPlikow.begin())
                 missBegin = true;
          }
      }
      ListaPlyt.Add(actualDisk);
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
