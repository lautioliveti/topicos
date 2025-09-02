void palabraTitulo(Palabra* pal)
{
    *pal->vPal= toupper(*pal->vPal);

    char* i = pal->vPal + 1;
    while(*i != '\0')
    {
        *i=tolower(*i);
        i++;
    }
}
