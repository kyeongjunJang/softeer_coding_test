#include<bits/stdc++.h>
using namespace std;

int compare_velocity(int* a_idx, int* b_idx, int gap_a[], int gap_b[], int v_a[], int v_b[]){
	int comp;
	if ((gap_a[*a_idx]-gap_b[*b_idx])<0){
		gap_b[*b_idx] = -gap_a[*a_idx]+gap_b[*b_idx];
		comp = -v_a[*a_idx]+v_b[*b_idx];
		*a_idx+=1;
		return comp;
	}
	else if ((gap_a[*a_idx]-gap_b[*b_idx])>0){
		gap_a[*a_idx] = gap_a[*a_idx]-gap_b[*b_idx];
		comp = -v_a[*a_idx]+v_b[*b_idx];
		*b_idx+=1;
		return comp;
	}
	else{
		comp = -v_a[*a_idx]+v_b[*b_idx];
		*a_idx+=1;
		*b_idx+=1;
		return comp;
	}
}

int main(int argc, char** argv)
{	
	int N, M;
	cin >> N >> M;

	int gt_gap_list[N];
	int test_gap_list[M];
	int gt_v_list[N];
	int test_v_list[M];

	for(int i;i<N;i++){
		int gap, v;
		cin >> gap >> v;
		gt_gap_list[i] = gap;//.push_back(gap);
		gt_v_list[i] = v;//.push_back(v);
	}
	for(int j;j<M;j++){
		int gap, v;
		cin >> gap >> v;
		test_gap_list[j] = gap;//.push_back(gap);
		test_v_list[j] = v;//.push_back(v);
	}
	int gt_idx = 0, test_idx = 0;
	int max_comp_v =0;
	while(1){
		if(gt_idx>=N or test_idx>=M)
			break;
		int comp_v = compare_velocity(&gt_idx, &test_idx, gt_gap_list, test_gap_list, gt_v_list, test_v_list);
		if (max_comp_v < comp_v)
			max_comp_v = comp_v;
	}
	cout << max_comp_v <<endl;

	return 0;
}