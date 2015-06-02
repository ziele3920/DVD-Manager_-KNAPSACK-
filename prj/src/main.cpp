#include "../inc/DataGen.hh"
#include "../inc/Statistics.hh"
#include "../inc/Knapsack.hh"
// Jedostka podstawowa KB !!
const int MB = 1000;
const int GB = 1000000;
const int TB = 1000000000;

int main() {

  Knapsack K;
  Statistics stat; 
  std::string fileName = "dane.dat";
  DataGen DG;
  DG.Gen(fileName, 1*GB, 1*TB);
  K._WczytajPliki(fileName);
  K._PrzydzielPliki();
  DVDlist L = K._ZwrocListePlyt();
  stat.MakeStat(&L);
  stat.ShowStat();
  return 0;
}
