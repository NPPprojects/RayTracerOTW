#include <string>
#include <iostream>

/**********************************************
@brief Console Debugger Menu from which to 
configure and start the raytracer.

***********************************************/
class ConsoleMenu 
{
  public:
  /**********************************************
  @brief Set default values for SDL window.

  ***********************************************/
    ConsoleMenu();




  private:
  /**************************************************************************************************/
    std::string userInput;

    int windowWidth;
    int windowHeight;
    
    bool running;

  /**********************************************
  @brief While start is set to true run the 
  program.

  ***********************************************/
    void run();

  /**********************************************
  @brief Process user input by navigating switch
  cases.

  ***********************************************/
    void processInput();

  /************************************
  @brief Print the menu to the Console

  *************************************/
    void printToConsole();

  /**************************************************************************************************/
};