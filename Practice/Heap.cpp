#include <iostream>
#include <algorithm>
using namespace std;

class heap{
public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size + 1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }

    void deleteHeap(){
        if(size==0){
            cout<<"Nothing to delete";
        }

        arr[1]=arr[size];
        size--;

        int i=1;
        while (true) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if (left <= size && arr[left] > arr[largest]) {
                largest = left;
            }
            if (right <= size && arr[right] > arr[largest]) {
                largest = right;
            }

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                break;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

void heapify(int arr[], int n, int i){
    int left=2*i;
    int right=2*i+1;
    int largest=i;

    if(left<=n && arr[left]>arr[largest]){
        largest=left;
    }

    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        i=largest;
        heapify(arr,n,i);
    }
    else{
        return;
    }
}

void heapSort(int arr[], int n){
    int t=n;
    while(t>1){
        swap(arr[t],arr[1]);
        t--;
        heapify(arr,t,1);
    }
}

int main(){
    heap h;
    int s;
    cin>>s;
    int val;

    for(int i=0;i<s;i++){
        cin>>val;
        h.insert(val);
    }
    h.print();

    h.deleteHeap();
    h.print();

    int array[6]={-1,54,55,53,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(array,n,i);
    }

    for(int i=1;i<=n;i++){
        cout<<array[i]<<" ";
    }cout<<endl;

    heapSort(array,n);

    for(int i=1;i<=n;i++){
        cout<<array[i]<<" ";
    }cout<<endl;

}