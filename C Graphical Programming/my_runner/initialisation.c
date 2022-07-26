/*
** EPITECH PROJECT, 2022
** initialisation.c
** File description:
** desc
*/

#include "include/my_runner.h"

void initial_two(all_t *all)
{
    all->city_two->scale4.x = 3;
    all->city_two->scale4.y = 3;
    all->city->my_pos9.x = 1920;
    all->city->my_pos9.y = 460;
    all->city->scale9.x = 3;
    all->city->scale9.y = 3;
    all->city->my_pos3.x = 0;
    all->city->my_pos3.y = 615;
    all->city->scale3.x = 3.1;
    all->city->scale3.y = 3.1;
    all->city->my_pos7.x = 1920;
    all->city->my_pos7.y = 555;
    all->city->scale7.x = 3;
    all->city->scale7.y = 3;
    all->city->my_pos6.x = 1940;
    all->city->my_pos6.y = 615;
    all->city->scale6.x = 3.1;
    all->city->scale6.y = 3.1;
}

void initalisating(all_t *all)
{
    all->spikes->scale11.y = 1;
    all->spikes->my_pos12.x = 2000;
    all->spikes->my_pos12.y = 840;
    all->spikes->scale12.x = 1;
    all->spikes->scale12.y = 1;
    all->sonic->my_posp.x = 850;
    all->sonic->my_posp.y = 815;
    all->sonic->scalep.x = 4;
    all->sonic->scalep.y = 4;
    all->clouds->my_pos1.x = 0;
    all->clouds->my_pos1.y = 90;
    all->clouds->scale1.x = 3;
    all->clouds->scale1.y = 3;
    all->city_two->my_pos2.x = 0;
    all->city_two->my_pos2.y = 555;
    all->city_two->scale2.x = 3;
    all->city_two->scale2.y = 3;
    all->city_two->my_pos4.x = 0;
    all->city_two->my_pos4.y = 460;
}

void my_initialisation(all_t *all)
{
    all->start->scale_start.x = 1.7;
    all->start->scale_start.y = 1.7;
    all->start->pos_start.x = 0;
    all->start->pos_start.y = 0;
    all->sea->my_possea.x = 0;
    all->sea->my_possea.y = 500;
    all->sea->scalesea.x = 4;
    all->sea->scalesea.y = 4;
    all->sky->my_pos10.x = 0;
    all->sky->my_pos10.y = 0;
    all->sky->scale10.x = 5;
    all->sky->scale10.y = 1;
    all->spikes->my_pos11.x = 0;
    all->spikes->my_pos11.y = 840;
    all->spikes->scale11.x = 1;
}

void initialisation(all_t *all)
{
    my_initialisation(all);
    initalisating(all);
    initial_two(all);
    all->clouds->scale8.x = 3;
    all->clouds->scale8.y = 3;
    all->over->scale_game_over.x = 1;
    all->over->scale_game_over.y = 1;
    all->over->pos_game_over.x = 0;
    all->over->pos_game_over.y = 0;
    all->clouds->my_pos8.x = 1910;
    all->clouds->my_pos8.y = 90;
}
