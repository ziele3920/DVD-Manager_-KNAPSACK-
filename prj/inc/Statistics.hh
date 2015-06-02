#ifndef STATISTICS_HH
#define STATISTICS_HH

/*!
 * \brief Klasa Statistics
 *
 * Plik zawiera definicję klasy Statistics
 */

#include "DVDlist.hh"
#include <iostream>

/*!
 * \brief Klasa Statistics
 *
 * Klasa modeluje pojęcie statystyki, której zadaniem
 * jest uzyskanie danych liczbowych na temat wykorzystania
 * płyt DVD przechowywanych w DVDlist.
 */
class Statistics {

    /*!
     * \brief NumberOfDVD
     *
     * Ilość płyt na liście (kolekcji)
     */
    int NumberOfDVD;

    /*!
     * \brief TotalFreeSpace
     *
     * Ilość całkowitego "zmarnowanego miejsca" biorąc po uwagę
     * wszystkie płyty z listy (w KB).
     */
    int TotalFreeSpace;

    /*!
     * \brief TotalCapacity
     *
     * Całkowita pojemność płyt znajdujących się na liście (w KB).
     */
    int TotalCapacity;

    /*!
     * \brief MaxSingleDiskFreeSpace
     *
     * Maksymalan wartość niużytej przestrzeni na pojedyńczej płycie
     * będące w liście.
     */
    int MaxSingleDiskFreeSpace;

    /*!
     * \brief MaxSingleDiskFreeSpace
     *
     * Maksymalan wartość niużytej przestrzeni na pojedyńczej płycie
     * będące w liście.
     */
    int MinSingleDiskFreeSpace;

public:

    /*!
     * \brief MakeStat
     *
     * Tworzy i zapamiętuje statystykę ilościową zagospodrowania
     * przestrzeni na płytach w kolekcji.
     *
     * \param collection - wskaźnik na kolekcję (DVDlist) z płytami.
     */
    void MakeStat(DVDlist *collection);

    /*!
     * \brief ShowStat
     *
     * Wyświetla statystykę na std::out.
     */
    void ShowStat();
};

#endif
