for (int i=0;i<n;i++){
        int check=1;
    for (int j=0;j<i;j++){
        if (strcmp(a[i],a[j])==0) check=0;break;
    }
    if (check==1) printf ("%s ",a[i]);
    }