/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:20:07 by vgroux            #+#    #+#             */
/*   Updated: 2025/05/14 13:30:57 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef enum e_bool
{
	FALSE = 0,
	TRUE = 1
}	t_bool;

double		ft_atof(const char *str);
int			ft_atoi(const char *str);
long		ft_atol(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
char		**ft_free_arr(char **strs);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isnegpos(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
char		*ft_itoa(int n);
char		*ft_gnl_get_line(char *buffer);
char		*ft_gnl_read(int fd, char *buffer);
char		*ft_gnl_remove_free(char *buffer);
char		*ft_gnl_remove_old_line(char *buffer);
int			ft_gnl_strchr(char *str);
char		*ft_gnl_strjoin(char *line, char *buff);
char		*ft_gnl_strndup(char *str, size_t end);
void		ft_lst_free(t_list **head);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);
void		ft_lst_rm(t_list **head, t_list *toRm);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);
int			ft_printf(const char *format, ...);
int			ft_printf_char(char c);
int			ft_printf_conv(char format, va_list ap);
int			ft_printf_n_base(long long num, char *base);
int			ft_printf_ptr(unsigned long ptr);
int			ft_printf_str(char *str);
int			ft_printf_ui(unsigned int n);
int			ft_printerr(const char *format, ...);
int			ft_printerr_char(char c);
int			ft_printerr_conv(char format, va_list ap);
int			ft_printerr_n_base(long long num, char *base);
int			ft_printerr_ptr(unsigned long ptr);
int			ft_printerr_str(char *str);
int			ft_printerr_ui(unsigned int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		**ft_split(const char *s, char c);
char		*ft_strchr(const char *s, int c);
int			ft_strcmp(char* s1, char* s2);
int			ft_strcmp_uncase(char *s1, char *s2);
char		*ft_strdup(const char *s1);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(const char *s1, const char *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strtocase(char *s, int (*f)(int));
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_substr(const char *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_ulltoa_base(unsigned long long n, char *base);
char		*get_next_line(int fd);

#endif