void	my_putchar();

void	my_putstr(char const *str)
{
	int numero_carac;
	numero_carac = 0;
	while (str[numero_carac] != '\0'){
		my_putchar(str[numero_carac]);
		numero_carac = numero_carac +1;
	}
	return ;
}
