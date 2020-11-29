#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

int main(void)
{
	int Sums[36000];
	int count[11] = {0};

	srand(time(NULL));

	for (int i = 0; i < 36000; i++)
	{
		Sums[i] = rollDice();
		if (Sums[i] == 2)
			count[0]++;
		if (Sums[i] == 3)
			count[1]++;
		if (Sums[i] == 4)
			count[2]++;
		if (Sums[i] == 5)
			count[3]++;
		if (Sums[i] == 6)
			count[4]++;
		if (Sums[i] == 7)
			count[5]++;
		if (Sums[i] == 8)
			count[6]++;
		if (Sums[i] == 9)
			count[7]++;
		if (Sums[i] == 10)
			count[8]++;
		if (Sums[i] == 11)
			count[9]++;
		if (Sums[i] == 12)
			count[10]++;
	}

	for (int i = 0; i < 36000; i++)
	{
		printf("%2d%c", Sums[i], (i + 1) % 10 == 0 ? '\n' : '\t');
	}
	for(int i=2;i<13;i++)
	printf("\n出現%d的次數:%d\n", i, count[i-2]);
	printf("出現次數接近總投擲次數的六分之一，合理\n");

	system("pause");
	return 0;
}

int rollDice(void)
{
	int dice1;
	int dice2;
	int Sum;

	dice1 = 1 + (rand() % 6);
	dice2 = 1 + (rand() % 6);
	Sum = dice1 + dice2;

	return Sum;
}