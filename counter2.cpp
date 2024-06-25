module;
#include <iostream>
import AntohiRobert_counter;
export module AntohiRobert_counter2;

export namespace AntohiRobert_counter2{
  void counter()
  {
    AntohiRobert_counter::counter();
    std::cout << "secoond\n";
  }
}