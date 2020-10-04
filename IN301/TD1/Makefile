run2: rien
	./rien
	
number: number.c
	gcc -o rien -Wall number.c
	./rien
	cat nombre.data
	wc nombre.data
	
tri: rien
	sort -n nombre.data -o nombre_tri.data
	cat nombre_tri.data
	wc nombre.data
	
uniq: rien
	uniq nombre_tri.data nombre_uniq.data
	cat nombre_uniq.data
	wc nombre_uniq.data
	
rien: ex22.c
	gcc -Wall -o rien ex22.c
	
run: algos genere
	./genere
	./algos
	
run1: genere algos
	./genere
	cat nombres.data
	./algos
	cat nombres-verif.data
	diff nombres.data nombres-verif.data
	

genere: genere.c constantes.h
	gcc -Wall -o genere genere.c
	
algos: algos.c constantes.h 
	gcc -Wall -o algos algos.c	
	
debug: debug.c
	gcc -o debug -Wall debug.c -lm
	./debug

clean: 
	rm -f genere 
	rm -f nombres.data
	rm -f algos
	rm -f nombres-verif.data
