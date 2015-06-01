#ifndef DVDLIST_HH
#define DVDLIST_HH

/*!
 * \brief Definicja DVDlist
 *
 * Plik zawiera definicję klasy DVDlist.
 */

#include "DVDdisk.hh"
#include <list>

/*!
 * \brief Klasa DVDlist
 *
 * Klasa modeluje pojęcie kolekcji przechowującej
 * płyty DVD.
 */
class DVDlist {

  /*!
   * \brief Lista płyt
   *
   * Lista przechowująca płyty DVD.
   */
  std::list<DVDdisk> Collection;

public:

  void Add(const DVDdisk newDisk);
  int GiveNumberOfDVD() const;
  int GiveTotalFreeSpace() const;

};

#endif
