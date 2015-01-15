/*
 * This file is protected by Copyright. Please refer to the COPYRIGHT file
 * distributed with this source distribution.
 *
 * This file is part of REDHAWK librfsimulators.
 *
 * REDHAWK librfsimulators is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * REDHAWK librfsimulators is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 */
/*
 * SimDefaults.h
 *
 *  Created on: Nov 18, 2014
 */

#ifndef LIBFMRDSSIMULATOR_INCLUDE_SIMDEFAULTS_H_
#define LIBFMRDSSIMULATOR_INCLUDE_SIMDEFAULTS_H_

#include <iostream>
#include <string>

using namespace std;

#define BASE_SAMPLE_RATE 228000.0

#define MAX_OUTPUT_SAMPLE_RATE (BASE_SAMPLE_RATE*10.0)
#define MIN_OUTPUT_SAMPLE_RATE (MAX_OUTPUT_SAMPLE_RATE / 1000)

#define MAX_FREQUENCY_DEVIATION 75000.0

#define FILTER_ATTENUATION 70 // dB

static string DEFAULT_RDS_CALL_SIGN = "WSDR";
static string DEFAULT_RDS_SHORT_TEXT = "REDHAWK!";
static string DEFAULT_RDS_FULL_TEXT = "REDHAWK Radio, Rock the Hawk! (www.redhawksdr.org)";


#endif /* LIBFMRDSSIMULATOR_INCLUDE_SIMDEFAULTS_H_ */
