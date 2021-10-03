class Solution
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        char[] s= str.toCharArray();
        for(int i=0; i<s.length/2; i++) {
            char temp= s[i];
            s[i]= s[s.length-1-i];
            s[s.length-1-i]= temp;
        }
        str= String.valueOf(s);
        return str;
    }
}