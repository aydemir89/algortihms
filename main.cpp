#include <iostream>
using namespace std;

//Binary Search
/*
 * //binary search
int main() {
    int arr[10]={2,5,7,9,12,15,34,76,87,123};
    int key=87;
    int lastIndex=10;
    int firstIndex=-1;
    int flag=0;
    while (lastIndex-firstIndex){
        int mid=(lastIndex+firstIndex) / 2;
        if (arr[mid]==key){
            flag=1;
            cout<<"finding: "<<mid;
            break;
        } else if (arr[mid] < key){
            firstIndex=mid;
        } else
            lastIndex = mid;
    }
}
*/
/*
class MergeSort{

    void merge(int arr[],int l,int m,int r){
        //find sizes of two subarrays to be merged
        int n1=m-l+1;
        int n2=r-m;
        int i=0,j=0;

        //create temp arrays
        int L[n1];
        int R[n2];

        //copy data to temp arrays
        for (int i = 0; i < n1; ++i) {
            L[i]=arr[l+i];
        }
        for (int i = 0; i < n2; ++i) {
            R[j]=arr[m+1+j];
        }


        int k=l;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }



 //       /* Copy remaining elements of L[] if any */
/*
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

       // /* Copy remaining elements of R[] if any */

/*
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    */
    /*
    void sort(int arr[], int l, int r)
    {
        if (l < r) {
            // Find the middle point
            int m =l+ (r-l)/2;

            // Sort first and second halves
            sort(arr, l, m);
            sort(arr, m + 1, r);

            // Merge the sorted halves
            merge(arr, l, m, r);
        }
    }
    */

//    /* A utility function to print array of size n */
  /*
    void printArray(int arr[])
    {
        int n=sizeof arr/ sizeof(arr[0]);
        for (int i = 0; i < n; ++i)
            cout<<arr[i];
    }
    */
/*
    int main()
    {
        int arr[]={12, 11, 13, 5, 6, 7};
        int n=sizeof arr/ sizeof(arr[0]);
        printArray(arr);
        MergeSort ob;
        ob.sort(arr,0,n-1);
        printArray(arr);
    }

};
*/