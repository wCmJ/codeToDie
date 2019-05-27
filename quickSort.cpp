void quickSort(int *p, int lo, int hi)
{
    if(p == NULL || lo + 1 >= hi)
        return;
    
    //get position
    int value = p[lo];
    int index = lo;
    for(int i = lo + 1;i<hi;++i)
    {
        if(p[i] < value)
        {
            ++index;
            if(index != i)
            {
                p[index] = p[index]^p[i];
                p[i] = p[index]^p[i];
                p[index] = p[index]^p[i];
            }
        }    
    }
    if(index != lo)
    {
        p[index] = p[index]^p[lo];
        p[lo] = p[index]^p[lo];
        p[index] = p[index]^p[lo];
    }
    quickSort(p, lo, index);
    quickSort(p, index+1,hi);
}

