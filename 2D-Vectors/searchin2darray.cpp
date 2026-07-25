public class search2d2 {
    public static void main(String[] args) {
        int matrix[][] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
        int target=22;
        int i=0;
        int j=4;
        while(i<5&&j>=0){
            if(matrix[i][j]==target){
                System.out.println("Found! at "+i+","+j);
                return;
            }
            else if(matrix[i][j]>target)j--;
            else if(matrix[i][j]<target)i++;

        }
        System.out.println("Not Found");
    }
    
}
