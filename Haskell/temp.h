tempchart(int lower,int upper)
{
	int celsius,fahr;
	int step;
	step=20;
	fahr=lower;
while(fahr <= upper)
{
	 celsius=5*(fahr-32)/9;
	 fahr=fahr + step;
	 printf("fahrenheit %d\t celsius %d\n",fahr,celsius);
}
}