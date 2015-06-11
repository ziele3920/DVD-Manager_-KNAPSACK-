#include "../inc/DataGen.hh"
#include "../inc/Statistics.hh"
#include "../inc/Knapsack.hh"
#include <stdlib.h>
// Jedostka podstawowa KB !!
const int MB = 1000;
const int GB = 1000000;
const int TB = 1000000000;

int main() {

  Knapsack K;
  Statistics stat; 
  std::string fileName = "dane.dat";
  DataGen DG;
  DG.Gen(fileName, 4680*MB, 1*TB);
  K._WczytajPliki(fileName);
  K._PrzydzielPliki();
  K._ZapiszProcentZapisania();
  DVDlist L = K._ZwrocListePlyt();
  stat.MakeStat(&L);
  stat.ShowStat();

  system("gnuplot histogram.gnu");
  system("eog plot.png &");
  
  return 0;
}
