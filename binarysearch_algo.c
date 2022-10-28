#include<stdio.h>
void searchkey(int find)
{
    if (find>0)
    printf("Key found at possitiion %d",find);
    else
    printf("The key not found");

}
int binarysearch(int* A ,int first,int last,int key )
{
  int x,y,mid;
    if (last<first)
        return -1;
    else {
           mid=(last+first)/2;
        if(A[mid]==key)
            return mid+1;
        x=binarysearch(A,first,mid-1,key);
        y =binarysearch(A,mid+1,last,key);
        if(x== -1 && y == -1)
            return -1;
        else if (x== -1 && y!= -1)
                return y;
             else 
                return x;
    }
}
int main ()
{
    int a[10],n,i,k,index;
    printf("Enter no of sorted integer  ");
    scanf("%d",&n) ;
    printf("Enter %d no of sorted integer  ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search key :");
    scanf("%d",&k);
    index= binarysearch(a,0,n-1,k);
    searchkey(index);
    return 0;
}
