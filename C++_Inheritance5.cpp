#include <iostream>

class PoweredDevice
{
  public:
    PoweredDevice(int power)
    {
        std::cout << "PoweredDevice: " << power << std::endl;
    }
};

class Scanner : virtual public PoweredDevice
// PoweredDevie is now a virtual base class
{
  public:
    Scanner(int scanner, int power)
        : PoweredDevice(power)
    // this line is required to create Scanner objects,
    // but ignored in this case
    {
        std::cout << "Scanner: " << scanner << '\n';
    }
};

class Printer : virtual public PoweredDevice
// Note: PoweredDevice is now a virtual base class
{
  public:
    Printer(int printer, int power)
        : PoweredDevice(power)
    // This line is required to create Printer Objects, but ignored in this case
    {
        std::cout << "Printer: " << printer << '\n';
    }
};  

class Copier : public Scanner, public Printer
{
  public:
    Copier(int scanner, int printer, int power)
        : PoweredDevice(power),
          // PoweredDevice is constructed here
          Scanner(scanner, power), Printer(printer, power)
    {
    }
};

int main() {
    Copier Copier1(1, 2, 3);
}