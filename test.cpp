#include<iostream>
#include"include\Missle.h"
#include"include\Vector3.h"
using namespace std;
int main(){
    Vector3 *vec0=new Vector3(1,2,3);
    Vector3 *vec1=new Vector3(1,2,3);
    vec0->Show();
    vec1->Show();

    cout<<Vector3::Dot(*vec0,*vec1)<<endl;
    delete vec1;
    vec1=new Vector3(3,2,1);
    cout<<Vector3::Dot(*vec0,*vec1)<<endl;

	Vector3 vec2 = *vec0 + *vec1;
	cout << "plus:	";
	vec2.Show();

	vec2 = *vec0 - *vec1;
	cout << "sub:	";
	vec2.Show();
	vec2 = vec2 * 6;
	cout << "*:	";
	vec2.Show();
	char over;
	cin >> over;
    return 0;
}
