int	print_hex(int i)
{
	int		counter;
	char *hex= "0123456789abcdef";
	if (i < 0)
		i += 4294967296;
	counter = 0;	
	if (i >= 16)
		counter = print_hex(i / 16);
	return (counter + write(1, &hex[i % 16], 1));
}