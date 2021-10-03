import java.util.*;

class minMaxElements {

    public static void min_max(int[] arr) {
        
        int len= arr.length;
        int min, max;

        if(len%2!=0) {
            min= arr[0];
            max= arr[0];
        }
        else {
            min = arr[0]<arr[1] ? arr[0] : arr[1];
            max = arr[0]<arr[1] ? arr[1] : arr[0];
        }

        for(int i=1; i<len-1; i++) {
            if(min> arr[i]) min=arr[i];
            else if(max< arr[i]) max=arr[i];
        }

        System.out.println("Min: "+min+"\nMax: "+max);

    }
    public static void main(String[] args) {
        int arr[] = {0, 22, 125, 127, -147, 159, 170, 187, 189, 199};
        min_max(arr);
    }
}