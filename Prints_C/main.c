#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// Eigen cat maken

int main(int argc, char const *argv[])
{
	unsigned char buffer[BUFSIZ];
	int n;

	if(argc==1){	// geen argumenten
		while((n = read(0, buffer, BUFSIZ)) > 0){	// 0 = stdin
			// n aantal ingelezen bytes bijhouden, anders krijg je extra rommel
			// Als ik dan iets inlees dat ik intyp, dan zal hij dat naar scherm schrijvens
			if(write(1, buffer, n)<0){				// 1 = stdout
				perror(argv[0]);
			}
		}
	}
	else{			// wel argumenten opgegeven
		// argumenten overlopen
		int i;
		for(i=1; i<argc;i++){
			// checken of er een - tussen argumenten zit: gebruiker geeft iets in
			if(strcmp(argv[i],"-")==0){
				while((n = read(0, buffer, BUFSIZ)) > 0){
					if(write(1,buffer,n)<0){
						perror(argv[0]);
					}
				}
			}
			else{
				// ga opgegeven argument zijn inhoud lezen
				int fd;
				if((fd=open(argv[i], O_RDONLY)) < 0){
					perror(argv[0]);
				}
				else{
					while((n = read(fd, buffer, BUFSIZ)) > 0){
						if(write(1,buffer,n)<0){
							perror(argv[0]);
						}
					}
					if(close(fd)<0){
						perror(argv[i]);
					}
				}

			}
		}
	}
	exit(0);
}