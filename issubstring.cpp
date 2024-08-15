bool issubstring(string a,string b){
    int n=a.length();
    int m=b.length();
    bool flag=false;
    for(int i=0;i<n;i++){
        int j=0;
        int c=i;
        while(j<m && c<n){
            if(a[c]==b[j]){
                c++;
                j++;
            }
            else{
                break;
            }
        }
        if(j==m){
            flag=true;break;
        }
    }
    return flag;
}