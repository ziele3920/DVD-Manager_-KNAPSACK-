/*!
 * \brief Metody DVDdisk
 *
 * Plik zawiera definicję metod klasy DVDdisk.
 */

#include "../inc/DVDdisk.hh"

DVDdisk::DVDdisk(const int capacity) 
  :Capacity(capacity),FreeSpace(Capacity)
{}


int DVDdisk::GiveFreeSpace() const {
  return FreeSpace;
}

const int DVDdisk::GiveCapacity() const {
  return Capacity;
}

bool DVDdisk::AddFile(const int size) {
  if(size > FreeSpace)
    return false;

  FreeSpace = FreeSpace - size;
  Files.push(size);
  return true;
}

