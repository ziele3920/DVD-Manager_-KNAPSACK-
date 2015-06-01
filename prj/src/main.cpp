#include "../inc/DataGen.hh"
#include "../inc/DVDlist.hh"

// Jedostka podstawowa KB !!
const int MB = 1000;
const int GB = 1000000;
const int TB = 1000000000;

int main() {

  DVDdisk DVD1(4700*MB), DVD2(4700*MB), DVD3(4700*MB), DVD4(4700*MB);
  DVD1.AddFile(4700*MB); DVD2.AddFile(4600*MB);
  DVD3.AddFile(4500*MB); DVD4.AddFile(4400*MB);

  DVDlist L;
  L.Add(DVD1); L.Add(DVD2); L.Add(DVD3); L.Add(DVD4);

  std::cout << L.GiveNumberOfDVD() << std::endl;
  std::cout << L.GiveTotalFreeSpace() << std::endl;



  // DVDdisk DVD(4700 * MB);
  // std::cout << DVD.GiveCapacity() << std::endl;
  // std::cout << DVD.GiveFreeSpace() << std::endl;
  // std::cout << DVD.AddFile(GB) << std::endl;
  // std::cout << DVD.AddFile(3701 * MB) << std::endl;
  // std::cout << DVD.AddFile(3699 * MB) << std::endl;
  // std::cout << DVD.AddFile(MB) << std::endl;
  // std::cout << DVD.GiveFreeSpace() << std::endl;

  //std::string fileName = "dane.dat";
  //DataGen DG;
  //DG.Gen(fileName, 10, 100);

  return 0;
}
