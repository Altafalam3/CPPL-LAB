      fibo(0,0).
      fibo(1,1).
      fibo(N,Ans):-
      N >1,
      N1 is N-1,
      N2 is N-2,
      fibo(N1,A1),
      fibo(N2,A2),
      Ans is A1+A2.

# fibo(6,Ans).
# Ans=8.