#include <iostream>
#include <cmath>
using namespace std;

#include <Eigen/Core>
// Eigen 几何模块
#include <Eigen/Geometry>

/****************************
* 本程序演示了 Eigen 几何模块的使用方法
****************************/
void problem_37();

int main ( int argc, char** argv )
{
    problem_37();
}

void problem_37(){
    // init
    Eigen::Quaterniond q1(0.2,0.3,0.1,0.35);
    Eigen::Vector3d t1 = Eigen::Vector3d(0.3,0.1,0.1);
    Eigen::Vector3d p1(0.5,0,0.2);


    Eigen::Quaterniond q2(0.4,-0.1,0.2,0.5);
    Eigen::Vector3d t2 = Eigen::Vector3d(-0.1,0.5,0.3);
    
    
    //
    Eigen::Isometry3d T1=Eigen::Isometry3d::Identity();                // 虽然称为3d，实质上是4＊4的矩阵
    T1.pretranslate(t1); 
    T1 = T1*q1.matrix();


    Eigen::Isometry3d T2=Eigen::Isometry3d::Identity();                // 虽然称为3d，实质上是4＊4的矩阵
    T2.pretranslate(t2); 
    T2 = T2*q2.matrix();



    Eigen::Vector3d p2 = T2.inverse()*T1*p1;

    cout<<p2.matrix()<<endl;




}