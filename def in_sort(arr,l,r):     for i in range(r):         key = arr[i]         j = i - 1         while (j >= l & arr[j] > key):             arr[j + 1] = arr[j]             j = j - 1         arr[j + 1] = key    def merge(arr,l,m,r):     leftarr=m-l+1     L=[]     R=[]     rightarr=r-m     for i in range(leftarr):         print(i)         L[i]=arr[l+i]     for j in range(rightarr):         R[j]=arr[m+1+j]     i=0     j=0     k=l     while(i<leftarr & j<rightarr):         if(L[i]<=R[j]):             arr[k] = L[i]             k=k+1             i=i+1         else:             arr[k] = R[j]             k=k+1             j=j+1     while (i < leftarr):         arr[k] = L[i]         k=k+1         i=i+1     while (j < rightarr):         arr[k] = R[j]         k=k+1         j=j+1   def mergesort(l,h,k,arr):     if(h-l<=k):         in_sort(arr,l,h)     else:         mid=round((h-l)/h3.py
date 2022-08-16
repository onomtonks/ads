def in_sort(arr,l,r):
    for i in range(r):
        key = arr[i]
        j = i - 1
        while (j >= l & arr[j] > key):
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key



def merge(arr,l,m,r):
    leftarr=m-l+1
    L=[]
    R=[]
    rightarr=r-m
    for i in range(leftarr):
        print(i)
        L[i]=arr[l+i]
    for j in range(rightarr):
        R[j]=arr[m+1+j]
    i=0
    j=0
    k=l
    while(i<leftarr & j<rightarr):
        if(L[i]<=R[j]):
            arr[k] = L[i]
            k=k+1
            i=i+1
        else:
            arr[k] = R[j]
            k=k+1
            j=j+1
    while (i < leftarr):
        arr[k] = L[i]
        k=k+1
        i=i+1
    while (j < rightarr):
        arr[k] = R[j]
        k=k+1
        j=j+1


def mergesort(l,h,k,arr):
    if(h-l<=k):
        in_sort(arr,l,h)
    else:
        mid=round((h-l)/2)
        mergesort(l,mid,k,arr)
        mergesort(mid+1,h,k,arr)
        merge(arr,l,mid,h)
        
        
    
mergesort(0,7,2,[9,7,3,2,1,5,4,6,4])
