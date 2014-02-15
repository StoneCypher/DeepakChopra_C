
#include <stdio.h>
#include <stdlib.h>

int r4() {
    return rand() % 4;
}

int main(void) {

    srand(time(NULL));

    const char* starts[]     = {"Experiential truth ", "The physical world ", "Non-judgment ", "Quantum physics "};
    const char* middles[]    = {"nurtures ", "projects onto ", "imparts reality to ", "constructs with "};
    const char* qualifiers[] = {"abundance of ", "the barrier of ", "self-righteous ", "potential "};
    const char* finishes[]   = {"marvel.", "choices.", "creativity.", "actions."};

    printf("%s%s%s%s\n", starts[r4()], middles[r4()], qualifiers[r4()], finishes[r4()]);

}
