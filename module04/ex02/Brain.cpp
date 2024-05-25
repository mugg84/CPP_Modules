/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:48:25 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/25 14:00:49 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	ideas = new std::string[100]();
	std::cout << "A brain is initialized" << std::endl;

}

Brain::Brain(const Brain &other){
	ideas = new std::string[100];
	*ideas = *other.ideas;
	std::cout << "A brain is copied" << std::endl;
}

Brain &Brain::operator=(const Brain &other){
	this->ideas = new std::string[100];
	*this->ideas = *other.ideas;
	return *this;
}

Brain::~Brain(){
	delete[] ideas;
	std::cout << "A brain is destroyed" << std::endl;
}
