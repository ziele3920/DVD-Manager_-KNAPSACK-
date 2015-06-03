#ifndef DVDDISK_HH
#define DVDDISK_HH

#include <queue>

/*!
 * \brief Definicja klasy DVDdisk
 *
 * Plik zawiera definicję klasy DVDdisk.
 */

/*!
 * \brief Klasa DVDdisk
 *
 * Klasa modeluje pojęcie pojedyńćzej płyty DVD o zadanaje pojemności 
 * wyrażonej w KB.
 */
class DVDdisk {

  /*!
   * \brief Pojemność
   * 
   * Pole przechowuje wartość pojemnosci płyty wyrażoną w KB;
   */
  const int Capacity;

  /*!
   * \brief Wolne miejsce
   *
   * Pole przecowuje aktualną ilość wolnego miejsca na płycie w KB.
   */
  int FreeSpace;

  /*!
   * \Brief Pliki na płycie
   *
   * Lista plików, które znajdują się na płycie, które 
   * są reprezentowane przez ich wielkość wyrażona w KB.
   */
  std::queue<int> Files;

public:

  /*!
   * \brief Konstruktor
   *
   * Konstruktor ustawia zadaną wielkość płyty i wolną przestrzeń.
   *
   * \param[in] capacity - pojemność płyty
   */
  DVDdisk(const int capacity);

  /*!
   * \brief Ile miejsca
   *
   * Sprawdza aktualną ilość wolnego miejsca na płycie.
   *
   * \retval - zwraca ilość wolnego miejsa na płycie wyrażoną w KB
   */
  int GiveFreeSpace() const;

  /*!
   * \brief Jaka pojemność
   *
   * Sprawdza pojemność płyty.
   *
   * \retval - zwraca pojemność płyty wyrażoną w KB.
   */
  const int GiveCapacity() const;

  /*!
   * \brief Dodaje pik
   *
   * Dodaje plik o zadanej wielkości do płyty.
   *
   * \param[in] size - wielość dodawanego pliku
   * \retval true/false odpowienio przy powodzeniu dodawania bądź niepowodzeniu.
   */
  bool AddFile(const int size);

};


#endif
