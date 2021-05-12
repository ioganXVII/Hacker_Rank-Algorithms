void staircase(int n) {
    for(int a = 1 ; a <= n; a++){
        for(int b = n-a; b > 0; b--) cout << " ";
        for(int c = a; c > 0; c--) cout << "#";
        cout << endl;
    }
}
