#include <unistd.h>
#include <stdio.h>

int main (void)
{
        char * sequential_args[] = { "sequential_min_max", "1","20", NULL };

        if (!fork ()) {
                execv ("sequential_min_max",sequential_args);
                return 1;
        }
        return 0;
}
