/*=============================================================================
Project: LiFe
Theme: BIP (Block-lterative Projection) method (No MPI)
Module: Problems10-1.h (LP problems of dimension 10 with 1 randome inequality)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
===============================================================================*/
#pragma once

//=========================== Method Parameters ===============================
#define PP_EPS_ZERO		1E-9	// Accuracy for comparison with zero

/*============================== rnd10-0 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd10-0"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
//-------------------------------------------------------------------------------

/*============================== rnd10-1-1 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd10-1-1"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//-------------------------------------------------------------------------------

/*============================== rnd10-1-2 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd10-1-2"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//-------------------------------------------------------------------------------

/*============================== rnd10-1-3 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd10-1-3"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//-------------------------------------------------------------------------------

/*============================== rnd10-1-4 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd10-1-4"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//-------------------------------------------------------------------------------

/*============================== rnd10-1-5 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd10-1-5"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//-------------------------------------------------------------------------------

/*============================== rnd10-1-6 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd10-1-6"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//-------------------------------------------------------------------------------
/*===============================================================================*/