reducible(l(Y,T)):- reducible(T).

reducible(l(X,T1),T2).

reducible(a(T1,T2)):-reducible(T1);reducible(T2);reducible(T1,T2).

reducible(l(X,a(T,v(X)))):- \+ free_in(X,T).
norm(T):- \+ reducible(T).


free_in(X,v(X)).
free_in(X,l(Y,T)):-X\==Y,free_in(X,T).
free_in(X,a(T1,T2)):-free_in(X,T1);free_in(X,T2).



