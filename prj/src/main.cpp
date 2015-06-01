#include "../inc/DataGen.hh"

int main() {
  std::string fileName = "dane.dat";
  DataGen DG;

  DG.Gen(fileName, 10, 100);

  return 0;
}
