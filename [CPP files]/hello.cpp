#include <iostream>

int main()
{
    /*
    This is a multi-line
    comment.
    */
    std::cout << "Hello World!" << std::endl; // Standard character output. Output.
    std::cout << "It's good to be here."; // '\n' = endl. However, endl clears the output buffer. '\n' is better performance-wise
    return 0;
}
