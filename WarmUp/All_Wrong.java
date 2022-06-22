// Write any import statements here
import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;

// Complete the function
class Solution {
  
  public String getWrongAnswers(int N, String C) {
    // Write your code here
    N = C.length();
    String ans ="";
    if(C == null) return null;
    else{
      for(int i=0;i<N;i++){
        if(C.charAt(i) == 'A'){
          ans+="B";
        } // end of if condition
        else{
          ans+="A";
        } // end of else condition
      } //end of for loop
    } // end of else condition
    return ans;
  }
  
}
