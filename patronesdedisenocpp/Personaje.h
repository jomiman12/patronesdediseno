#pragma once
class Personaje
{
public:
	Personaje(float health, float maxHealth, float speed, int damage, float jumpHeight);
	Personaje();
	~Personaje();
	void Saltar();
	void Disparar();

	//getters y setters
	float GetHealth();
	void SetHealth(float health);
	float GetMaxHealt();
	void SetMaxHealth(float maxHealth);
	float GetSpeed();
	void SetSpeed(float speed);
	float GetDamage();
	void SetDamage(float damage);
	float GetJumpHeight();
	void SetJumpHeight(float jumpHeight);
private:
	float _health;
	float _maxHealth;
	float _speed;
	int _damage;
	float _jumpHeight;
};

