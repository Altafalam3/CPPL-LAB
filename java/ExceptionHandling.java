public class ExceptionHandling {
   public static void main(String args[]) {
      int a = 10;
      int b = 0;
      try {
         // code that may raise exception
         int c = a / b;
         System.out.println("division is :"+c);
      } catch (Exception e) {
         System.out.println(e);
      }
      // rest code of the program
      System.out.println("rest of program");
   }
}