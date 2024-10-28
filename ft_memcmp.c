/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:16:43 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 18:19:50 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	*s1str;
	unsigned char	*s2str;
	unsigned int	count;

	s1str = (const unsigned char *)s1;
	s2str = (const unsigned char *)s2;
	count = 0;
	while ((s1str[count] && s2str[count]) && count < n)
	{
		if (s1str[count] !=  s2str[count])
			return (s1str[count] - s2str[count]);
		count++;
	}
	return (s1str[count] - s2str[count]);
}
