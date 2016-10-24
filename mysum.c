/* mysum.c */
int mysum(int n)
{
    int i = 1,ss = 0;
    while(i <= n)
    {
        ss = ss + i;
        i++;
    }
    return (ss);
}
