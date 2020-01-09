all: example

example.tab.c example.tab.h:	example.y
	bison -d example.y

lex.yy.c: example.l example.tab.h
	flex example.l

example: lex.yy.c example.tab.c example.tab.h
	gcc -o example example.tab.c lex.yy.c

clean:
	rm calc example.tab.c lex.yy.c example.tab.h
