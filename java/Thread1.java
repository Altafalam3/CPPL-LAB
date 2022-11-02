import java.lang.*;

//within a process for multitasking,faster execution
//chat kr rha kabhi aur cooking kabhi not simultaneously
//concurrently both threads starts running
//2 ways - extend Thread ,implement Runnable

class Mythread1 extends Thread{
    //overriding thread.java
    @Override
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

class Mythread2 extends Thread{
    @Override
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

public class Thread1 {
    public static void main(String[] args) {

        Mythread1 t1 = new Mythread1();
        Mythread2 t2 = new Mythread2();
        //start is used to run thread
        t1.start();
        t2.start();
    }
}