int PalinArray(int a[], int n)
    {
    	for(int i = 0; i < n; i++){
    	    int rev = 0;
    	    int arr = a[i];
    	    while(arr != 0){
    	        int rem = arr % 10;
    	        arr = arr / 10;
    	        rev = rev * 10 + rem;
    	    }
    	    if(a[i] != rev){
    	        return 0;
    	    }
     	}
     	return 1;
    }