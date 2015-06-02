#ifndef KNAPSACK_HH
#define KNAPSACK_HH

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../inc/DVDlist.hh"

class Knapsack
{
  DVDlist ListaPlyt;
  std::list<int> ListaPlikow;

public:

  Knapsack();
  DVDlist  _ZwrocListePlyt()const;
  void _WczytajPliki(std::string NazwaPliku);
  void _PrzydzielPliki();
  void _ZawartoscListyPlikow();
 
};
#endif
