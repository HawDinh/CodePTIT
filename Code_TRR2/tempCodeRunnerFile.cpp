for (int i=1;i<=n;i++){
        ok[i]=1;
        int m;
        cin >> m;
        for (int j=1;j<=m;j++){
            int x;
            cin >> x;
            a[i][x]=1;
            a[x][i]=1;
        }
    }