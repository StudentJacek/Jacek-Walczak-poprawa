#ifndef STATISTICS_H
#define STATISTICS_H

/**
 * @brief Klasa reprezentująca statystyki.
 */
class Statistics
{
    public:
        /**
         * @brief Konstruktor domyślny.
         */
        Statistics();

        /**
         * @brief Konstruktor kopiujący.
         * @param other Inne statystyki, które chcemy skopiować.
         */
        Statistics(const Statistics& other);

        /**
         * @brief Destruktor.
         */
        ~Statistics();

        /**
         * @brief Zwraca wartość danych statystyk.
         * @return Wartość danych statystyk.
         */
        int getData();

        /**
         * @brief Ustawia nową wartość danych statystyk.
         * @param newData Nowa wartość danych statystyk.
         */
        void setData(int newData);

        /**
         * @brief Oblicza średnią wartość danych statystyk.
         * @return Średnia wartość danych statystyk.
         */
        int calculateMean();

        /**
         * @brief Oblicza odchylenie standardowe danych statystyk.
         * @return Odchylenie standardowe danych statystyk.
         */
        int calculateStandardDeviation();

    private:
        int data; /**< Dane statystyk. */
};

#endif // STATISTICS_H
