int removeElement(int* nums, int numsSize, int val){
    int tmp = 0;
    int len = numsSize;
    
    for(int i = 0; i < len; i++){
        if(nums[i-tmp] == val){
            for(int j = i-tmp; j < numsSize-1; j++){
                nums[j] = nums[j+1];
            }
            tmp++;
            numsSize--;
        }
    }
    return numsSize;
}
