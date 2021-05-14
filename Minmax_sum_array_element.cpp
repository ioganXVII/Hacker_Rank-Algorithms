void miniMaxSum(vector<int> arr) {
    vector<int64_t> sum_res;
    int64_t sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum+=arr[i];
    }
    for(int i = 0; i < arr.size(); i++){
        int64_t temp = sum;
        sum_res.push_back(temp-arr[i]);
    }
    const auto [min,max] = minmax_element(sum_res.begin(), sum_res.end());
    cout << *min << " " << *max;
}
