/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:45:34 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/09 11:04:25 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void par_a(int a1, int a2, char* n, int ww)
{
    while (a1 <= 9)
	{
        a2 = a1 + 1;
        while (a2 <= 9)
        {
            write(1, &n[a1], 1);
            write(1, &n[a2], 1);
            write (1, " ", 1);
            a2++;
        }
        a1++;
        ww = a1;
        write(1, &n[a1], 1);
        write(1, &n[ww], 1);
        write (1, " ", 1);
	}
}

void	bucle(int a1, int a2, int b1, int b2, int ww)
{
    char* n;

    n = "0123456789";
    par_a(a1, a2, n, ww);
	/*while (a1 <= 9)
	{   if ()
        {
            a2 = a1 + 1;
            while (a2 <= 9)
            {
                
                while (b1 <= 9)
                {
                    b2 = b1 + 1;
                    while (b2 <= 9)
                    {
                        write(1, &n[a1], 1);
                        write(1, &n[a2], 1);
                        write (1, " ", 1);
                        write(1, &n[b1], 1);
                        write(1, &n[b2], 1);
                        write (1, ",", 1);
                        write (1, " ", 1);
                        b2++;
                    }
                    b1++;
                }
                a2++;
            }
        }
		a1++;
	}*/
}

void	ft_print_comb2()
{
	int a1;
	int a2;
	int b2;
	int b1;
    int ww;
	

	a1 = 0;
	a2 = 0;
	b1 = 0;
	b2 = 0;
    ww = 0;
	
	bucle(a1, a2, b1, b2, ww);
}

int main(){ft_print_comb2();}