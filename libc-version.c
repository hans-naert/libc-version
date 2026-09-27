#include <stdio.h>
#include <gnu/libc-version.h>

int main(int argc, char *argv[])
{
    printf("libc version is %s\n", gnu_get_libc_version());
    printf("argv[1] is %s\n", argv[1]);
    printf("argv[2] is %s\n", argv[2]);
    return 0;
}
