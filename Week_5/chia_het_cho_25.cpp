int *genNumbers(int N)
{
    int *arr = new int[N];
    for(int i=0;i<N;i++)
    {
        arr[i] = rand() % 50;
    }
    return arr;
}

void printNumbers(int *arr, int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((arr[i] + arr[k] + arr[j])%25==0)
                {
                    cout << arr[i] <<" "<<arr[j] <<" "<<arr[k]<< endl;
                    while(k<n-1 && (arr[k] == arr[k+1])) k++;
                }
            }
            while(j<n-1 && (arr[j] == arr[j+1])) j++;
        }
        while(i<n-2 && (arr[i] == arr[i+1])) i++;
    }
}
