// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
// // //     for(int i=0;i<3;i++){
// // //         for(int j=0;j<4;j++){
// // //             cout<<arr[i][j]<<" ";
// // //         }
// // //         cout<<endl;
// // //     }
    
// // //     return 0;
// // // }
// // // QUESTION - to search an element is in 2D array or not
// // // #include<iostream>
// // // using namespace std;
// // // bool ispresent(int arr[][4],int target,int row ,int col){
// // //      for(int row=0;row<3;row++){
// // //         for(int col=0;col<4;col++){ 
// // //     if(arr[row][col]==target){
// // //         return 1;
// // //     }
// // //         }
// // //      }
// // //     return 0;
// // // }
// // // int main(){
// // //     int arr[3][4]={{1,2,3,4},{5,5,7,8},{8,9,10,11}};
// // //     for(int i=0;i<3;i++){
// // //         for(int j=0;j<4;j++){
// // //             cout<<arr[i][j]<<" ";
// // //         }
// // //         cout<<endl;
// // //     }
// // //     int target;
// // //     cout<<"Enter the target element want to search"<<endl;
// // //     cin>>target;
// // //    int found= ispresent(arr,target,3,4);
// // //    if(found==1){
// // //     cout<<"Element found"<<endl;

// // //    }
// // //    else {
// // //     cout<<"Element is not found :"<<endl;
// // //    }

// // // }

// // // question -find the sum row wise
// #include<iostream>
// using namespace std;
// // to print row wise sum 
// int sumrowwise(int arr[][3],int row,int col){

// for(int row=0;row<3;row++){
//     int sum=0;
//     for(int col=0;col<3;col++){
//     sum=sum+arr[row][col];
    
// }
// cout<<sum<<"  ";
// }
// cout<<endl;
// }
// // to print colomwise
// int printsum(int arr[][3],int row, int col){
//     for(int col=0;col<3;col++){
//     int sum=0;
//     for(int row=0;row<3;row++){
//     sum=sum+arr[row][col];
    
// }
// cout<<sum<<"  ";
// }
// cout<<endl;
// }
// // print largest row sum
// int largestrowsum(int arr[][3],int row,int col)
// {
//  int maxi=INT_FAST32_MIN; 
//  int rowindex=-1;
//    for(int row=0;row<3;row++){
//     int sum=0;
//     for(int col=0;col<3;col++){
//     sum=sum+arr[row][col];
    
// }
// if (sum>maxi){
//     maxi=sum;
//     rowindex=row;
// }
// }
// cout<<"The maximum sum is"<<maxi<<" ";
// cout<<rowindex<<" ";

// }
// int main(){
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
       
//     }
//         for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//  sumrowwise(arr,3,3);
//  printsum(arr,3,3);
//  largestrowsum(arr,3,4);
 
//     return 0;
// }
// // // // }
// // // // QUESTION-PRINT THE 2D array in WAVE FORM
// // // // #include<iostream>
// // // // using namespace std;
// // // //  void printwavelike(int arr[][4],int rows ,int cols){
// // // //     for(int col=0;col<4;col++){
// // // //         if(col&1)// ood index- botom to top
// // // //         {
// // // //             for(int row=rows-1;row>=0;row--){
// // // //                 cout<<arr[row][col]<<" ";
// // // //             }
// // // //     }
// // // //     else{ // even index-topto bottom
// // // //   for( int row=0;row<rows;row++){
// // // //                 cout<<arr[row][col]<<" ";
// // // //             }
// // // //     }
// // // //     }
// // // // }

// // // // int main(){
// // // //     int arr[4][4];
// // // //     for(int i=0;i<4;i++){
// // // //         for(int j=0;j<4;j++){
// // // //             cin>>arr[i][j];
// // // //         }
       
// // // //     }
// // // //     printwavelike(arr,4,4);

// // // // }
// // // #include<iostream>
// // // using namespace std;

// // // void printwavelike(int arr[][4], int rows, int cols) { // Added void return type
// // //     for (int col = 0; col < cols; col++) {
// // //         if (col & 1) { // odd index - bottom to top
// // //             for (int row = rows - 1; row >= 0; row--) { // Start from rows - 1
// // //                 cout << arr[row][col] << " ";
// // //             }
// // //         } else { // even index - top to bottom
// // //             for (int row = 0; row < rows; row++) { // Use rows variable
// // //                 cout << arr[row][col] << " ";
// // //             }
// // //         }
// // //     }
// // // }

// // // int main() {
// // //     int arr[4][4];
// // //     for (int i = 0; i < 4; i++) {
// // //         for (int j = 0; j < 4; j++) {
// // //             cin >> arr[i][j];
// // //         }
// // //     }
// // //     for (int i = 0; i < 4; i++) {
// // //         for (int j = 0; j < 4; j++) {
// // //             cout << arr[i][j]<<" ";
// // //         }
// // //         cout<<endl;
// // //     }
// // //     printwavelike(arr, 4, 4);
// // // }


