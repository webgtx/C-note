#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Hero {
    char name[12];
    unsigned lvl;
    float hp;
};

int main() {
    struct Hero player;
        strcpy(player.name, "Link");
        player.lvl = 5;
        player.hp = 100.0f;

    struct Hero npc = {
        "BIMO",
        20,
        200.0f
    };

    printf("Hero stats\n Name: %s\n LVL: %d\n HP:%.1f\n", player.name, player.lvl, player.hp);
    printf("NPC stats\n Name: %s\n LVL: %d\n HP:%.1f\n", npc.name, npc.lvl, npc.hp);
}