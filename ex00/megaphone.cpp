/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciefer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:30:32 by luciefer          #+#    #+#             */
/*   Updated: 2023/09/17 10:30:56 by luciefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *" << std::endl;
    else
    {
        for(int i = 1; i < argc; i++)
        {
            for(int j = 0; argv[i][j]; j++)
                argv[i][j] = std::toupper(argv[i][j]);
            std::cout << argv[i] << " ";
        }
        std::cout << std::endl;
    }
}
