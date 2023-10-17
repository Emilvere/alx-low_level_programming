int add(int e, int m);
int sub(int e, int m);
int mul(int e, int m);
int div(int e, int m);
int mod(int e, int m);

/**
* add - adds two integers
* @e: first integer to add
* @m: second integer to add
* Return: the sum
*/

int add(int e, int m)
{
        return (e + m);
}

/**
* sub - subtracts two integers
* @e: first integer to add
* @m: second integer to add
* Return: the subtract
*/

int sub(int e, int m)
{
        return (e - m);
}

/**
* mul - multiplies two integers
* @e: first integer to add
* @m: second integer to add
* Return: the multiple
*/


int mul(int e, int m)
{
        return (e * m);
}

/**
* div - divideds two integers
* @e: first integer to add
* @m: second integer to add
* Return: the dividend integer
*/

int div(int e, int m)
{
        return (e / m);
}

/**
  mod - finds the modulus of two integers
  @e: first integer to add
  @m: second integer to add
  Return: the modulus
*/

int mod(int e, int m)
{
        return (e % m);
}
