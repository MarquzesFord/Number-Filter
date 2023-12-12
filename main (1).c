#include <stdio.h>
#include <stdlib.h>
#include "Bit_flag.h"

int main(int argc, char* argv[])
{
    int i;
    int temp;
    BIT_FLAGS hBit_flags = NULL;
    hBit_flags = bit_flags_init_number_of_bits(2000000000);
	if (hBit_flags == NULL)
	{
		printf("Failed to allocate the memory for the bit_flag object.\n");
		exit(1);
	}
    printf("Create your non-negative integers list and enter -1 anytime to stop: \n");

        scanf("%d", &temp);
        while(temp != -1)
        {
            bit_flags_set_flag(hBit_flags, temp);
            scanf("%d", &temp);
        }

    for (i = 0; i < bit_flags_get_size(hBit_flags); i++)
    {
        if (bit_flags_check_flag(hBit_flags, i))
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
