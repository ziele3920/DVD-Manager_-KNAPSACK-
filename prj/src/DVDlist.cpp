/*!
 * \brief Metody DVDlist
 *
 * Plik zawiera definicję metod klasy DVDlist.
 */
#include <iostream>
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
