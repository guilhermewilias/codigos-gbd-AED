#include <stdio.h>
void Item_01();
void Item_02();
void Item_03();
void Item_04();

int main() {
Item_01();
Item_02();
Item_03();
Item_04();
return 0;
}

void Item_01()
{
int C = 0;
int S = 10;
while (C < 5)
{
C = C + 1;
}
S = S + C;
printf("S = %d\n",S);

}

void Item_02()
{
int C = 0;
int S = 10;
while ( C <= 5)
{
C = C + 1;
S = S + 2;
}
S+=C;
printf("S = %d\n", S);

}

void Item_03()
{ int C = 2; int S = 8;
while (C <= 5)
{
C = C + 1;
S = S + 2;
}
if (C == 5)
{
S = S - C;
}
else
{
S = S + C;
}
printf("S = %d\n", S);

}

void Item_04()
{
int A = 2;
int B = 10;
int R;
if (A < 2)
{
if (B < 5)
{
R = A + B;
printf("R = %d\n",R);
}
else
{
R = A - B;
printf("R = %d\n",R);
}
}

else
{
if (B < 10)
{
R = B + 2;
printf("R = %d\n",R);
}
else
{
R = A + 1;
printf("R = %d\n",R);
}
}

}

//p
