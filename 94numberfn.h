 int isperfect( int n)
    {
        int i,sum=0;

    for(i=0;i<n/2;n++)
    {
        if(n%i==0)
        sum+=i;
    }
    return sum;
    }

    int isprime(int n)
    {
        int i;
        if(n==1)
        return 0;
        if(n%2==0||n%3==0)
        return 0;
        for(i=5;i<sqrt(n);i+=6)
        {
            if(n%i==0||n%(i+2)==0)
            return 1;
        }
     }
    
     int reverce(int n)
     {
        int rev=0;
        while(n>0)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        return 0;
     }
     int armstrong(int n)
     {
        int cnt=0,temp=0;
        float result=0;
        temp=n;
        while(n>0)
        {
            cnt++;
            n/=10;
        }
        n=temp;
        while(n>0)
        {
            int rem=n%10;
            result+=pow(rem,cnt);
            n/=10;
        }
        return (result==temp);
     }
    