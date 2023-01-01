void Delay(unsigned int xms)
{
	unsigned char i, j;

	i = 2;
	j = 239;
	while(xms){
	do
	{
		while (--j);
	} while (--i);
}
	xms--;
}