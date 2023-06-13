    char A[101];
    char B[101];

    cin >> A;
    cin >> B;

    int size = sizeof(A)/sizeof(A[0]);
    int counter = 0;
    for(int i=0; i<size; i++){
        int diff = A[i]- B[i];
        if(A[i] != B[i] && abs(diff) != 32)
        {
            if(A[i] > B[i]){
                cout << "1" << endl;
                counter = 1;
                break;
            }
            else
                cout << "-1" << endl;
                counter = 1;
                break;
        }
    }

    if(counter == 0)
        cout << "0" << endl;
