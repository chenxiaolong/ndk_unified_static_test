#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    fclose(stdout);
    fclose(stderr);
    return EXIT_SUCCESS;
}
