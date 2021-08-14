# sleep

## Description 
Delay C++ script execution due to sleep() function.

## Usage

*Functions have no return values.*  
>`sleep(const int secs)`,  
>`sleep(const float secs)`,     
>`sleep(const double secs)`;   

**Arguments:**  
> `secs`: delay lenght;  

### Example:
```C++
#include <iostream>
#include "sleep-cpp/sleep.hpp"

int main(void) {
  std::cout << "Time to stop for 2 minutes!";
  sleep(120); // sleep 120 seconds (2 minutes)
  
  return 0;
}
```
**See also** [test.cpp](https://github.com/Dolfost/sleep-cpp/blob/main/readme/run/test.cpp).

### Libinfo: [libinfo.txt](https://github.com/Dolfost/sleep-cpp/blob/main/readme/libinfo.txt). 
-------------------------------------------  

## License: LGPL-3.0
[GNU General Public License v3.0](https://github.com/Dolfost/sleep-cpp/blob/main/COPYING)  




##### *Coffe...?* [PayPal](https://www.paypal.com/donate?hosted_button_id=BZ6DNYKFPBWNA)  
