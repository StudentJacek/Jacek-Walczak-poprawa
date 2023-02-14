/**

@file sequence.h
@brief Definicja klasy Sequence.
*/
#ifndef SEQUENCE_H
#define SEQUENCE_H

/**

@brief Klasa Sequence reprezentuje sekwencję liczb.
/
class Sequence
{
public:
/*

@brief Konstruktor domyślny.
*/
Sequence();
/**

@brief Konstruktor kopiujący.
@param other Obiekt klasy Sequence, którego wartości zostaną skopiowane.
*/
Sequence(const Sequence& other);
/**

@brief Destruktor.
*/
~Sequence();
/**

@brief Funkcja zwracająca długość sekwencji.
@return Długość sekwencji.
*/
int getLength();
/**

@brief Funkcja ustawiająca długość sekwencji.
@param newLength Nowa długość sekwencji.
*/
void setLength(int newLength);
/**

@brief Funkcja zwracająca element sekwencji o podanym indeksie.
@param index Indeks elementu.
@return Wartość elementu.
*/
int getElement(int index);
/**

@brief Funkcja ustawiająca wartość elementu sekwencji o podanym indeksie.
@param index Indeks elementu.
@param newValue Nowa wartość elementu.
*/
void setElement(int index, int newValue);
/**

@brief Funkcja obliczająca sumę elementów sekwencji.
@return Suma elementów sekwencji.
*/
int calculateSum();
/**

@brief Funkcja obliczająca iloczyn elementów sekwencji.
@return Iloczyn elementów sekwencji.
*/
int calculateProduct();
/**

@brief Funkcja obliczająca średnią arytmetyczną elementów sekwencji.
@return Średnia arytmetyczna elementów sekwencji.
*/
double calculateAverage();
private:
int length; ///< Długość sekwencji.
int* data; ///< Wskaźnik do tablicy przechowującej elementy sekwencji.

#endif // SEQUENCE_H