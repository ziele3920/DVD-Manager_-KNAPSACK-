/*!
 * \brief Metody Statistics
 *
 * Plik zawiera definicję metod klasy Statistics.
 */

#include "../inc/Statistics.hh"

void Statistics::MakeStat(DVDlist *collection) {
    NumberOfDVD = collection -> GiveNumberOfDVD();
    TotalFreeSpace = collection -> GiveTotalFreeSpace();
    TotalCapacity = collection ->GiveTotalCapacity();
    MaxSingleDiskFreeSpace = collection ->GiveMaxFreeSpace();
    MinSingleDiskFreeSpace = collection ->GiveMinFreeSpace();
}

void Statistics::ShowStat() {
    float percentageFreeSpace = (float)TotalFreeSpace/TotalCapacity*100;
    std::cout << "Ilosc uzytych plyt: " << NumberOfDVD << std::endl;
    std::cout << "Calkowita pojemnosc: " << TotalCapacity << "KB =~ " << TotalCapacity/1000000 << "GB" << std::endl;
    std::cout << "Calkowita wolna przestrzen: " << TotalFreeSpace << "KB =~ " << TotalFreeSpace/1000 << "MB" <<std::endl;
    std::cout << "Procentowo wolna przestrzen: " << percentageFreeSpace << "%" << std::endl;
    std::cout << "Max wolna przestrzen na plycie: " << MaxSingleDiskFreeSpace << "KB =~ " << MaxSingleDiskFreeSpace/1000 << "MB" << std::endl;
    std::cout << "Min wolna przestrzen na plycie: " << MinSingleDiskFreeSpace << "KB" << std::endl;
}
