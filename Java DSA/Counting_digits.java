public class Counting_digits{

    public static void main(String[] args) {
        // System.out.println("HEllo World");
        // int num = 23439984;
        
        // Solution 1
        /*
         
         int num = 235384;
         int ans = (int)Math.log10(num)+1;
         System.out.println("The digits are "+ ans);
         */

         // Solution 2
         /* 
          String s = ""+num;
          System.out.println("The length is "+s.length());
          */
          
        // Solution 3


        // slicing 
        // int num = 1634;
        // int last =0;
        // int reverse  = 0;
        // int number = num;
        // int sum = 0;
        // while (num>0){
        //     last = num%10;
        //     sum += last*last*last;
        //     reverse = reverse*10+last; // Reversing the number
        //     num = num/10;
        // }
        // System.out.println("Revrse is "+reverse);

        // if (reverse == number){
        //     System.out.println("True");
        // }
        // System.out.println("THe palindrome is "+sum);




        // Palindrome : 
        int num = 41;
        int count = 0;
        int squreroot =(int)Math.sqrt(num);
        for (int i=1;i<=squreroot;i++){
            if (num%i == 0){
                if (i==squreroot){
                    System.out.println(squreroot);
                    count++;
                    continue;
                }
                int sec = num/i;
                count+=2;
                System.out.println(i+" "+sec);
            }
        }
        if (count == 2){
            System.out.println("It is prime");
        }

    }

}