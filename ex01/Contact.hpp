/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:08:30 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/12 13:08:31 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <limits>

class   Contact
{
    public:
    
        Contact();
        ~Contact();
        
        void    initialization(void);
        void    index(int index);
        void    savedInformation(int index) const;
        void    showContact(int index) const;

    private:

        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
        std::string _maxLength(std::string str) const;
        std::string _input(std::string str) const;

        int         _index;
};

#endif
