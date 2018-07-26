void shelsort(int *a,int n)
{
    int gap;
    for(gap=3;gap>0;gap--)
      for(int i=0;i<gap;++i)
        for(int j=i+gap;j<n;j+=gap)
        {
            int cur = a[j];
            int pre = j-gap;

            while(pre>=0&&a[pre]>=cur)
            {
              a[pre+gap] = a[pre];
              pre -=gap;
            }

            a[pre+gap] = cur;
        }

}