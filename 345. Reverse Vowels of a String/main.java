public class Solution {
    public String reverseVowels(String s) {
        String vowels = "AEIOUaeiou";
        char[] charArray = s.toCharArray(); 
        int i = 0, j = s.length() - 1;

        while (i < j) {
            while (i < j && vowels.indexOf(charArray[i]) == -1) {
                i++;
            }
            while (i < j && vowels.indexOf(charArray[j]) == -1) {
                j--;
            }

            if (i < j) {
                char temp = charArray[i];
                charArray[i] = charArray[j];
                charArray[j] = temp;
                i++;
                j--;
            }
        }

        return new String(charArray); 
    }
}
