int oscSeries(int n)
{
    int res=0;
    for(int i=2;i<=n;i=i+2)
    {
        res=res-i;
    }
    for(int i=1;i<=n;i=i+2)
    {
        res=res+i;
    }
    return res;
}