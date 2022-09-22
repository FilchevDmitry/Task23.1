#include <iostream>
#define DAY1 "Monday"
#define DAY2 "Tuesday"
#define DAY3 "Wednesday"
#define DAY4 "Thursday"
#define DAY5 "Friday"
#define DAY6 "Saturday"
#define DAY7 "Sunday"
#define PRINT(num) std::cout<<DAY##num
int main()
{
    int day = 0;
    std::cout << "Enter the day of the week : " << std::endl;
    std::cin >> day;
    switch (day)
    {
    case 1: PRINT(1) << std::endl;
        break;
    case 2:PRINT(2) << std::endl;
        break;
    case 3:PRINT(3) << std::endl;
        break;
    case 4:PRINT(4) << std::endl;
        break;
    case 5:PRINT(5) << std::endl;
        break;
    case 6:PRINT(6) << std::endl;
        break;
    case 7:PRINT(7) << std::endl;
        break;
    }
}
