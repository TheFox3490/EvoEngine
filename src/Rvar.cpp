#include "Rvar.h"

namespace rt {

    Rvar::Rvar(){
        this->method = VAR;
        this->lenght = NULL_T;
        this->var.ptr = nullptr;
    }
    Rvar::Rvar(const Rvar& var){
        if(var.method == VAR || var.method == CONSTVAR){
            if(var.lenght == UI64)
                this->var.ui64 = var.var.ui64;
            if(var.lenght == I64)
                this->var.i64 = var.var.i64;
            if(var.lenght == DOUBLE)
                this->var.d_t = var.var.d_t;
            if(var.lenght == CHAR_T)
                this->var.char_t = var.var.char_t;
            if(var.lenght == CHAR16_T)
                this->var.char16_vt = var.var.char16_vt;
            if(var.lenght == CHAR32_T)
                this->var.char32_vt = var.var.char32_vt;
            if(var.lenght == BOOLEAN)
                this->var.bool_t = var.var.bool_t;
            if(var.lenght == STR){
                uint64 h = 0;
                if(var.var.str != nullptr)
                    while(var.var.str[h] != '\0') h++;
                this->var.str = new char[h + 1];
                for(uint64 i = 0; i < h; i++){
                    this->var.str[i] = var.var.str[i];
                }
                this->var.str[h] = '\0';
            }
            if(var.lenght == PTR)
                this->var.ptr = var.var.ptr;
            this->lenght = var.lenght;
            this->method = var.method;
            return;
        }else if(var.method == ARRAY || var.method == CONSTARRAY){
            this->lenght = var.lenght;
            this->var.vars = new Rvar[this->lenght + 1];
            for(uint64 i = 0; i <= this->lenght; i++) {
                this->var.vars[i] = var.var.vars[i];
            }
            this->method = var.method;
            return;
        }else {
            this->method = VAR;
            this->lenght = NULL_T;
            this->var.ptr = nullptr;
            return;
        }
    }
    Rvar::Rvar(uint64 value){
        this->method = VAR;
        if(this->lenght == STR)
            delete [] this->var.str;
        this->lenght = UI64;
        this->var.ui64 = value;
    }
    Rvar::Rvar(int64 value){
        this->method = VAR;
        if(this->lenght == STR)
            delete [] this->var.str;
        this->lenght = I64;
        this->var.i64 = value;
    }
    Rvar::Rvar(double value){
        this->method = VAR;
        if(this->lenght == STR)
            delete [] this->var.str;
        this->lenght = DOUBLE;
        this->var.d_t = value;
    }
    Rvar::Rvar(char value){
        this->method = VAR;
        if(this->lenght == STR)
            delete [] this->var.str;
        this->lenght = CHAR_T;
        this->var.char_t = value;
    }
    Rvar::Rvar(char16 value){
        this->method = VAR;
        if(this->lenght == STR)
            delete [] this->var.str;
        this->lenght = CHAR16_T;
        this->var.char16_vt = value;
    }
    Rvar::Rvar(char32 value){
        this->method = VAR;
        if(this->lenght == STR)
            delete [] this->var.str;
        this->lenght = CHAR32_T;
        this->var.char16_vt = value;
    }
    Rvar::Rvar(bool value){
        this->method = VAR;
        if(this->lenght == STR)
            delete [] this->var.str;
        this->lenght = BOOLEAN;
        this->var.bool_t = value;
    }
    Rvar::Rvar(Rvar* vars, uint64 lenght){
        this->method = ARRAY;
        this->lenght = lenght;
    }
    Rvar::Rvar(char* value){

    }
    Rvar::Rvar(void* value){

    }

    void Rvar::operator =(const Rvar& var){

    }
    void Rvar::operator =(uint64 value){

    }
    void Rvar::operator =(int64 value){

    }
    void Rvar::operator =(double value){

    }
    void Rvar::operator =(char value){

    }
    void Rvar::operator =(char16 value){

    }
    void Rvar::operator =(char32 value){

    }
    void Rvar::operator =(bool value){

    }
    void Rvar::operator =(char* value){

    }
    void Rvar::operator =(void* value){

    }

    void Rvar::operator +=(const Rvar& var){

    }
    void Rvar::operator +=(uint64 value){

    }
    void Rvar::operator +=(int64 value){

    }
    void Rvar::operator +=(double value){

    }
    void Rvar::operator +=(char value){

    }
    void Rvar::operator +=(char16 value){

    }
    void Rvar::operator +=(char32 value){

    }
    void Rvar::operator +=(bool value){

    }
    void Rvar::operator +=(char* value){

    }
    void Rvar::operator +=(void* value){

    }
    Rvar& Rvar::operator +(const Rvar& var){

    }
    Rvar& Rvar::operator +(uint64 value){

    }
    Rvar& Rvar::operator +(int64 value){

    }
    Rvar& Rvar::operator +(double value){

    }
    Rvar& Rvar::operator +(char value){

    }
    Rvar& operator +(char16 value){

    }
    Rvar& Rvar::operator +(char32 value){

    }
    Rvar& Rvar::operator +(bool value){

    }
    Rvar& Rvar::operator +(char* value){

    }
    Rvar& Rvar::operator +(void* value){

    }

    void Rvar::setVar(){

    }
    void Rvar::setArray(){

    }
    void Rvar::setConst(){

    }
    void Rvar::setDinamic(){

    }

    Rvar::operator uint64(){

    }
    Rvar::operator int64(){

    }
    Rvar::operator double(){

    }
    Rvar::operator char(){

    }
    Rvar::operator char16(){

    }
    Rvar::operator char32(){

    }
    Rvar::operator bool(){

    }
    Rvar::operator char*(){

    }
    Rvar::operator void*(){

    }
}
