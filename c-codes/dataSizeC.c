#include <stdio.h>
//stdint for modified data types. like int8_t
#include <stdint.h>

int main()
{
    printf("char is %lu bits (%lu bytes)\n",sizeof(char)*8, sizeof(char));
    printf("short is %lu bits (%lu bytes)\n",sizeof(short)*8, sizeof(short));
    printf("int8_t is %lu bits (%lu bytes) (form <stdint>)\n", sizeof(int8_t)*8, sizeof(int8_t));
    printf("int is %lu bits (%lu bytes)\n",sizeof(int)*8, sizeof(int));
    printf("long is %lu bits\n",sizeof(long)*8);
    printf("long long is %lu bits\n",sizeof(long long)*8);
    printf("float is %lu bits\n", sizeof(float)*8);
    printf("double is %lu bits\n", sizeof(double)*8);
    printf("long double is %lu bits\n", sizeof(long double)*8);

    return(0);
}
