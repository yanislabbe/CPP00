/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:08:35 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/12 13:08:36 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <limits>

class   PhoneBook
{
    public:

        PhoneBook();
        ~PhoneBook();

        void    commandAdd(void);
        void    commandSearch(void) const;
        void    displayContact(void) const;
        void    openingPrompt(void) const;

    private:

        Contact _contactInformation[8];
        
        int     _displayContactInformation(void) const;
};

#endif
