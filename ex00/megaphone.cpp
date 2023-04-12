/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:17:03 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/12 12:17:05 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 1;
    while (i < argc)
    {
        std::string str(argv[i]);
        char *end = &str[0];
        while (*end != '\0')
        {
            end++;
        }
        char *start = &str[0];
        while (start < end)
        {
            std::cout << (char)toupper(*start);
            start++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}
