void plusMinus(vector<int> arr) {
    vector<float> arr_cont = {0.0,0.0,0.0};
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > 0)arr_cont[1]++;
        if(arr[i] == 0)arr_cont[0]++;
        if(arr[i] < 0) arr_cont[2]++;
    }
    
    cout << arr_cont[1] / arr.size() << endl;
    cout << arr_cont[2] / arr.size() << endl;
    cout << arr_cont[0] / arr.size() << endl;
}
