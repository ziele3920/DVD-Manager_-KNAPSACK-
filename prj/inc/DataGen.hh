#ifndef DATAGEN_HH
#define DATAGEN_HH

/*!
 * \brief Definicja  DataGen
 * 
 * Plik zawiera definicję klasy DataGen
 */

#include <fstream>
#include <iostream>
#include <cstdlib>

/*!
 * \brief Klasa DataGen
 *
 * Klasa modeluje pojęcie generatora danych.
 */
class DataGen {

  /*!
   * \brief OpenOutputFile
   *
   * Metoda otwiera plik, do którego można zapisywać dane.
   * Jeżeli plik o danej nazwie nie istnieje to tworzy nowy,
   * jeżeli istnieje to czyści jego zawartość.
   * W przypadku niepowodzenia utworzenia/otwarcia pliku 
   * wyswietlany jest stosowny komunikat i zakańczany jest program.
   *
   * \param[in] fileName - nazwa pliku, który ma zostać owtarty
   * \param[in] file - referencja do strumienia pliku
   */
  void OpenOutputFile(const char *fileName, std::fstream &file);

public:

  /*!
   * \brief Gen
   *
   * Metoda generuje do pliku bazę danych symulującą rozmiary plików
   * przechowywanych na dysku o łącznej pojemnośći w przybliżeniu równą sum.
   *
   * \param[in] fileName - nazwa pliku, do którego zostaną zapisane dane
   * \param[in] upperRange - górny zakres losowanych wielkości
   * \param[in] sum - całkowita suma losowanych wilkości
   */
  void Gen(std::string fileName, const unsigned int upperRange, const unsigned int sum);

};

#endif
