package Java;
import java.util.Scanner;

public class traverse {
    void traver(int []arr,int size){
        System.out.println("Elements of array are : ");
        for(int i=0;i<size;i++){
            System.out.print(arr[i] + " ");
        }
    }
    void insert(int data,int []arr,int size, int pos){
        if(pos>size && pos<1){
            return;
        } 
        for(int i=size-1;i>pos;i--){
            arr[i+1]=arr[i];
         }
         arr[pos]=data;
         size++;
    }
    public static void main(String[] args) {
        int []arr;
        int size;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Size of the array \n");
        size=sc.nextInt();

        arr=new int[size];

        System.out.println("Enter the elements of array \n");
        for(int i=0;i<size;i++){
            System.out.println("Enter "+ i + " Value of array ");
            int data=sc.nextInt();
            arr[i]=data;
        }
        traverse obj=new traverse();
        obj.traver(arr,size);

        obj.insert(12, arr, size, 2);

        obj.traver(arr,size+1);
        sc.close();
        

    }
}
