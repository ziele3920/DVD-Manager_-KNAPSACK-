#ifndef KNAPSACK_HH
#define KNAPSACK_HH

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../inc/DVDlist.hh"
//**************************************************************************
/*!
 *\brief Definicja Klasy Knapsack
 *
 * Plik zawiera definicje klasy Knapsack, wraz z deklaracjami jej metod
 */
//**************************************************************************

//**************************************************************************

/*!
 *\brief Klasa Knapsack
 *
 * Klasa modeluje rozwiazanie problemu plecakowego, polegajacego 
 * w tym przypadku na umieszczenie 1TB danych na plytach DVD.
 * Został przy tym wykorzystany algrytm zachlanny.
 */
//**************************************************************************
class Knapsack
{
//**************************************************************************
  /*!
   *\brief Lista Plyt
   *
   * Pole przechowuje kolejke plyt jaka zostala uzyta do zapisania danych
   */
//**************************************************************************
  DVDlist ListaPlyt;
//**************************************************************************  
/*!
 *\brief Lista Plikow
 *
 * Pole przechowuje liste plikow jakie nalezy rozmiescic na plytach DVD
 */
//**************************************************************************
  std::list<int> ListaPlikow;
//**************************************************************************

public:

//***************************************************************************
/*!
 *\brief Zwraca liste plyt
 *
 * Metoda ma za zadanie zwrocic kolekcje plyt
 *
 *\return - Zwraca kolekcje plyt
 */
//***************************************************************************
  DVDlist  _ZwrocListePlyt()const;
//***************************************************************************
/*!
 *\brief Metoda wczytujaca dane
 *
 * Metoda ma za zadanie wczytac dane do listy plikow
 *
 *\param[in] NazwaPliku - Nazwa pliku z ktorego zostana wczytane dane
 */
//***************************************************************************
  void _WczytajPliki(std::string NazwaPliku);
//***************************************************************************
/*!
 *\brief Metoda rozmieszczajaca pliki na plytach
 *
 * Metoda ma za zadanie posortowac wielkosc plikow w kolejnosci malejacej.
 * Nastepnie umieszcza pliki, zaczynajac od najwiekszego rozmiarem na plycie DVD,
 * opercja ta powtarza do momentu wyczerpania sie miejsca na danej plycie DVD lub
 * do momentu umieszczania wszystkich plikow z listy
 * Po zapelnieniu kazdej plyty jest ona umieszczana w kolekcji
 */
//***************************************************************************
  void _PrzydzielPliki();
//***************************************************************************  
/*!
 *\brief Pokazuje zawartosc listy plikow
 *
 * Metoda ma za zadanie wyswietlic zawartosc listy plikow
 */
//***************************************************************************
  void _ZawartoscListyPlikow();
//***************************************************************************
  void _ZapiszProcentZapisania();
};
#endif
