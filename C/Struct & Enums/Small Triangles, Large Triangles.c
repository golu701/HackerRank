
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int *p = malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        float x = (tr[i].a+tr[i].b+tr[i].c)/2.0;
        p[i] = (x*(x-tr[i].a)*(x-tr[i].b)*(x-tr[i].c));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                int x = p[j];
                p[j] = p[j+1];
                p[j+1] = x;
                //swapping values of structures
                triangle t = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = t;
            }
        }
    }
}

