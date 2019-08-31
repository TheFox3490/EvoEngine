#include <rtypes.h>

//type of data
#define NULL_T 0
#define UI64 1
#define I64 2
#define DOUBLE 3
#define CHAR_T 4
#define CHAR16_T 5
#define CHAR32_T 6
#define BOOLEAN 7
#define STR 8
#define PTR 9
//method
#define VAR 0
#define ARRAY 1
#define CONSTVAR 2
#define CONSTARRAY 3

namespace rt {
    class Rvar
    {
    public:
        typedef union{
            uint64  ui64;
            int64     i64;
            double  d_t;
            char    char_t;
            char16  char16_vt;
            char32  char32_vt;
            bool    bool_t;
            Rvar*   vars;
            char*   str;
            void*   ptr;
        }var_t;
        Rvar();
        Rvar(const Rvar& var);
        Rvar(uint64 value);
        Rvar(int64 value);
        Rvar(double value);
        Rvar(char value);
        Rvar(char16 value);
        Rvar(char32 value);
        Rvar(bool value);
        Rvar(Rvar* vars, uint64 lenght);
        Rvar(char* value);
        Rvar(void* value);

        void operator =(const Rvar& var);
        void operator =(uint64 value);
        void operator =(int64 value);
        void operator =(double value);
        void operator =(char value);
        void operator =(char16 value);
        void operator =(char32 value);
        void operator =(bool value);
        void operator =(char* value);
        void operator =(void* value);

        void operator +=(const Rvar& var);
        void operator +=(uint64 value);
        void operator +=(int64 value);
        void operator +=(double value);
        void operator +=(char value);
        void operator +=(char16 value);
        void operator +=(char32 value);
        void operator +=(bool value);
        void operator +=(char* value);
        void operator +=(void* value);

        Rvar& operator +(const Rvar& var);
        Rvar& operator +(uint64 value);
        Rvar& operator +(int64 value);
        Rvar& operator +(double value);
        Rvar& operator +(char value);
        Rvar& operator +(char16 value);
        Rvar& operator +(char32 value);
        Rvar& operator +(bool value);
        Rvar& operator +(char* value);
        Rvar& operator +(void* value);

        void setVar();
        void setArray();
        void setConst();
        void setDinamic();

        operator uint64();
        operator int64();
        operator double();
        operator char();
        operator char16();
        operator char32();
        operator bool();
        operator char*();
        operator void*();
    private:
        var_t var;
        uint64 lenght;
        char method;
    };  
}
