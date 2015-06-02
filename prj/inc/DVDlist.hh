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

  /*!
   * \brief Dodawanie płyty
   *
   * Dodaje płytę DVD do kolekcji.
   *
   * \param[in] newDisk - dodawana płyta
   */
  void Add(const DVDdisk newDisk);

  /*!
   * \brief Ilość płyt
   *
   * Sprawdza ilość płyt w kolekcji.
   *
   * \retval - ilość płyt w kolekcji
   */
  int GiveNumberOfDVD() const;

  /*!
   * \brief Wolne miejsce
   *
   * Sprawdza ogólną ilość niewykorzystanego miejsca na płytach
   * znajdujących się w kolekcji
   *
   * retval - zwraca ilość niewykorzystaego miejsca w KB.
   */
  int GiveTotalFreeSpace();

  /*!
   * \brief GiveMaxFreeSpace
   *
   * Sprawdza maksymalną wolną przesrzeń na pojedyńczej płycie.
   *
   * \retval - ilość max. wolnej przestrzeni na pojedyńćzej płycie
   *           wyrażoną w KB.
   */
  int GiveMaxFreeSpace();

  /*!
   * \brief GiveMinFreeSpace
   *
   * Sprawdza minimalną wolną przesrzeń na pojedyńczej płycie.
   *
   * \retval - ilość min. wolnej przestrzeni na pojedyńćzej płycie
   *           wyrażoną w KB.
   */
  int GiveMinFreeSpace();

  /*!
   * \brief GiveTotalCapacity
   *
   * Sprawdza jaka jest łączna pojemność wszystkich płyt w kolekcji.
   *
   * \return Zwraca łączną pojemność płyt wyrażoną w KB.
   */
  int GiveTotalCapacity();

};

#endif
