int sumar(int a, int b);

int main()
{
    int y;
    int x = 5;
    int p, q, r, t;
    int a = 1, b = 2, c = 3;

    y = sumar(x, 10);

    while (a != x)
        a = a + 1;

    for (int i = 0; i < x; i++)
    {
        a = a + 1;
    }

    {
        int a = 5;
        int b = a + x;
    }

    if (y == 14)
    {
        x = 2 * x;
        y = x + 2;
    }
    else
        y = -2;

    return 0;
}

int sumar(int a, int b)
{
    int r = a + b;
    return r;
}