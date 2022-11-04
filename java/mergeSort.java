
public class Main {

//    void mergesort(int a[],int low,int high);
//    void printarray(int a[] , int n);
//    void merge(int a[],int mid,int low,int high);

    public void Main(int a[],int low ,int high)
    {
        int mid;
        if(low<high)
        {
            mid=(low+high)/2;
            Main(a,low,mid);
           Main(a,mid+1,high);
            merge(a,mid,low,high);
        }
    }
   public  void merge(int a[],int mid,int low,int high)
    {
        int i,j,k;
        int b[] = new int[100];
        i=low;
        j=mid+1;
        k=low;  // MISTAKE
        while(i<=mid && j<=high)
        {
            if(a[i]<a[j])
            {
                b[k]=a[i];
                i++;k++;
            }
            else
            {
                b[k]=a[j];
                j++;k++;
            }
        }
        while(i<=mid)
        {
            b[k]=a[i];
            k++;i++;
        }
        while(j<=high)
        {
            b[k]=a[j];
            k++;j++;
        }
        for(i=low;i<=high;i++)
        {
            a[i] = b[i];
        }

    }
    public void print_array(int a[],int n)
    {
        for(int i =0; i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }

    public static void main(String[] args)
    {
        int a[] = {9,14,4,8,7,5,6};
        int n = 7;
        Main m = new Main();
        m.print_array(a,n);
        m.Main(a,0,n-1);
        m.print_array(a,n);
        //return 0;
    }
}
