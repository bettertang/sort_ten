void selsort(int *a,int n)
{
    for(int i=0;i<n;++i)
    {
        int min = i;
        for(int j=0;j<n;++j)
          if(a[min]>a[j])
              min = j;
        swap(a[i],a[min]);
    }

}