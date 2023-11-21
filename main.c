#include <stdio.h>
#include <limits.h>

int	main()
{
	ft_printf("\n");
	ft_printf("\033[1;31m                             ___________              \n");
        printf("                             |cspdiuxX%|              \n");
	ft_printf("                             ¯¯¯¯¯¯¯¯¯¯¯              \033[0m\n");

	printf("\033[1;32m=============================================================\n");
	printf("\033[1;34mAvec c : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%c", 'c'));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%c", 'c'));
	printf("\033[1;32m=============================================================\n");
	printf("\033[1;34mAvec s : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%s", "SALUT SALUT"));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%s", "SALUT SALUT"));
	printf("\033[1;32m=============================================================\n");

	printf("\033[1;34mAvec p : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%p", 42));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%p", 42));
	printf("\033[1;32m=============================================================\n");

	printf("\033[1;34mAvec d : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%d", -1));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%d", -1));
	printf("\033[1;32m=============================================================\n");

	printf("\033[1;34mAvec i : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%i", INT_MIN));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%i", INT_MIN));
	printf("\033[1;32m=============================================================\n");

	printf("\033[1;34mAvec u : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%u", -1));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%u", -1));
	printf("\033[1;32m=============================================================\n");
	
	printf("\033[1;34mAvec x : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%x", 42));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%x", 42));
	printf("\033[1;32m=============================================================\n");
	
	printf("\033[1;34mAvec X : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%X", 42));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%X", 42));
	printf("\033[1;32m=============================================================\n");
	
	printf("\033[1;34mAvec % : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf(" %%%% "));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n\n", ft_printf(" %%%% "));
	
						printf("\033[1;32m=============================================================\033[0m\n");
	
	printf("\033[1;34mTest 1 cspdiuxX% : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("\033[1;31mVRAI FONCTION|\033[0m Test 1: %c Test 2: %s Test 3: %p Test 4: %d Test 5: %i Test 6: %u Test 7: %x Test 8: %X Test 9: %", 0,0,0,0,0,0,0,0,0));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("\033[1;31m--MA FONCTION|\033[0m Test 1: %c Test 2: %s Test 3: %p Test 4: %d Test 5: %i Test 6: %u Test 7: %x Test 8: %X Test 9: %", 0,0,0,0,0,0,0,0,0));
	
printf("\033[1;32m=============================================================\033[0m\n");
	
	printf("\033[1;34mTest 2 cspspdpdidiuiuxuxXxX%%c%%cs%% : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("\033[1;31mVRAI FONCTION|\033[0m Test 1: %c%s%p Test 2: %s%p%d Test 3: %p%d%i Test 4: %d%i%u Test 5: %i%u%x Test 6: %u%x%X Test 7: %x%X% Test 8: %X%%c Test 9: %%c%s", 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("\033[1;31m--MA FONCTION|\033[0m Test 1: %c%s%p Test 2: %s%p%d Test 3: %p%d%i Test 4: %d%i%u Test 5: %i%u%x Test 6: %u%x%X Test 7: %x%X% Test 8: %X%%c Test 9: %%c%s", 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0));
	printf("\033[1;32m=============================================================\033[0m\n");
	
	printf("\033[1;34mTest 3 cccsssspppdddiiiuuuxxxXXXX%%%%%% : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("\033[1;31mVRAI FONCTION|\033[0m Test 1: %c%c%c Test 2: %s%s%s Test 3: %p%p%p Test 4: %d%d%d Test 5: %i%i%i Test 6: %u%u%u Test 7: %x%x%x Test 8: %X%X%X Test 9: %%%", 0,0,0,0,0,0,0,0,0));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("\033[1;31m--MA FONCTION|\033[0m Test 1: %c%c%c Test 2: %s%s%s Test 3: %p%p%p Test 4: %d%d%d Test 5: %i%i%i Test 6: %u%u%u Test 7: %x%x%x Test 8: %X%X%X Test 9: %%%", 0,0,0,0,0,0,0,0,0));
		
printf("\n\n");	printf("\033[1;32m==============================================================================================\n");
	printf("\033[1;32m==============================================================================================\n\n");
	ft_printf("\033[1;31m                             ___________              \n");
        printf("                             |NULL TEST|              \n");
	ft_printf("                             ¯¯¯¯¯¯¯¯¯¯¯              \033[0m\n");
	printf("\033[1;32m=============================================================\n");
	printf("\033[1;34mAvec c : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%c", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%c", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");
	printf("\033[1;34mAvec s : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%s", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%s", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");

	printf("\033[1;34mAvec p : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%p", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%p", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");

	printf("\033[1;34mAvec d : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%d", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%d", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");

	printf("\033[1;34mAvec i : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%i", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%i", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");

	printf("\033[1;34mAvec u : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%u", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%u", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");
	
	printf("\033[1;34mAvec x : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%x", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%x", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");
	
	printf("\033[1;34mAvec X : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%X", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%X", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");
	
		printf("\033[1;34mAvec % : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf("%", NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf("%", NULL));
	printf("\033[1;32m=============================================================\033[0m\n");
	
	printf("\033[1;34mAvec NULL : \033[0m\n\n");	

	printf("\033[1;33m | Retour vrai fonction : %d\033[0m\n", printf(NULL));
	ft_printf("\033[1;33m | Retour ma fonction : %d\n", ft_printf(NULL));	
}
