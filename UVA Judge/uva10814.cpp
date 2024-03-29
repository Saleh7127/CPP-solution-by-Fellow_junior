#include<bits/stdc++.h>
using namespace std;

const int MAXD = 10000, DIG = 9, BASE = 1000000000;

const unsigned long long BOUND = numeric_limits <unsigned long long> :: max () - (unsigned long long) BASE * BASE;

class BigInteger{
private:
     int digits[MAXD];
     int D;
public:

     friend ostream &operator<<(ostream &out,BigInteger &c);

     inline void trim()
     {
         while(D > 1 && digits[D-1] == 0 )
          D--;
     }

     inline void dealint(long long x)
     {
         memset(digits,0,sizeof(digits));
         D = 0;
         do{
             digits[D++] = x % BASE;
             x /= BASE;
         }while(x > 0);
     }

     inline void dealstr(char *s)
     {
         memset(digits,0,sizeof(digits));
         int len = strlen(s),first = (len + DIG -1)%DIG + 1;

         D = (len+DIG-1)/DIG;

         for(int i = 0;i < first;i++)
           digits[D-1] = digits[D-1]*10 + s[i] - '0';

         for(int i = first, d = D-2; i < len;i+=DIG,d--)
             for(int j = i;j < i+DIG;j++)
               digits[d] = digits[d]*10 + s[j]-'0';

         trim();
     }

     inline char *print()
     {
         trim();

         char *cdigits = new char[DIG * D + 1];

         int pos = 0,d = digits[D-1];

         do{
             cdigits[pos++] = d % 10 + '0';
             d/=10;
         }while(d > 0);

         reverse(cdigits,cdigits+pos);

         for(int i = D - 2;i >= 0;i--,pos += DIG)
          for(int j = DIG-1,t = digits[i];j >= 0;j--)
          {
              cdigits[pos+j] = t%10 + '0';
              t /= 10;
          }

        cdigits[pos] = '\0';

        return cdigits;
     }


     BigInteger(){dealint(0);}

     BigInteger(long long x){
          dealint(x);
     }

     BigInteger(int x){
          dealint(x);
     }

     BigInteger(char *s){
          dealstr(s);
     }



    inline bool operator < (const BigInteger &o) const
    {
        if(D != o.D)
          return D < o.D;

        for(int i = D-1;i>=0;i--)
          if(digits[i] != o.digits[i])
             return digits[i] < o.digits[i];
        return false; //equal

    }

    bool operator >  (const BigInteger & o)const {return o < *this;}
    bool operator <= (const BigInteger & o)const {return !(o < *this);}
    bool operator >= (const BigInteger & o)const {return !(*this < o);}
    bool operator != (const BigInteger & o)const {return o < *this || *this < o;}
    bool operator == (const BigInteger & o)const {return !(o < *this) && !(*this < o);}


    BigInteger &operator++()
    {
        *this = *this  + 1;
        return *this;
    }


    BigInteger operator ++(int)
    {
        BigInteger old = *this;
        ++(*this);
        return old;
    }

    inline BigInteger operator << (int p) const
    {
        BigInteger temp;
        temp.D = D + p;

        for (int i = 0; i < D; i++)
            temp.digits [i + p] = digits [i];

        for (int i = 0; i < p; i++)
            temp.digits [i] = 0;

        return temp;
    }

    inline BigInteger operator >> (int p) const
    {
        BigInteger temp;
        temp.D = D - p;

        for (int i = 0; i < D - p; i++)
            temp.digits [i] = digits [i + p];

        for (int i = D - p; i < D; i++)
            temp.digits [i] = 0;

        return temp;
    }


    BigInteger &operator += (const BigInteger &b)
    {
        *this = *this + b;
        return *this;
    }

    BigInteger &operator -= (const BigInteger &b)
    {
        *this = *this - b;
        return *this;
    }

    BigInteger &operator *= (const BigInteger &b)
    {
        *this = *this * b;
        return *this;
    }

    BigInteger &operator /= (const BigInteger &b)
    {
        *this = *this / b;
        return *this;
    }

     BigInteger &operator %= (const BigInteger &b)
    {
        *this = *this % b;
        return *this;
    }

