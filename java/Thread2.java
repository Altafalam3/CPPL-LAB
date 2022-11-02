import java.lang.*;

class Mythread1 implements Runnable{

   public void run() {
       int i=1;
       while(i<13) {
           System.out.println("4 * "+ i +"= "+4*i);
           i++;
           try {
               Thread.sleep(100);
           } catch (InterruptedException e) {
               throw new RuntimeException(e);
           }
       }
   }
}

class Mythread2 implements Runnable{

   public void run() {
       char c;

       for(c = 'A'; c <= 'Z'; ++c)
           System.out.println(c + " ");
      try {
           Thread.sleep(100);
       } catch (InterruptedException e) {
           throw new RuntimeException(e);
       }
   }
}

public class Thread2 {
   public static void main(String[] args) {
      //runnable doesnt runn directly
      //bullet banao fhir gun mai bullet dalo
      Mythread1 r1 = new Mythread1();
      //method taking runnable input
      Thread t1 = new Thread(r1);

      Mythread2 r2 = new Mythread2();
      Thread t2 = new Thread(r2);

      t1.start();
      t2.start();
   }
}
