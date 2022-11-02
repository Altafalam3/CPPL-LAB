    #include<stdio.h>  
      
        // Global variables  
        int a;  
        int b;  
        int Add()  
        {  
      
            return a + b;  
        }  
      
        int Mul()  
      
        {  
        int c=10; //Local Variable  
        int d=20;  ////Local Variable  
        return c*d;  
        }  
        void main()  
        {  
            int Ans1, Ans2, c=30;// Local variable  
            a = 50;  
            b = 70;  
              
            Ans1 = Add();  
            Ans2= Mul();  
              
            printf("The addition result is: %d\n",Ans1);  
                      printf("The Multiplication result is: %d\n",Ans2);  
                      printf("%d\n", c);  
        }  