// // // QUESTION!!!!- spiral print in 2D array 
// // // #include<iostream>
// // // using namespace std;
// // // void printspriralway(int arr[][4],int row,int col){
// // //     int startingrow=0;
// // //     int lastrow=row-1;
// // //     int startingcol=0;
// // //     int lastcol=col-1;
   
// // //     while(startingrow<=lastrow && startingcol<=lastcol){
// // //      for(int i=startingrow;i<=lastcol;i++){
// // //         cout<<arr[startingrow][i]<<" ";
        
// // //      }
// // //      startingrow++;

// // //      for(int i=startingrow;i<=lastrow;i++){
// // //         cout<<arr[i][lastcol]<<" ";
        
// // //      }
// // //      lastcol--;

// // //      for(int i=lastcol;i<=startingcol;i++){
// // //         cout<<arr[lastrow][i]<<" ";
       

// // //      }
// // //      lastrow--;
// // //      for(int i=lastrow;i<=startingrow;i++){
// // //         cout<<arr[i][startingcol]<<" ";
        
// // //      }
// // //      startingcol++;
// // //     }

// // //     }


 
// // // int main(){
// // //         int arr[4][4];
// // //     for (int i = 0; i < 4; i++) {
// // //         for (int j = 0; j < 4; j++) {
// // //             cin >> arr[i][j];
// // //         }
// // //     }
// // //     for (int i = 0; i < 4; i++) {
// // //         for (int j = 0; j < 4; j++) {
// // //             cout << arr[i][j]<<" ";
// // //         }
// // //         cout<<endl;
// // //     }
// // //     cout<<"spriral order printing will be"<<" ";
// // //     printspriralway(arr,4,4);
// // //     return 0;
// // // }

// // // QUESTION-Rotate your matrix by 90 degree VVVVV IMPORTANT
// // // #include<iostream>
// // // using namespace std;
// // // void rotateimage(int arr[][3],int row ,int col){
// // //     int startingrow=0;
// // //     int lastrow=row-1;
// // //     int startingcol=0;
// // //     int lastcol=col-1;

// // //      for( int i=0;i<col;i++){
// // //         for( int j=lastrow; j>=0;j--){
// // //         cout<<arr[j][i]<<" ";
      
// // //         }
        
// // //         cout<<endl;
        
// // //     }
// // // }

// // // int main(){
// // //     int arr[3][3];
// // //     for(int i=0; i<3;i++){
// // //         for(int j=0; j<3;j++){
// // //             cin >> arr[i][j];
// // //         }
        

// // //     }

// // //     // for( int i=0;i<3;i++){
// // //     //     for( int j=0;j<3;j++){
// // //     //         cout<<arr[i][j]<<" ";
// // //     //     }
// // //     //     cout<<endl;
        
// // //     // }
// // //     cout<<"ROtated image will be"<<" ";
// // //     rotateimage(arr,3,3);
// // //     }

// //     //   BINARY SEARCH IN 2 D ARRAY 
// // // question -- search 2 D matrix
// // // #include<iostream>
// // // using namespace std;
// // // bool binarysearch(int arr[][4], int row ,int col,int key){
// // // int s=0;
// // // int e=row*col-1;
// // // int mid= s+(e-s)/2;
// // // while(s<=e){
// // //     int element=arr[mid/col][mid%col];
// // //     if(element==key){
// // //         return 1;
// // //     }
// // //     else if(element<key){
// // //         s=mid+1;
// // //     }
// // //     else{
// // //         e=mid-1;

// // //     }
// // //    mid= s+(e-s)/2;

// // // }
// // // return 0;

// // // }
// // // int main(){
// // //     int arr[3][4];
// // //     int key;
// // //     cout<<"Enter the key"<<" ";

// // //     cin>>key;
// // //     for(int i=0; i<3; i++){
// // //         for(int j=0;j<4;j++){
// // //             cin>>arr[i][j];
// // //         }
// // //     } 
// // //   int found=  binarysearch(arr,3,4,key);
// // //   if (found==1){
// // //     cout<<"Number is found"<<endl;
// // //   }
// // //   else{
// // //     cout<<"Number is not found"<<endl;
// // //   }
// // //   return 0;
// // // }

// // // QUESTION -1!!- BINARY SEARCH IN 2 D MATRIX WHERE 
// // // EACH ROW IS SORTED IN ASCENDING LEFT TO right
// // // AND EACH COLUMN ARE SORTED IN ASCENDING FROM TOP TO BOTTOM 

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
    
// // // }


// // // // QUESTION 4: spiral printing of an 2D array 
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int arr[3][3]=
// // // }
