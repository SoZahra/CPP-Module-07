/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:49:02 by fzayani           #+#    #+#             */
/*   Updated: 2025/03/18 13:56:37 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


template <typename T>
void swap(T &a, T &b){
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T& min(const T &a, const T &b){
	return (a < b) ? a : b;
}

template <typename T>
const T& max(const T &a, const T &b){
	return (a > b) ? a : b;
}

#endif