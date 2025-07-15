#include "Personaje.h"
#include <iostream>

Personaje::Personaje(float health, float maxHealth, float speed, int damage , float jumpHeight)
{
	std::cout << "llamando constructor con variables" << std::endl;
	_health = health;
	_maxHealth = maxHealth;
	_speed = speed;
	_damage = damage;
	_jumpHeight = jumpHeight;
}

Personaje::Personaje()
{
	std::cout << "llamando constructor por defecto" << std::endl;
	_health = 100;
	_maxHealth = 100;
	_speed = 10;
	_damage = 10;
	_jumpHeight = 10;
}

Personaje::~Personaje()
{
	std::cout << "llamando destructor" << std::endl;
}

void Personaje::Saltar()
{
	std::cout << "Saltando" << std::endl;
}

void Personaje::Disparar()
{
	std::cout << "Disparando" << std::endl;
}

float Personaje::GetDamage()
{
	return _damage;
}

void Personaje::SetDamage(float damage)
{
	_damage = damage;
}

float Personaje::GetSpeed()
{
	return _speed;
}

void Personaje::SetSpeed(float speed)
{
	_speed = speed;
}

float Personaje::GetHealth()
{
	return _health;
}

void Personaje::SetHealth(float health)
{
	_health = health;
}

float Personaje::GetMaxHealt()
{
	return _maxHealth;
}

void Personaje::SetMaxHealth(float maxHealth)
{
	_maxHealth = maxHealth;
}

float Personaje::GetJumpHeight()
{
	return _jumpHeight;
}

void Personaje::SetJumpHeight(float jumpHeight)
{
	_jumpHeight = jumpHeight;
}

