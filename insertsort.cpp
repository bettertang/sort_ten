void insertsort(int *a,int n)
{
    for(int i=0;i<n;++i)
    {
      int cur = a[i];
      int pre = i-1;
      while(pre>=0 && a[pre]>cur)
      {
        a[pre+1]=a[pre];
        pre--;
      }

      a[pre+1]= cur;
    }
}