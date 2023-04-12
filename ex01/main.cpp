/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:08:17 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/12 13:08:17 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook prompt;
    
    prompt.openingPrompt();
    std::string input;
    while (!std::cin.eof())
    {
        std::cout << "|-> " << std::flush;
        std::cin >> input;
        if (input == "EXIT")
        {
            break;
        }
        else if (input == "ADD")
        {
            prompt.commandAdd();
        }
        else if (input == "SEARCH")
        {
            prompt.displayContact();
            prompt.commandSearch();
        }
    }
    return (0);
}
