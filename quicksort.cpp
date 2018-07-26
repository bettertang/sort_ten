void qsort(int *a,int l,int r)
{
  if(l<r)
  {
      int i=l,j=r;
      int temp = a[l];
      while(i<j)
      {
          while(a[j]>=temp && i<j)
            --j;

          if(i<j)
            a[i]=a[j];

          while(i<j&&a[i]<=temp)
            ++i;

          if(i<j)
            a[j--] =a[i];
      }

      a[i]=temp;
      qsort(a,l,i-1);
      qsort(a,i+1,r);

  }


}
