/*!
 * \brief Metody DataGen
 *
 * Plik zawiera definicj  metod klasy DataGen.
 */

#include "../inc/DataGen.hh"

void DataGen::OpenOutputFile(const char *fileName, std::fstream &file) {
  file.open(fileName, std::ios::out|std::ios::trunc);
  if(!file.good()) {
    std::cerr << "Blad utworzenia pliku: " << fileName << std::endl;
    exit(-1);
  }
}

void DataGen::Gen(std::string fileName, const unsigned int upperRange, const unsigned int sum) {
  std::fstream file;
  unsigned int currentData, currentSum = 0;
  unsigned int smallData = 10000, smallDiskPart = 10;
  srand(time(NULL));
  this -> OpenOutputFile(fileName.c_str(), file);

  while(currentSum < sum/smallDiskPart) {
    currentData = (rand()%smallData+1);
    file << currentData << " ";
    currentSum += currentData;
  }

  while(currentSum < sum) {
    currentData = (rand()%upperRange+1);
    file << currentData << " ";
    currentSum += currentData;
  }
  file.close();
}
