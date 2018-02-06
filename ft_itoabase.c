#include "libft.h"

static int	val_len(uintmax_t val, unsigned int base, int sign)
{
	if (val < base && sign)
		return (2);
	else if (val < base)
		return (1);
	return (1 + val_len(val / base, base, sign));
}

static char	get_chr(uintmax_t val)
{
	if (val < 10)
		return (val + '0');
	return (val - 10 + 'a');
}

static void	ft_itoa_hlp(uintmax_t val, unsigned int base, char *res, int *idx)
{
	if (val < base)
		res[(*idx)++] = get_chr(val);
	else
	{
		ft_itoa_hlp(val / base, base, res, idx);
		res[(*idx)++] = get_chr(val % base);
	}
}

static char	*ft_uitoabase_gen(uintmax_t val, int sign, unsigned int base)
{
	char	*res;
	int		idx;

	idx = 0;
	res = NULL;
	if (base > 1 && base < 17)
	{
		res = ft_strnew(val_len(val, base, sign));
		if (res)
		{
			if (sign)
				res[idx++] = '-';
			ft_itoa_hlp(val, base, res, &idx);
		}
	}
	return (res);
}

char	*ft_itoabase(intmax_t val, unsigned int base)
{
	int			sign;
	uintmax_t	uval;

	sign = 0;
	if (val < 0)
	{
		uval = val * -1L;
		if (base == 10)
			sign = 1;
	}
	else
		uval = val;
	return (ft_uitoabase_gen(uval, sign, base));
}
