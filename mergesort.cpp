void merge(int *a,int start,int end,int *out)
{
	int left_length = (end -start)/2+1;
	int left_index = start;
	int right_index = start+left_length;
	int result_index = start;
	
	while(left_index<start + left_length && right_index <end +1)
	{
		if(a[left_index]<a[right_index])
			out[result_index++] = a[left_index++];
		else 
			out[result_index++] =a[right_index++];
	}
	
	while(left_index<start + left_length)
		out[result_index++] = a[left_index++];
	while(right_index<end+1)
		out[result_index++] = a[right_index++];
		
}


void merge_sort(int *a,int start,int end,int *out)
{
	if(1==end -start)
	{
		if(a[start]>a[end])
			swap(a[start],a[end]);
		return;
	}
	else if(0==end-start)
		return;
	else{
		
		merge_sort(a,start,(end -start+1)/2+start,end,out);
		merge_sort(a,(end -start+1)/2+start+1,out);
		merge(a,start,end,out);
		
		for(int i=start;i<=end;++i)
			a[i] =out[i];
	}
}

/*void merge(int *a, int start, int end, int *out)
{
	int left_length = (end - start + 1) / 2 + 1;
	int left_index = start;
	int right_index = start + left_length;
	int result_index = start;

	while (left_index < start + left_length && right_index < end + 1)
	{
		if (a[left_index] < a[right_index])
			out[result_index++] = a[left_index++];
		else
			out[result_index++] = a[right_index++];
	}

	while (left_index < start + left_length)
		out[result_index++] = a[left_index++];
	while (right_index < end + 1)
		out[result_index++] = a[right_index++];
	
}

void merge_sort(int *a, int start, int end, int *out)
{
	if (1 == end - start)
	{
		if (a[start] > a[end])
			swap(a[start], a[end]);
		return;
	}
	else if (0 == end - start) return;
	else
	{
		merge_sort(a, start, (end - start + 1) / 2 + start, out);
		merge_sort(a, (end - start + 1) / 2 + start + 1, end, out);
		merge(a, start, end, out);

		for (int i = start; i <= end; ++i)
			a[i] = out[i];
	}
}
https://www.cnblogs.com/rio2607/p/4489893.html
*/