int sumar(int a, int b);

int global = 5;

int main()
{
    int y;
    int x = 5;
    int p, q, r, t, i;
    int a = 1, b = 2, c = 3, d;

    y = sumar(x, 10);

    while (a != x){
        a *= 3 + 1 - 5 * 8 + 5 - 7 / 4;
        a = a + 1;
        a /= 2;
        a %= 2;
        a += 2;
        b *= 2;
        a -= 2;
        a %= 3 + 3 - 5 * (8 + 5 - 7 / 4);
        a -= 3 + 3 - 5 - (8 + 5 - 7 / 4);
        a /= (8 + 5 - 7 / 4);
    }

    for (i = 0; i < x; --i)
        a = a + x;

        i = a + i;
    

    {
        a = 5;
        b = a + x;
    }

    if (y == 14)
    {
        x = 2 * x;
        y = x + 2;
    }
    else
    {
        y = -2;
        global = 0;
    }

    return 0;
}

int sumar(int a, int b)
{
    int r = a + b;
    return r;
}