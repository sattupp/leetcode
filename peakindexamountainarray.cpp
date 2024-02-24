//we have to find the peak index in a mountain array

//condition-hm mountain ko teen part me dekhnge phla jo increasing part(A) hai usme arr[i]<arr[i+1] means har pichla index agle index se chota hoga qki graph upar ke side jara hai increrasing order me then decreasing order(B) me arr[i]>arr[i+1] ye hoga bcz graph niche ke side jra hai to har pichla index apne agle index se bda hoga and in peak element arr[i]>arr[i+1] and arr[i>arr[i-1]] means peak apne agle pichle sbse bda hoga

//Approach-to ab agr manlo A part that is increasing part me kisi ke upar khade rhte to binary search ke according right me move krte peak find krne ko 
//B pr khade rhte that is decreasing part to binary search ke according left me move krte peak element find krne ko 
//aur agr peak pe hi rhte to subhanallah khi move ne krte whi rhte 

//logic--first find mid element then 
//if arr[mid]<arr[mid+1] (means A ka part hai to right me move krenge to )
//{start=mid+1} 
//else{
//   e=mid; qki agr B ka part ho to humein left me move krna hoga that is end=mid-1 ya mid khudh peak pr ho to humein tb bhi end=mid krna hoga to dono hoskta hai else case me peak bhi aur B bhi to qki humein peak ko loose ne krna isly hum mid-1 ke jgh mid krenge qki lets suppose peak pr hi mid ho and end=mid-1 krdiya to peak haath se chla jaega na
// }

#include<iostream>
using namespace std;

int peakMountain(int arr[],int n){
  int start=0,end=n-1,mid;


  while(start<end) //isme 30 minute tak glti kri hai start<=end krke jbki hoga start<end bcz jb equal ka sign lgega and peak pr phuchega jb aur dekhega ki start =end hai to compare krega arr[mid]<arr[mid+1] hai ya ne and false aaega to end=mid krega fir whi pr end chla jaega fir se peak pr start aur end hai fir se end =mid krega aur baar baar end ka jgh same hi ata rhega to infinite loop me chla jaega to hum start<end likhte hai peak mountain me na ki start<=end
  {
    mid=start+(end-start)/2; //(start+end)/2 ko aise bhi likh skte hai infact ye jo abhi likhe wo better option hai bcz integer ki ek range hoti hai usse exceed ne 
    if(arr[mid]<arr[mid+1]){
      //A wali line me hu to right shift krunga
      start=mid+1;
    }
    else //else condition is for either B case or peak case
    {
      end=mid;
    }
    //mid update hoga jo ki humne while ke just agle line me likh diya
  }
  return start;
  //return end; //bhi kroge to same answer aaega bcz dono ka position jb same ata hai to loop se bahar niklta hai whi answer hojata hai 
  
}

int main(){
  int arr[]={10,20,30,90,60,50,40};
  int n=7;
 int finalans=peakMountain(arr,n);
  cout<<"peak mountain value is:"<<arr[finalans];

}