iint parser(const char *format, data_t fn[], va_list arg_list)
{
  int i, k, valor, caracter_p;
  caracter_p = 0;
  for (i = 0; format[i] != '\0'; i++)
    {
      if (format[i] == '%') 
	{
	  for (k = 0; fn[k].tipo != NULL; k++)
	    {
	      if (format[i + 1] == fn[k].tipo[0])
		{
		  valor = fn[k].f(arg_list);
		  if (valor == -1)
		    return (-1);
		  caracter_p += valor;
		  break;
		}
	    }
	  if (fn[k].tipo == NULL && format[i + 1] != ' ')
	    {
	      if (format[i + 1] != '\0')
		{
		  _putcharf(format[i]);
		  _putcharf(format[i + 1]);
		  caracter_p = caracter_p + 2;
		}
	      else
		return (-1);
	    }
	  i = i + 1; 
	}
      else
	{
	  _putcharf(format[i]); 
	  caracter_p++;
	}
    }
  return (caracter_p);
}
