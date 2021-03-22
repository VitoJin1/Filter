typedef struct{
    float Vi;
    float Vo_last;
    float Vo;
    float Fcutoff;
    float Fs;
}LPF_1orderRC_F;

void LPF_1orderRC_F_init(LPF_1orderRC_F *v)
{
    v->Vi=0.0;
    v->Vo_last=0.0;
    v->Vo=0.0;
    v->Fcutoff=30;
    v->Fs=1000;
}

float LPF_1orderRC_F_FUNC(LPF_1orderRC_F *v)
{
    float RC, Cof1,Cof2;
    RC=(float)1.0/2.0/PI/v->Fcutoff;
    Cof1=1/(1+RC*v->Fs);
    Cof2=RC*v->Fs/(1+RC*v->Fs);
    v->Vo=Cof1*v->Vi+Cof2*v->Vo_last;
    v->Vo_last=v->Vo;
    return v->Vo;
}
