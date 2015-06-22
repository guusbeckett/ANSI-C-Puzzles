/*
* Copyright 2007 Guus Beckett
*
* Licensed under the EUPL, Version 1.1 or – as soon they will be approved by the European Commission - subsequent versions of the EUPL (the "Licence");
* You may not use this work except in compliance with the Licence.
* You may obtain a copy of the Licence at:
*
* http://ec.europa.eu/idabc/eupl5
*
* Unless required by applicable law or agreed to in writing, software distributed under the Licence is distributed on an "AS IS" basis,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the Licence for the specific language governing permissions and limitations under the Licence.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N;
	printf("Enter N: ");
  	scanf("%d", &N );

	for (int i = 0; i < N; ++i)
	{
		printf("%d\n", 2*i+1 );
	}
	return 0;
}