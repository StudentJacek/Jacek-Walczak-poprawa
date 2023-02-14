/*!

\file
\brief Plik zawierający definicję klasy Statistics
*/
/*!

\class Statistics
\brief Klasa służąca do obliczeń statystycznych
/
class Statistics {
private:
int data; /!< Dane statystyczne /
int sum; /!< Suma danych /
int count; /!< Liczba danych */
public:
/*!
* \brief Konstruktor domyślny
*/
Statistics() : data(0), sum(0), count(0) {}
/*!
 * \brief Konstruktor kopiujący
 * \param other Obiekt klasy Statistics do skopiowania
 */
Statistics(const Statistics &other) {
    data = other.data;
    sum = other.sum;
    count = other.count;
}
/*!
 * \brief Destruktor
 */
~Statistics() {}

/*!
 * \brief Funkcja zwracająca dane statystyczne
 * \return Dane statystyczne
 */
int getData() const { return data; }

/*!
 * \brief Funkcja ustawiająca dane statystyczne
 * \param value Nowe dane statystyczne
 */
void setData(int value) { data = value; }

/*!
 * \brief Funkcja zwracająca sumę danych
 * \return Suma danych
 */
int getSum() const { return sum; }

/*!
 * \brief Funkcja zwracająca liczbę danych
 * \return Liczba danych
 */
int getCount() const { return count; }

/*!
 * \brief Funkcja dodająca dane do obiektu klasy Statistics
 * \param value Nowe dane do dodania
 */
void addData(int value) {
    data = value;
    sum += value;
    count++;
}

/*!
 * \brief Funkcja obliczająca średnią arytmetyczną danych
 * \return Średnia arytmetyczna danych
 */
double average() const {
    return (count > 0) ? (double)sum / count : 0;
}

/*!

\brief Główna funkcja programu
*/
int main() {
Statistics stats;
stats.addData(1);
stats.addData(2);
stats.addData(3);
std::cout << "Average: " << stats.average() << std::endl;
return 0;
}