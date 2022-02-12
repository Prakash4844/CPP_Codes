// A program without using the main function
#include <iostream>

int execute()
{
    std::cout << "Inside execute()";
    exit(EXIT_SUCCESS);
}

static int s = execute();

int main()
{
    std::cout << "Inside main() - never executed";
}