class Solution {
    public String sortSentence(String s) {
        String[] word=s.split(" ");
        int i=0;
        while(i<word.length){
            int ind=word[i].charAt(word[i].length()-1)-1-48;
            if(word[ind].charAt(word[ind].length()-1)!=word[i].charAt(word[i].length()-1)){
                String temp=word[i];
                word[i]=word[ind];
                word[ind]=temp;
            }
            else
                i++;
        }
        StringBuilder ans=new StringBuilder();
        for(i=0;i<word.length;i++){
            for(int j=0;j<word[i].length()-1;j++){
                ans.append(word[i].charAt(j));
            }
            if(i!=word.length-1)
                ans.append(' ');
        }
        return ans.toString();
    }
}