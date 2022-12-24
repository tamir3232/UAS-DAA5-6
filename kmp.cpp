
	lps_func(pattern,Lps);
	
	int i=0,j=0;
	while(i<n){
	if(pattern[j]==text[i]){i++;j++;} 
	
	if (j == m) { 
	cout<<i - m <<' '; 
	j = Lps[j - 1]; 
	} 
	else if (i < n && pattern[j] != text[i]) { 
	if (j == 0) 
	i++;
	else
	j = Lps[j - 1]; 
	}
	}
	}
	
	int main()
	{
	string text = "abcdefghijklmnopqrstuvwxyzefanyanicholasndisjfiw";
	string pattern = "zefanyanicholas";
	KMP(pattern, text);
	
	return 0; 
	}
