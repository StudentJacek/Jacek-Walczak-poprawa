
/**
 * @file main.cpp
 * \brief Obliczanie całki metodą prostokątów
 * \param f funkcja, której całkę chcemy wyznaczyć
 * \param a lewa granica całkowania
 * \param b prawa granica całkowania
 * \return Aproksymacja wartości całki funkcji f(x) na przedziale [a,b]
 * 
 * @brief Plik zawierający funkcję główną programu
 */

#include <iostream>
#include <vector>
/**  Obliczanie całki funkcji f(x): \f[ \int_{a}^{b}f(x),dx \approx h \cdot \left(\frac{f(a) + f(a + h) + f(a + 2h) + ... + f(b - h) + f(b)}{2}\right) \f] gdzie h = \f$\frac{b-a}{n}\f$. */
/**
 * @class Sequence
 * @brief Klasa reprezentująca ciąg liczb
 * 
 * Klasa Sequence służy do przechowywania ciągu liczb i umożliwia ich modyfikację oraz obliczenie sumy.
 */
class Sequence {
  private:
    /** @var data
     *  @brief wektor przechowujący ciąg liczb
     */
    std::vector<int> data;

  public:
    /**
     * @brief Konstruktor domyślny
     * 
     * Konstruktor domyślny tworzy pusty ciąg liczb.
     */
    Sequence() {}

    /**
     * @brief Konstruktor kopiujący
     * 
     * Konstruktor kopiujący pozwala na stworzenie kopii istniejącego ciągu liczb.
     * 
     * @param other - referencja do ciągu liczb, który ma zostać skopiowany
     */
    Sequence(const Sequence &other) {
        data = other.data;
    }

    /**
     * @brief Destruktor
     * 
     * Destruktor jest wywoływany w momencie usuwania obiektu klasy Sequence.
     */
    ~Sequence() {}

    /**
     * @brief Funkcja dostępu do składowych
     * 
     * Funkcja zwraca wartość liczby znajdującej się w określonym indeksie wektora.
     * 
     * @param index - indeks wektora, dla którego ma zostać zwrócona wartość
     * @return wartość liczby znajdującej się w określonym indeksie wektora
     */
    int getDataAt(int index) const { return data.at(index); }

    /**
     * @brief Funkcja dostępu do składowych
     * 
     * Funkcja pozwala na ustawienie wartości liczby w określonym indeksie wektora.
     * 
     * @param index - indeks wektora, dla którego ma zostać ustawiona wartość
     * @param value - wartość, która ma za zostać ustawiona dla liczby znajdującej się w określonym indeksie wektora
*/
void setDataAt(int index, int value) { data[index] = value; }
/**
 * @brief Funkcja dostępu do składowych
 * 
 * Funkcja zwraca liczbę elementów przechowywanych w wektorze.
 * 
 * @return liczba elementów przechowywanych w wektorze
 */
int getDataCount() const { return data.size(); }

/**
 * @brief Funkcje obliczeniowe
 * 
 * Funkcja pozwala na dodanie nowej liczby do ciągu.
 * 
 * @param value - wartość liczby, która ma zostać dodana do ciągu
 */
void addData(int value) {
    data.push_back(value);
}

/**
 * @brief Funkcje obliczeniowe
 * 
 * Funkcja oblicza sumę wszystkich liczb przechowywanych w wektorze.
 * 
 * @return suma wszystkich liczb przechowywanych w wektorze
 */
int sum() const {
    int result = 0;
    for (int i = 0; i < data.size(); i++) {
        result += data[i];
    }
    return result;
}
};

/**

@brief Funkcja główna programu
Funkcja główna tworzy obiekt klasy Sequence i dodaje do niego kilka liczb. Następnie wywołuje funkcję sum() i wyświetla wynik na standardowym wyjściu.
@return zawsze zwraca 0
*/
int main() {


Sequence seq;
seq.addData(1);
seq.addData(2);
seq.addData(3);
std::cout << "Sum: " << seq.sum() << std::endl;
return 0;
}
