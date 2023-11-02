#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <random>

#include "asulimov_sortings.hpp"
#include "akrylov_sortings.hpp"
#include "ibusko_sortings.hpp"

int arr_random(int arr[], int n, int max_num_len){ // int n - кол-во строк, int max_str_len - максимальная длина строеи
    std::mt19937 rnd(time(NULL));
    for(int i = 0;i<n;i++){
        int num = (rnd()%max_num_len );
        arr[i] = num;
    }
}

void print_array(const int* const arr, const int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

// ASULIMOV_BUBBLE_TEST

TEST(ASULIMOV_BUBBLE_TEST, oneelem_test){
    int arr1[1] = {-99};
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    ASulimov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(ASULIMOV_BUBBLE_TEST, 5x10_test){ //RANDOM 5 elements,maxelement = 10
    int arr1[5];
    arr_random(arr1,5,10);
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    ASulimov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(ASULIMOV_BUBBLE_TEST, 50x10_test){ //RANDOM 50 elements,maxelement = 10
    int arr1[50]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  10); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    ASulimov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(ASULIMOV_BUBBLE_TEST, 500x1000_test){ //RANDOM 500 elements,maxelement = 1000
    int arr1[500]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  1000); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    ASulimov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(ASULIMOV_BUBBLE_TEST, 10000x10000000_test){ //RANDOM 1.000 elements,maxelement = 10.000.000
    int arr1[10000]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  10000000); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    ASulimov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}


// IBUSKO_BUBBLE_TEST

TEST(IBUSKO_BUBBLE_TEST, oneelem_test){
    int arr1[1] = {-99};
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    IBusko::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(IBUSKO_BUBBLE_TEST, 5x10_test){ //RANDOM 5 elements,maxelement = 10
    int arr1[5];
    arr_random(arr1,5,10);
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    IBusko::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(IBUSKO_BUBBLE_TEST, 50x10_test){ //RANDOM 50 elements,maxelement = 10
    int arr1[50]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  10); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    IBusko::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(IBUSKO_BUBBLE_TEST, 500x1000_test){ //RANDOM 500 elements,maxelement = 1000
    int arr1[500]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  1000); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    IBusko::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(IBUSKO_BUBBLE_TEST, 10000x10000000_test){ //RANDOM 1.000 elements,maxelement = 10.000.000
    int arr1[10000]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  10000000); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    IBusko::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

// AKRYLOV_BUBBLE_TEST

TEST(AKRYLOV_BUBBLE_TEST, oneelem_test){
    int arr1[1] = {-99};
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    AKrylov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(AKRYLOV_BUBBLE_TEST, 5x10_test){ //RANDOM 5 elements,maxelement = 10
    int arr1[5];
    arr_random(arr1,5,10);
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    AKrylov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(AKRYLOV_BUBBLE_TEST, 50x10_test){ //RANDOM 50 elements,maxelement = 10
    int arr1[50]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  10); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    AKrylov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(AKRYLOV_BUBBLE_TEST, 500x1000_test){ //RANDOM 500 elements,maxelement = 1000
    int arr1[500]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  1000); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    AKrylov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}

TEST(AKRYLOV_BUBBLE_TEST, 10000x10000000_test){ //RANDOM 1.000 elements,maxelement = 10.000.000
    int arr1[10000]; // <- change here
    arr_random(arr1,sizeof(arr1)/sizeof(arr1[0]),  10000000); // <- change here
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2));
    std::sort(std::begin(arr1),std::end(arr1));
    AKrylov::sort_by_bubble(arr2,sizeof(arr2)/sizeof(arr2[0]));
    //print_array(arr2,sizeof(arr2)/sizeof(arr2[0]));
    EXPECT_TRUE(std::equal(std::begin(arr1), std::end(arr1), std::begin(arr2)));
}














