class Vektor
{
private:
	int g, gg, ggg;
public://методы для работы с классом
	Vektor(int a, int b, int c);//обьявление конструктора 
	int getg(void);//создание геттера
	int getgg(void);//для возвращения значения переменной
	int getggg(void);
	int mod(void);
	void umn(int);
	void print(void);
	int proiz(int,int,int);
	void sum(int, int, int);
	void vych(int, int, int);
	void funck(int, int, int);
};