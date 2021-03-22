# Filter
一阶低通滤波器
截止频率Fc
数学模型为
Vout=Vout_last+alpha*(Vin-Vout_last)
化简为
Vout=(1-alpha)*Vout_last+alpha*Vin
其中alpha为滤波系数,
alpha=T/(T+RC)
T为采样周期，Fc为截止频率=1/(2pi*RC)
