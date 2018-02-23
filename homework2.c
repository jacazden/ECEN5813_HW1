#include<stdio.h>
#include<stdint.h>
void main()
{
        char ptr[8] =
                {0xEE,0x12,0x77,0xBE,0x66,0x54,0x33,0xF0};
        uint8_t i=0;
        ptr[i] = 0xF1&127;
        i++;
        ptr[i] += 17;
        i+=2;
        ptr[i]=15%4;
        i--;
        ptr[i]>>=4;
        i=5;
        ptr[i]=(1<<5)|(4<<2);
        ptr[7]=22;
        printf("%p | 0xEE | %X",&ptr[0],ptr[0]);
        printf("%p | 0x12 | %X",&ptr[1],ptr[1]);
        printf("%p | 0x77 | %X",&ptr[2],ptr[2]);
        printf("%p | 0xBE | %X",&ptr[3],ptr[3]);
        printf("%p | 0x66 | %X",&ptr[4],ptr[4]);
        printf("%p | 0x54 | %X",&ptr[5],ptr[5]);
        printf("%p | 0x33 | %X",&ptr[6],ptr[6]);
        printf("%p | 0xF0 | %X",&ptr[7],ptr[7]);
}
