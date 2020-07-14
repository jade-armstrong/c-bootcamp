	
	while(src[c] != '\0' && strlength < (size - 1))
	{
		dest[i] = src[c];
		i++;
		c++;
    strlength++;
	}
	if (src[c] == '\0')
  {
    	dest[i] = '\0';
      return (strlength);
  }
  else
  {
    return size;
  }
}