     inline BigInteger operator + (const BigInteger &o) const
    {
        BigInteger sum = o;
        int carry = 0;

        for (sum.D = 0; sum.D < D || carry > 0; sum.D++)
        {
            sum.digits [sum.D] += (sum.D < D ? digits [sum.D] : 0) + carry;

            if (sum.digits [sum.D] >= BASE)
            {
                sum.digits [sum.D] -= BASE;
                carry = 1;
            }
            else
                carry = 0;
        }

        sum.D = max (sum.D, o.D);
        sum.trim ();
        return sum;
    }
   inline BigInteger operator - (const BigInteger &o) const
    {
        BigInteger diff = *this;

        for (int i = 0, carry = 0; i < o.D || carry > 0; i++)
        {
            diff.digits [i] -= (i < o.D ? o.digits [i] : 0) + carry;

            if (diff.digits [i] < 0)
            {
                diff.digits [i] += BASE;
                carry = 1;
            }
            else
                carry = 0;
        }

        diff.trim ();
        return diff;
    }
    inline BigInteger operator * (const BigInteger &o) const
    {
        BigInteger prod = 0;
        unsigned long long sum = 0, carry = 0;

        for (prod.D = 0; prod.D < D + o.D - 1 || carry > 0; prod.D++)
        {
            sum = carry % BASE;
            carry /= BASE;

            for (int j = max (prod.D - o.D + 1, 0); j <= min (D - 1, prod.D); j++)
            {
                sum += (unsigned long long) digits [j] * o.digits [prod.D - j];

                if (sum >= BOUND)
                {
                    carry += sum / BASE;
                    sum %= BASE;
                }
            }

            carry += sum / BASE;
            prod.digits [prod.D] = sum % BASE;
        }

        prod.trim ();
        return prod;
    }
    inline BigInteger range (int a, int b) const
    {
        BigInteger temp = 0;
        temp.D = b - a;

        for (int i = 0; i < temp.D; i++)
            temp.digits [i] = digits [i + a];

        return temp;
    }


    inline double double_div (const BigInteger &o) const
    {
        double val = 0, oval = 0;
        int num = 0, onum = 0;

        for (int i = D - 1; i >= max (D - 3, 0); i--, num++)
            val = val * BASE + digits [i];

        for (int i = o.D - 1; i >= max (o.D - 3, 0); i--, onum++)
            oval = oval * BASE + o.digits [i];

        return val / oval * (D - num > o.D - onum ? BASE : 1);
    }

    inline pair <BigInteger, BigInteger> divmod (const BigInteger &o) const
    {
        BigInteger quot = 0, rem = *this, temp;

        for (int i = D - o.D; i >= 0; i--)
        {
            temp = rem.range (i, rem.D);
            int div = (int) temp.double_div (o);
            BigInteger mult = o * div;

            while (div > 0 && temp < mult)
            {
                mult = mult - o;
                div--;
            }

            while (div + 1 < BASE && !(temp < mult + o))
            {
                mult = mult + o;
                div++;
            }

            rem = rem - (o * div << i);

            if (div > 0)
            {
                quot.digits [i] = div;
                quot.D = max (quot.D, i + 1);
            }
        }

        quot.trim ();
        rem.trim ();
        return make_pair (quot, rem);
    }

    inline BigInteger operator / (const BigInteger &o) const
    {
        return divmod (o).first;
    }

    inline BigInteger operator % (const BigInteger &o) const
    {
        return divmod (o).second;
    }


    inline BigInteger power (int exp) const
    {
        BigInteger p = 1, temp = *this;

        while (exp > 0)
        {
            if (exp & 1) p = p * temp;
            if (exp > 1) temp = temp * temp;
            exp >>= 1;
        }

        return p;
    }

    inline BigInteger factorial() const
    {
        BigInteger ans = 1, num = *this;

        if (num == 0 || num == 1)
            return ans;
        while (!(num < 0 || num == 0)) {
            ans = ans * num;
            num = num - 1;
        }
        return ans;
    }
};

ostream &operator<<(ostream &out, BigInteger &c){
        out<<c.print();
        return out;
}

istream &operator >> (istream &in,BigInteger &c)
{
    char s[10000];
    in>>s;
    c = s;
    return in;
}
BigInteger gcd(BigInteger a,BigInteger b)
{
    if (b==0) return a;
	return gcd(b, a%b);
}
BigInteger a,b,c;
int main()
{
    char k;
    int tt;
    cin>>tt;
    while(tt--)
    {
        cin>>a>>k>>b;
        BigInteger p=gcd(a,b);
        a/=p,b/=p;
        cout<<a<<' '<<'/'<<' '<<b<<endl;
    }
    return 0;
}
