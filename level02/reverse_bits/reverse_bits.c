// #include "unistd.h"
// #include "stdio.h"

unsigned char	reverse_bits(unsigned char halp)
{
	halp = (halp & 0xF0) >> 4 | (halp & 0xF) << 4;
	halp = (halp & 0xCC) >> 2 | (halp & 0x33) << 2;
	halp = (halp & 0xAA) >> 1 | (halp & 0x55) << 1;
	return (halp);
}

// int main(int argc, char const *argv[])
// {
// 	unsigned char octet;
// 	octet = reverse_bits(53);
// 	int	i = 8;
// 	unsigned char 	bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// 	return 0;
// }
