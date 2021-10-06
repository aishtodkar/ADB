
out: main.o area_cir.o area_rect.o
	cc main.o area_cir.o area_rect.o -o out

main.o: main.c
	cc -c main.c
area_cir.o: area_cir.c
	cc -c area_cir.c
area_rect.o:area_rect.c
	cc -c area_rect.c

clean:
	rm *.o
	rm out

