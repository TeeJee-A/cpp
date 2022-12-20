/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:01:02 by ataji             #+#    #+#             */
/*   Updated: 2022/12/12 19:45:21 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>

void WriteToFile(std::string Fl, std::string JoinContent);
void ReadFromFile(std::string Fl, std::string S1, std::string S2);

#endif