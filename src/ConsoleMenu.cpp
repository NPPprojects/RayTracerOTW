#include "ConsoleMenu.h"

ConsoleMenu::ConsoleMenu()
{
  //Default window values
  windowWidth = 640;
  windowHeight = 480;

  running = true;

  run();
}

void ConsoleMenu::run()
{
  while (running)
  {
    printToConsole();
    std::cin >> userInput;
    processInput();
  }
}

void ConsoleMenu::printToConsole()
{
  std::cout << "[1] Start" << std::endl;
  std::cout << "[2] Change window size (currently: " << windowWidth << " by " << windowHeight << ")" << std::endl;
  std::cout << "[3] Quit" << std::endl;
  std::cout << std::endl;
}

void ConsoleMenu::processInput()
{
  if (userInput == "1")
  {
    std::cout << "RayTracer is loading, please wait" << std::endl;
  }
  else if (userInput == "2")
  {
    std::cout << "Enter new window width: " << std::endl;
    std::cin >> windowWidth;

    std::cout << "Enter new window height: " << std::endl;
    std::cin >> windowHeight;
  }
  else if (userInput == "3")
  {
    running = false;
  }
}
