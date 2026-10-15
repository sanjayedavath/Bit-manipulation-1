#include <stdio.h>
#include <stdlib.h>

int main()
{
    //bitwise OR(|)
    int a=5;
    int b=3;

    printf("Bitwise OR:%d\n",(a|b));

    //bitwise AND(&)

    printf("Bitwise AND:%d\n",(a&b));




    //BITWISE XOR
    printf("Bitwise XOR:%d\n",(a^b));

    //left shift operator >>
    printf("left shift:%d\n",(5<<3));//0101 << 0101000

    //Right shift operator <<
    printf("Right shift:%d\n",(15>>3)); //1111 >> 3





    return 0;
}
