#include<iostream>
#include"include\Missle.h"
#include"include\Vector3.h"

int main(){
    Vector3 *vec0=new Vector3(1,2,3);
    Vector3 *vec1=new Vector3(1,2,3);
    vec0->Show();
    vec1->Show();

    cout<<Vector3::Dot(*vec0,*vec1)<<endl;
    delete vec1;
    vec1=new Vector3(3,2,1);
    cout<<Vector3::Dot(*vec0,*vec1)<<endl;
    return 0;
}
