int romanToInt(char * s){
    int array[26];
    array['I'-'A']=1;
    array['V'-'A']=5;
    array['X'-'A']=10;
    array['L'-'A']=50;
    array['C'-'A']=100;
    array['D'-'A']=500;
    array['M'-'A']=1000;
    int value=0;
    int longth=strlen(s);
    for(int i=0;i<longth;i++)
    {
        int test;
        test=array[s[i]-'A'];
        if(i<longth-1&&test<array[s[i+1]-'A'])
        {
            value-=array[s[i]-'A'];
        }else
        {
            value+=array[s[i]-'A'];
        }
    }
    return value;
}