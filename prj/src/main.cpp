#include "../inc/DataGen.hh"
#include "../inc/DVDdisk.hh"

// Jedostka podstawowa KB !!
const int MB = 1000;
const int GB = 1000000;
const int TB = 1000000000;

int main() {
 
  DVDdisk DVD(4700 * MB);
  std::cout << DVD.GiveCapacity() << std::endl;
  std::cout << DVD.GiveFreeSpace() << std::endl;
  std::cout << DVD.AddFile(GB) << std::endl;
  std::cout << DVD.AddFile(3701 * MB) << std::endl;
  std::cout << DVD.AddFile(3699 * MB) << std::endl;
  std::cout << DVD.AddFile(MB) << std::endl;
  std::cout << DVD.GiveFreeSpace() << std::endl;

  //std::string fileName = "dane.dat";
  //DataGen DG;
  //DG.Gen(fileName, 10, 100);

  return 0;
}
