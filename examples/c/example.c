/**
* @license Apache-2.0
*
* Copyright (c) 2025 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/stats/base/dists/arcsine/mean.h"
#include <stdlib.h>
#include <stdio.h>

static double random_uniform( const double min, const double max ) {
	double v = (double)rand() / ( (double)RAND_MAX + 1.0 );
	return min + ( v * ( max - min ) );
}

int main( void ) {
	double a;
	double b;
	double m;
	int i;

	for ( i = 0; i < 10; i++ ) {
		a = random_uniform( -20.0, 0.0 );
		b = random_uniform( a, a + 40.0 );
		m = stdlib_base_dists_arcsine_mean( a, b );
		printf( "a: %lf, b: %lf, E(X;a,b): %lf\n", a, b, m );
	}
}
