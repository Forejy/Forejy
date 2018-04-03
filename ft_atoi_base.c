int len_atoi_base(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int value_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int carac_is_whitespace(char c)
{
	return ((c != ' ' && c != '\v' && c != '\t'
	         && c != '\f' && c != '\n' && c != '\r' && c != '\0') ? 1 : 0);
}

int carac_is_base(char c, char *base)
{

	while (*base)
	{
		if (c == *base)
			return (1);
		else
		base++;
	}
	return (0);
}

int carac_is_sign(char c)
{
	return ((c == '+' || c == '-') ? 1 : 0);
}

int baseatoi_is_valid(char *base, int len)
{
	int i;
	int j;

	i = 0;
	if (len <= 1)
		return (0);

	while ( i < len - 1)
	{
		j = i + 1;
		while (j < len)
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	while (*base)
		if (*base == '+' || *base++ == '-')
			return (0);
	return (1);
}

int str_is_valid(char *str, char *base)
{
	while (!carac_is_whitespace(*str))
	{
		if (!carac_is_base(*str, base))
			return (0);
		str++;
	}
	return (1);
}

int ft_atoi_base(char *str, char *base)
{
	int nb;
	int sign;
	int len;
	int pow;

	pow = 1;
	nb   = 0;
	sign = 1;
	len = len_atoi_base(base);

	while (!carac_is_whitespace(*str))
	{
		str++;
	}

	if (carac_is_sign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!baseatoi_is_valid(base, len) || !(str_is_valid(str, base)))
		return (0);
	while (carac_is_base(*str, base))
		str++;
	str--;

	while (carac_is_base(*str, base))
	{
		nb = nb + (value_in_base(*str, base) * pow );
		pow = pow * len;
		str--;
	}
	return (sign * nb);
}