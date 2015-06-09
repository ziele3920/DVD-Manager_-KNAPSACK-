/*!
 * \brief Metody DVDlist
 *
 * Plik zawiera definicję metod klasy DVDlist.
 */
#include <iostream>
#include <fstream>
#include "../inc/DVDlist.hh"
using namespace std;
void DVDlist::Add(const DVDdisk newDisk) {
  Collection.push_back(newDisk);
}

int DVDlist::GiveNumberOfDVD() const {
  return Collection.size();
}

int DVDlist::GiveTotalFreeSpace() {
  std::list<DVDdisk>::iterator it;
  int actualFreeSpace = 0;
  for(it = Collection.begin(); it != Collection.end(); ++it) 
    actualFreeSpace += (*it).GiveFreeSpace();
  
  return actualFreeSpace;
}

int DVDlist::GiveMaxFreeSpace() {
    std::list<DVDdisk>::iterator it;
    int actualMaxFreeSpace = 0;
    for(it = Collection.begin(); it != Collection.end(); ++it) {
      if((*it).GiveFreeSpace() > actualMaxFreeSpace)
        actualMaxFreeSpace = (*it).GiveFreeSpace();
    }

    return actualMaxFreeSpace;
}

int DVDlist::GiveMinFreeSpace() {
    std::list<DVDdisk>::iterator it;
    int actualMinFreeSpace = 1000000000;
    for(it = Collection.begin(); it != Collection.end(); ++it) {
      if((*it).GiveFreeSpace() < actualMinFreeSpace)
        actualMinFreeSpace = (*it).GiveFreeSpace();
      if(actualMinFreeSpace == 0)
        return 0;
    }

    return actualMinFreeSpace;
}

int DVDlist::GiveTotalCapacity() {
    std::list<DVDdisk>::iterator it;
    int actualCapacity = 0;
    for(it = Collection.begin(); it != Collection.end(); ++it)
        actualCapacity += (*it).GiveCapacity();

    return actualCapacity;
}
void DVDlist::ZapiszProcentZapisania()
{
  std::list<int> WolneMiejsce;
  std::list<int> Ilosc;
  std::fstream PlikWy;
  std::list<int>::iterator it;
  std::list<DVDdisk>::iterator iter;
  int i = 0;

  for(iter = Collection.begin(); iter != Collection.end(); ++iter)
    {
      WolneMiejsce.push_back((*iter).GiveFreeSpace());
    }

  WolneMiejsce.sort();
  it = WolneMiejsce.begin();

  while(it != WolneMiejsce.end())
    {
      int Temp = (*it);
      Ilosc.push_back(Temp);
      while(Temp == *it)
	{i++;++it;}
      
      Ilosc.push_back(i);
      i = 0;
    }
    
  PlikWy.open("data.dat",std::ios::out|std::ios::trunc);
  {
    if(PlikWy.good())
      {
	i = 0;
	for(it = Ilosc.begin(); it != Ilosc.end();++it)
	  {
	    PlikWy << *it <<  (i%2 ? "\n": " ");
	    i++;
	  }
	PlikWy.close();
      }
    else
      {
	std::cerr << "Blad!Nie udalo sie utorzyc pliku!" << std::endl;
      }
  }
}
    

