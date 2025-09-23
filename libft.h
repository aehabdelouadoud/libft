/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:55:31 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/23 21:26:24 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/* ************************************************************************** */
/*                          MANDATORY / LIBFT FUNCTIONS                       */
/* ************************************************************************** */

/* Memory functions */
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* String functions */
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* Character checks / conversions */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* Conversions */
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

/* String manipulation / memory allocation */
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Output functions */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* ************************************************************************** */
/*                          BONUS / LINKED LIST FUNCTIONS                     */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* Basic list operations */
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ************************************************************************** */
/*                          EXTRA / HIGH-UTILITY FUNCTIONS                    */
/* ************************************************************************** */

/* Character checks */
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_islower(int c);

/* Conversion */
char	*ft_itoa_base(int n, const char *base);
int		ft_atoi_base(const char *str, const char *base);

/* String utilities */
/* char	*ft_strrev(char *str); */
char	*ft_strndup(const char *s, size_t n);
char	*ft_strreplace(const char *str, const char *old, const char *new_str);
char	*ft_strjoin_free(char *s1, char *s2, int free_flag);

/* Memory utilities */
void	*ft_memdup(const void *src, size_t size);

/* File descriptor helpers */
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putendl(char *s);
void	ft_putnbr_base_fd(int n, const char *base, int fd);

/* Math helpers */
int		ft_abs(int n);
int		ft_max(int a, int b);
int		ft_min(int a, int b);
int		ft_clamp(int n, int min, int max);
void	ft_swap(int *a, int *b);

/* Copy / Concatenate / Size-safe string functions */
char	*ft_strcpy(char *dst, const char *src);
/* char	*ft_strncpy(char *dst, const char *src, size_t dsize); */
char	*ft_strcat(char *dst, const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
char	*ft_stpcpy(char *dst, const char *src);
char	*ft_stpncpy(char *dst, const char *src, size_t dsize);
char	*ft_stpecpy(char *dst, char *end, const char *src);
ssize_t	ft_strtcpy(char *dst, const char *src, size_t dsize);

/* Miscellaneous helpers */
/* find char within n bytes */
char	*ft_strnchr(const char *s, int c, size_t n);
/* last occurrence */
char	*ft_strrstr(const char *haystack, const char *needle);
/* bounded strlen */
size_t	ft_strlen_safe(const char *s, size_t maxlen);

#endif /* !LIBFT_H */
