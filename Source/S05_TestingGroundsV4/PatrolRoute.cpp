// Fill out your copyright notice in the Description page of Project Settings.

#include "PatrolRoute.h"
#include "S05_TestingGroundsV4.h"

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}