#include "../inc/DataGen.hh"

// Jedostka podstawowa KB !!
const int MB = 1000;
const int GB = 1000000;
const int TB = 1000000000;

int main() {
  std::string fileName = "dane.dat";
  DataGen DG;

  DG.Gen(fileName, 10, 100);

  return 0;
}
