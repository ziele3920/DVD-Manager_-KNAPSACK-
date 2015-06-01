/*!
 * \brief Metody DVDlist
 *
 * Plik zawiera definicję metod klasy DVDlist.
 */

#include "../inc/DVDlist.hh"

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
