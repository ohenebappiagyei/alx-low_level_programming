#include <unistd.h>
/**
 * main - Entry point
 * Return: Always (0)
 */
int main() {
    const char* message = "This is an error message.\n";
    write(2, message, 25);
    return 1;
}

