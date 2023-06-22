string findMaxScore(int n, int d, vector<int> a) {
    int t;
    cin >> t;
    while(t--){
        cin >> n >> d;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int maxodd = 0;
        int maxeven = 0;
        
        for(int i=0; i<n; i++){
            if(a[i] > maxeven && a[i]%2 == 0){
                maxeven = a[i];
            }
            if(a[i] > maxodd && a[i]%2 != 0){
                maxodd = a[i];
            }
        }
        string ab = "Yay!";
        string ac = "Nay!";
        if(d%2 == 0){
            if(maxeven == 0){
                return ac;
            }
            else{
                return ab;
            }
        }
        else{
            if(maxodd == 0){
                return ac;
            }
            else{
                return ab;
            }
        }
    }
    
}
