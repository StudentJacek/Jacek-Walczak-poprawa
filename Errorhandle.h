/**
 * @file Errorhandle.h
 * @brief Plik zawiera deklarację klasy ErrorHandle
 */

/**
 * @brief Klasa odpowiedzialna za obsługę błędów
 * 
 * Klasa ErrorHandle umożliwia łatwe i eleganckie obsługiwanie błędów
 * w programie. Klasa ta jest wykorzystywana w całym programie jako narzędzie
 * do zgłaszania i śledzenia błędów.
 */
class ErrorHandle {
 public:
  /**
   * @brief Konstruktor tworzący obiekt ErrorHandle
   * 
   * Konstruktor inicjuje prywatne pola klasy i przygotowuje ją do działania.
   */
  ErrorHandle();

  /**
   * @brief Metoda służąca do zgłaszania błędu
   * 
   * Metoda `reportError` jest wywoływana, gdy wystąpi błąd w programie.
   * Metoda ta zapisuje informację o błędzie i umożliwia śledzenie wystąpienia
   * błędu w programie.
   * 
   * @param error_message Treść komunikatu o błędzie
   */
  void reportError(const std::string& error_message);

  /**
   * @brief Metoda zwracająca informację o błędach
   * 
   * Metoda `getErrorLog` zwraca pełną listę błędów jakie wystąpiły w programie.
   * 
   * @return Lista komunikatów o błędach
   */
  std::vector<std::string> getErrorLog() const;

 private:
  /**
   * @brief Lista błędów
   * 
   * Pole `error_log_` przechowuje informacje o błędach jakie wystąpiły w
   * programie.
   */
  std::vector<std::string> error_log_;
};
