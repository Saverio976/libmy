TARGET = libmy.a

NAME_OF_THE_PROG = main.c

SRC =	./src/std.in.out/read.c	\
	./src/std.in.out/write.c	\
	./src/conversion/int_to_str.c	\
	./src/conversion/str_to_int.c	\
	./src/file/fd_close.c	\
	./src/file/fd_open.c	\
	./src/file/fd_read.c	\
	./src/file/fd_rewind.c	\
	./src/file/fd_write.c	\
	./src/file/fd_lseek.c	\
	./src/file/fd_rename.c	\
	./src/file/fd_delete.c	\
	./src/number/nb_pow.c	\
	./src/strings/str_str.c	\
	./src/strings/str_rev.c	\
	./src/strings/str_pbrk.c	\
	./src/strings/str_chr.c	\
	./src/strings/str_len.c	\
	./src/strings/str_cpy.c	\
	./src/strings/str_cmp.c	\
	./src/strings/str_cat.c	\
	./src/strings/str_upper.c	\
	./src/strings/str_lower.c	\


OBJECT =	read.o	\
		write.o	\
		int_to_str.o	\
		str_to_int.o	\
		fd_close.o	\
		fd_open.o	\
		fd_read.o	\
		fd_rewind.o	\
		fd_write.o	\
		fd_lseek.o	\
		fd_rename.o	\
		fd_delete.o	\
		nb_pow.o	\
		str_str.o	\
		str_rev.o	\
		str_pbrk.o	\
		str_chr.o	\
		str_len.o	\
		str_cpy.o	\
		str_cmp.o	\
		str_cat.o	\
		str_upper.o	\
		str_lower.o	\




help:
	less ./DOC/HELP-EN.md

aide:
	less ./DOC/AIDE-FR.md

init:
	gcc -c $(SRC)
	ar rc $(TARGET) $(OBJECT)
	rm *.o
	ranlib $(TARGET)

clean:
	rm *.o

fclean:
	rm $(TARGET)

use_libmy:
	gcc $(NAME_OF_THE_PROG) -L. -lmy -o $(NAME_OF_THE_PROG:.c=.out)
