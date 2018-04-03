#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char src[10] = "Hey Bitch";
	char dest[15] = "abcdefghijklmn";
	//STRCPY
	ft_putstr("STRCPY : \n");
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strcpy(dest, src);
	ft_putstr(dest);
	ft_putchar('\n');

	char dest2[15] = "abcdefghijklmn";
	//STRNCPY
	ft_putstr("\nSTRNCPY :\n");
	ft_putstr(dest2);
	ft_putchar('\n');
	ft_strncpy(dest2, src, 5);
	ft_putstr(dest2);
	ft_putchar('\n');
	dest[10];

	char src_cmp[5] = "";
	char dest_cmp[5] = "";
	printf("\nSTRCMP :\n");

	printf("%d\n", ft_strcmp(dest_cmp, src_cmp));
	printf("%d\n", strcmp(dest_cmp, src_cmp));

	char src_ncmp[5] = "a";
	//src_ncmp[1] = '-1';
	char dest_ncmp[5] = "0b3";
	//char *dest_ncmp = (void *)0;
	printf("\nSTRNCMP :\n");

	printf("%d\n", ft_strncmp(dest_ncmp, src_ncmp, 3));
	printf("%d\n", strncmp(dest_ncmp, src_ncmp, 3));

	printf("\nSTRUPCASE :\n");
	char str[6] = "aB1cD";
	printf("%s\n", ft_strupcase(str));

	printf("\nISALPHA :\n");
	printf("%d\n", ft_str_is_alpha(str));

	char src_cat[3] = "a";

	char dest_cat[5] = "0";

	printf("\nSTRCAT :\n");
	//printf("%s\n", ft_strcat(dest_cat, src_cat));
	printf("%s\n", strcat(dest_cat, src_cat));

	char src_ncat[3] = "a";
	char dest_ncat[5] = "0";

	printf("\nSTRNCAT :\n");
	printf("%s\n", ft_strncat(dest_ncat, src_ncat, 2));
	printf("%s\n", strncat(dest_ncat, src_ncat, 2));

	printf("\nSTRLCPY :\n");
	char dest_lcat[4] = "012";
	char src_lcat[5] = "abcd";
	printf("%zu\n", strlcpy(dest_lcat, src_lcat, 9));
	//printf("%u\n", ft_strlcpy(dest_lcat, src_lcat, 9));


	printf("\nPUTNBR_BASE :\n");
	ft_putnbr_base(4294953648, "0123456789abcdef");
	ft_putchar('\n');

	ft_putnbr_base(4294953648, "01234567");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "poneyvif");
	ft_putchar('\n');
	printf("\nATOI_BASE :\n");
	printf("%d\n", ft_atoi_base("*87E66B8", "0123456789AB*DE"));
	printf("%d", atoi("     -+2147483647         asdasdsada sdasd"));

	printf("\nATOI_BASE :\n");

	printf("\nPUTSTR_NON_PRINTABLE :\n");
	ft_putstr_non_printable("Cou5cou\ntu vas bien ?");

	printf("\nPRINT_MEMORY :\n");
	void *addr = (void *)0;
	ft_print_memory(addr, 47);

	printf("\nMEMSET\n");
	char a = -3;
	unsigned char *testy = (unsigned char *)malloc(sizeof(char)*2);
	//unsigned char *testy = (void *)0;

	*testy = a;

	memset(testy, '8', 2);
	ft_putstr(testy);

	ft_putchar('\n');

	char inside[30] = "Test des jeux";
	char *to_find = "";
	ft_putstr(strnstr(inside, to_find, 1));
	ft_putstr(ft_strnstr(inside, to_find, 1));

	printf("\nSTRSPLIT\n");
	char **tabstr;
	tabstr = ft_strsplit("*salut*les***etudiants*", '*');
	while (*tabstr)
	{
		ft_putstr(*tabstr);
		ft_putchar('\n');
		tabstr++;
	}

	printf("\nITOA\n");
	printf("%s\n", ft_itoa(-2147483648));

		t_list_ **begin_list  = (void *) 0;
		t_list_ *move_in_list = (void *) 0;
		//CREATE_ELEM
		void *ptr;
		int  a2               = 7;

		ptr = &a2;
		t_list_ *elem;
		elem = ft_create_elem(ptr);

		printf("\nCREATE_ELEM\n");
		if ((begin_list = (t_list_ **) malloc(sizeof(t_list_ *))))
			*begin_list = elem;
		if (begin_list)
			printf("%d\n", *(int *) (*begin_list)->data);

		//PUSH_BACK_NEW_ELEM
		char str_[6] = "Hello";
		void *ptr2;
		ptr2 = str_;

		ft_list_push_back(begin_list, ptr2);
		if ((move_in_list = (t_list_ *) malloc(sizeof(t_list_))))
			move_in_list = *begin_list;
		//LIST_LAST
		move_in_list     = ft_list_last(move_in_list);
		printf("\nPUSH_BACK, LIST_LAST\n");
		if (begin_list && move_in_list)
		{
			printf("%d\n", *(int *) (*begin_list)->data);
			printf("%s\n", (char *) (move_in_list)->data);
		}
		//printf("\n%s\n", (char *)((*begin_list)->next)->data); Syntaxe utilisable

		//PUSH_FRONT_NEW_ELEM
		printf("\nPUSH_FRONT\n");
		char str0[8] = "Premier";
		void *ptr3;

		ptr3 = str0;
		ft_list_push_front(begin_list, ptr3);

		if (begin_list)
			printf("%s\n", (char *)(*begin_list)->data);

		//LIST_SIZE
		int list_size;
		list_size = ft_list_size(*begin_list);
		if (list_size)
			printf("Size : %d\n\n", list_size);

		//LIST_PUSH_PARAMS
		if (ac)
		{
			t_list_ **begin_list_params = (void *) 0;
			t_list_ **list_at = (void *)0;
			if ((begin_list_params = (t_list_ **) malloc(sizeof(t_list_ *))))
			{
				if ((*begin_list_params = (t_list_ *) malloc(sizeof(t_list_))))
				{
					printf("\nLIST PUSH_PARAMS :\n");
					*begin_list_params = ft_list_push_params(ac, av);
					ft_list_print(*begin_list_params, 1);
					printf("\nLIST AT (n = 2) :\n");
					if (ac >= 3)
					{
						if ((list_at = (t_list_ **) malloc(sizeof(t_list_ *))))
						{
							if ((*list_at = (t_list_ *) malloc(sizeof(t_list_))))
							{
								//LIST_AT
								*begin_list_params = ft_list_push_params(ac, av);
								*list_at           = ft_list_at(*begin_list_params, 2);
								if (list_at)
									printf("%s\n", (char *) (*list_at)->data);
							}
						}
					}
					else
						printf("At least 3 arguments for LIST_AT\n");
					//LIST_REVERSE
					printf("\nLIST_REVERSE\n");
					ft_list_reverse(begin_list_params);
					ft_list_print(*begin_list_params, 1);
					//LIST_FIND
					t_list_ *find = ((void *)0);
					printf("\nLIST_FIND\n");
					if(find = (t_list_ *)malloc(sizeof(t_list_)))
					{
						int (*cmp)() = &ft_strcmp;
						char str[7] = "retest";
						void *data  = ((void *) 0);
						data = str;

						find = ft_list_find(*begin_list_params, str, cmp);
						if (find)
							printf("%s\n", (char *) find->data);

						//LIST_SORT
						printf("\nLIST_SORT\n");
						ft_list_sort(begin_list_params, cmp);
						ft_list_print(*begin_list_params, 1);

					}


					//LIST_CLEAR
					printf("\nLIST CLEAR : N'AFFICHE RIEN\n");
					ft_list_clear(begin_list_params);
					ft_list_clear(begin_list);
					ft_list_print(*begin_list_params, 1);
					ft_list_print(*begin_list, 1);
				}
			}
		}
return (0);
}