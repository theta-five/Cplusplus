#ifndef CD_H_
#define CD_H_

class Cd {
private:
	char* performers;
	char* label;
	int selection;
	double playTime;

public:
	Cd(const char* s1, const char* s2, int n, double p);
	Cd(const Cd& c);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	void SetPerformers(const char* s1) {
		performers = new char[strlen(s1) + 1];
		strcpy_s(performers, strlen(s1) + 1, s1);
	}
	void SetLabel(const char* s2) {
		label = new char[strlen(s2) + 1];
		strcpy_s(label, strlen(s2) + 1, s2);
	}
	Cd& operator=(const Cd& c);
};

class Classic : public Cd {
private:
	char* mainX;

public:
	Classic();
	Classic(const char* m, const char* s1, const char* s2, int n, double p);
	Classic(const char* m, const Cd& c);
	Classic(const Classic& cl);
	Classic& operator=(const Classic& cl);
	virtual void Report() const;
	void SetMainX(const char* m) {
		mainX = new char[strlen(m) + 1];
		strcpy_s(mainX, strlen(m) + 1, m);
	}
	~Classic();

};

#endif // !CD_H_
