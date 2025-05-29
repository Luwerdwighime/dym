/**
 * @file main.cpp
 * @brief Прога для комфортного кача с YouTube
 */

#include "Cfg.hpp" // Для класса Cfg и глобального объекта config типа Cfg

#include <iostream> // Debug

/**
 * @brief Точка входа в программу
 *
 * @param argc Число параметров командной строки
 * @param argv Массив указателей на строки с параметрами
 *
 * @return Числовые коды ошибок или 0 при успехе
 */
int main(int argc, char* argv[]) {
  config = new Cfg(argc, argv); // Читаем всю конфигурацию (из ini и командной строки)
  
  std::cout << config->fs.dir_rights << "\n";



  return 0;          // Profit!
}

