## Sentence to Mobile Keypad Equivalent
Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence. 
 
![image](https://user-images.githubusercontent.com/76874556/136007454-ded9a228-0aa9-45fb-bcd1-6d8a59a90d9c.png)

Example 1: 
 
    Input : GEEKSFORGEEKS
    Output : 4333355777733366677743333557777

For obtaining a number, we need to press a number corresponding to that character for  number of times equal to position of the  character. For example, for character C, we press number 2 three times and accordingly.

Example 2:

    Input : HELLO WORLD
    Output : 4433555555666096667775553

### Approach
Follow the steps given below to convert a sentence into its equivalent mobile numeric keypad sequence. 
 
1. For each character, store the sequence which should be obtained at its respective position in an array, i.e. for Z, store 9999. For Y, store 999. For K, store 55 and so on.
2. For each character, subtract ASCII value of ‘A’ and obtain the position in the array pointed by that character and add the sequence stored in that array to a string.
3. If the character is a space, store 0.
4. Print the overall sequence.
