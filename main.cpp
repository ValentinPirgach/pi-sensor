
#include <iostream>
#include <unistd.h>
#include <wiringPi.h>
#include <iomanip>

using namespace std;

#define USING_DHT11 true    // AM230x / DHT11 = false / true
#define SENS_GPIO 22        // GPIO 22
#define LH_THRESHOLD 26     // Low=~14, High=~38 – вибір середнього моменту
                            // одиничного значення біта

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
