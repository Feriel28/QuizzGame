/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Score.h
 * Author: Feriel
 *
 * Created on 13 décembre 2020, 12:21
 */

#ifndef SCORE_H
#define SCORE_H

#include <iostream>
#include <string>
#include <fstream>


class Score
{
public :
//    Score();
    Score(int score);
    void setScore(int);
    void display() const;
    void highScore()const;
    int getScore();
    void editScore();
    int getFileScore();
    void resetScore();
    
public : 
    int m_score;
};

#endif /* SCORE_H */

