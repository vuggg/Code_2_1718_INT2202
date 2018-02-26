double getMonthlyIncome(double workHours)
{
    if(workHours==100)
    {
        return 100*12000;
    }
    else if(workHours>100 && workHours<=150)
    {
        return 100*12000 + (workHours-100)*16000;
    }
    else if(workHours>150 && workHours <=200)
    { 
        return 100*12000 + 50*16000 + (workHours-150)*20000;
    }
    else
    {
        return 100*12000 + 50*16000 + 50*20000 + (workHours-200)*25000;
    }
}
double getIncomeAfterTax(double incomeBeforeTax)
{
	double m1 = 1000000,  m2 = 1500000,  m3 = 2000000;
	double in = incomeBeforeTax;
	double afterbh = incomeBeforeTax*0.91;
	
	if(afterbh<=m1)
	{
		return afterbh;
	}
	else if(afterbh >m1 &&afterbh<=m2)
	{
		double tax = m1*0+(afterbh-m1)*0.1;
		return afterbh - tax;
	}
	else if(afterbh>m2 && afterbh <=m3)
	{
		double tax = m1*0+ 500000*0.1+(afterbh-m2)*0.15;
		return afterbh-tax;
	}
	else
	{
		double tax = m1*0+500000*0.25+(afterbh-m3)*0.2;
		return afterbh-tax;
	}
}
double afterAmonth(double principal, double rate )
{
	return round(principal*rate);
}

double getDebt(double principal, int months, double rate)
{
	double tongno = principal + afterAmonth(principal, rate);
	int i=0;
	for(;i<months-1;i++)
	{
		tongno = round(tongno + afterAmonth(tongno, rate));
	}
	return tongno;
	
}

int getMonthInDebt(double principal, double rate, int monthlyWorkHours, double monthlyExpense)
{
	double thuNhap = getMonthlyIncome(monthlyWorkHours);
	double thuNhapSauThue = getIncomeAfterTax(thuNhap);
	double thuNhapSauSinhHoat = thuNhapSauThue - monthlyExpense;
	double monthlyPayment = thuNhapSauSinhHoat;
	int i=0;
    for(;principal>0;i++)
    {
        principal =  principal+ afterAmonth(principal,rate) - monthlyPayment;
        if(i>40)
        {
        	return -1;
		}
    }
    return i;
}
