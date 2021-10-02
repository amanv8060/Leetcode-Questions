public class 12 {
    public static void main(String[] a){
        int num=44;
        String ans=intToRoman(num);
        System.out.println(ans);
        
    }
    static  String intToRoman(int num) {
        int[] nums={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        String[] sym={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;
        String op="";
        for(i=12;i>=0;i--){
            while(num>=nums[i]){
               op +=sym[i];
                num -=nums[i];
            }
        }
        return op;
    }
    
}
