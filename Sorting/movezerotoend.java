public class sortmove0 {
    public static void main(String[] args) {
        int arr[]={5,0,2,0,0,4,1,3,0};
        int idx=0;
        //   for(int i=0;i<arr.length-1;i++){
        //     //if(arr[i]!=0)continue;
        //     for(int j=0;j<arr.length-1-i;j++){
        //         if(arr[j]==0){
        //             int temp =arr[j];
        //             arr[j]=arr[j+1];
        //             arr[j+1]=temp;
        //         } 
        //     }
        // }
        for(int i=0;i<arr.length-1;i++){
            if(arr[i]!=0){
                arr[idx++]=arr[i];
            }
        }
        while(idx<arr.length){
            arr[idx++]=0;
        }
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }

    }
}
