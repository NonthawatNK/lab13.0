void findLocalMax(const double A[][N],bool B[][N]){
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if (i==0||i==4||j==0||j==4){
					B[i][j] = 0;
				}
				else{
					double x = B[i][j];
					if (x>=A[i][j-1]&&x>=A[i][j+1]&&x>=A[i-1][j]&&x>=A[i+1][j])
					B[i][j]= 1 ;
				}
			}
		}
}