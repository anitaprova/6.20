/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E6.20
Creates append. 
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b){
	vector<int> v;
	int ai=0;
	int bi=0;
	for(int i = 0; i < (a.size()+b.size())-1; i++){
		if(a[ai] < b[bi]) {
			v.push_back(a[ai]);
			ai++;
		}
		else {
			v.push_back(b[bi]);
			bi++;
		}
	}
	if(a[ai] > b[bi]) {
        	v.push_back(a[ai]);
                ai++;
        }
        else {
               	v.push_back(b[bi]);
                bi++;
        }
	return v;
}

int main() {
	vector<int> a = {1,4,9,16};
	vector<int> b = {4,7,9,9,11};
	
	vector<int> result = merge_sorted(a, b);
	for(int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}

	return 0;
}
