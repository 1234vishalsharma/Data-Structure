#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        double sum1=0,sum2=0;
        for(int i=0;i<nums1.size();i++){
            sum1+=nums1[i];
        }
        for(int i=0;i<nums2.size();i++){
            sum2+=nums2[i];
        }
        if( (nums1.size() + nums2.size()) % 2 == 0 ){
            sort(nums1.begin(),nums1.end());
            sort(nums2.begin(),nums2.end());
            return (nums1[nums1.size()-1]+nums2[0])/2;
        }
        return (sum1+sum2)/(nums1.size()+nums2.size());
    }


int main()
{
    vector<int> nums1,nums2;
    int data1,data2,n=2;
    for(int i=0;i<n;i++){
        cout<<"Nums1 data"<<endl;
        cin>>data1;
        nums1.push_back(data1);


        cout<<"Nums2 data"<<endl;
        cin>>data2;
        nums2.push_back(data2);
    }
    cout<<endl;
    cout<<nums1[nums1.size()-1]<<" "<<nums2[0]<<endl;
    cout<<endl;
    cout<<findMedianSortedArrays(nums1,nums2)<<endl;;
    return 0;
}