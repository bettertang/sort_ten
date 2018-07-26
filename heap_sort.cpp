#include<iostream>

void  max_heap_down(int *a,int start,int end)
{
		int c = start;
		int l = 2*c+1;
		int temp = a[c];
		
		for(;l<=end;++i)
		{
			if(l<end && a[l]<a[l+1])
				++l;
			if(temp>=a[l])
				break;
			else 
			{
				a[c]=a[l];
				a[l]=temp;
			}
		}
}


void heap_sort(int *a,int n)
{
	int i;
	
	for(i=n/2-1;i>=0;--i)
		max_heap_down(a,i,n-1);
	
	for(i=n-1;i>0;--i)
	{
		swap(a[0],a[i]);
		max_heap_down(a,0,i-1);
	}
	
}

/*
void maxheap(int *a,int start,int end)
{
    int c = start;
    int l = 2*c+1;
    int temp = a[c];

    for(;l<=end;c=l,l = 2*l+1)
    {
      if(l<end && a[l]<a[l+1])
          l++;
      if(temp>=a[l]) break;
      else 
      {
        a[c] = a[l];
        a[l] =temp;
      }
    }

}


void heap_sort(int *a,int n)
{
  int i;
  for(i=n/2-1;i>=0;--i)
        maxheap(a,i,n-1);

  for(i=n-1;i>0;--i)
  {
    swap(a[0],a[i]);
    maxheap(a,0,i-1);
  }

  
}
https://www.cnblogs.com/skywang12345/p/3602162.html
*/