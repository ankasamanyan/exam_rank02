// #include"unistd.h"

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet & 0xF0) >> 4 | (octet & 0x0F) << 4);
}

// void	print_bits(unsigned char octet)
// {
//     int i = 8;
//     while (i--)
//     {
//         if (octet >> i & 1)
//             write(1, "1", 1);
//         else
//             write(1, "0", 1);
//     }
// }

// int main(int argc, char const *argv[])
// {
// 	unsigned char octet = 65;
    
//     print_bits(swap_bits(octet));

// 	return 0;
// }