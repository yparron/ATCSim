/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <fstream>

namespace atcsim{

AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
  std::list<Flight*> flights = Airport::getInstance()->getFlights();
  std::list<Flight*>::iterator it;

  Position pos_aterrizaje_0(3500.0, 0.0, 100.0);
  Position pos_aterrizaje_1(1500.0, 0.0, 50.0);
  Position pos_aterrizaje_2(200.0, 0.0, 25.0);
  Position pos_aterrizaje_3(-750.0, 0.0, 25.0);

  //circuito para y + e x +
    // primer circuito pra x mayores que 15000 e y +
  Position pos_circuitoAa_0(17000.0, 15000.0, 2500.0);
  Position pos_circuitoAa_1(11000.0, 15000.0, 2500.0);
  Position pos_circuitoAa_2(11000.0, 5000.0, 2500.0);
  Position pos_circuitoAa_3(17000.0, 5000.0, 2500.0);

  Position pos_circuitoAa_4(17000.0, 15000.0, 1250.0);
  Position pos_circuitoAa_5(11000.0, 15000.0, 1250.0);
  Position pos_circuitoAa_6(11000.0, 5000.0, 1250.0);
  Position pos_circuitoAa_7(17000.0, 5000.0, 1250.0);

  Position pos_circuitoAa_8(17000.0, 15000.0, 500.0);
  Position pos_circuitoAa_9(11000.0, 15000.0, 500.0);
  Position pos_circuitoAa_10(11000.0, 5000.0, 500.0);
  Position pos_circuitoAa_11(17000.0, 5000.0, 500.0);

    // segundo circuito para x positivas menores que 15000 e y +

  Position pos_circuitoAb_0(8000.0, 15000.0, 2500.0);
  Position pos_circuitoAb_1(2000.0, 15000.0, 2500.0);
  Position pos_circuitoAb_2(2000.0, 5000.0, 2500.0);
  Position pos_circuitoAb_3(8000.0, 5000.0, 2500.0);

  Position pos_circuitoAb_4(8000.0, 15000.0, 1250.0);
  Position pos_circuitoAb_5(2000.0, 15000.0, 1250.0);
  Position pos_circuitoAb_6(2000.0, 5000.0, 1250.0);
  Position pos_circuitoAb_7(8000.0, 5000.0, 1250.0);

  Position pos_circuitoAb_8(8000.0, 15000.0, 500.0);
  Position pos_circuitoAb_9(2000.0, 15000.0, 500.0);
  Position pos_circuitoAb_10(2000.0, 5000.0, 500.0);
  Position pos_circuitoAb_11(8000.0, 5000.0, 500.0);

  //circuito para y - e x +
    // primer circuito para y - e x mayores que 15000
  Position pos_circuitoBa_0(17000.0, -15000.0, 2500.0);
  Position pos_circuitoBa_1(11000.0, -15000.0, 2500.0);
  Position pos_circuitoBa_2(11000.0, -5000.0, 2500.0);
  Position pos_circuitoBa_3(17000.0, -5000.0, 2500.0);

  Position pos_circuitoBa_4(17000.0, -15000.0, 1250.0);
  Position pos_circuitoBa_5(11000.0, -15000.0, 1250.0);
  Position pos_circuitoBa_6(11000.0, -5000.0, 1250.0);
  Position pos_circuitoBa_7(17000.0, -5000.0, 1250.0);

  Position pos_circuitoBa_8(17000.0, -15000.0, 500.0);
  Position pos_circuitoBa_9(11000.0, -15000.0, 500.0);
  Position pos_circuitoBa_10(11000.0, -5000.0, 500.0);
  Position pos_circuitoBa_11(17000.0, -5000.0, 500.0);

    // segundo circuito para y - e x positiva pero menor que 15000

  Position pos_circuitoBb_0(8000.0, -15000.0, 2500.0);
  Position pos_circuitoBb_1(2000.0, -15000.0, 2500.0);
  Position pos_circuitoBb_2(2000.0, -5000.0, 2500.0);
  Position pos_circuitoBb_3(8000.0, -5000.0, 2500.0);

  Position pos_circuitoBb_4(8000.0, -15000.0, 1250.0);
  Position pos_circuitoBb_5(2000.0, -15000.0, 1250.0);
  Position pos_circuitoBb_6(2000.0, -5000.0, 1250.0);
  Position pos_circuitoBb_7(8000.0, -5000.0, 1250.0);

  Position pos_circuitoBb_8(8000.0, -15000.0, 500.0);
  Position pos_circuitoBb_9(2000.0, -15000.0, 500.0);
  Position pos_circuitoBb_10(2000.0, -5000.0, 500.0);
  Position pos_circuitoBb_11(8000.0, -5000.0, 500.0);

  //circuito para y - e x -
  Position pos_circuitoC_0(-15000.0, -5000.0, 2500.0);
  Position pos_circuitoC_1(-15000.0, -15000.0, 2500.0);
  Position pos_circuitoC_2(-10000.0, -15000.0, 2500.0);
  Position pos_circuitoC_3(-10000.0, -5000.0, 2500.0);

  Position pos_circuitoC_4(-15000.0, -5000.0, 1250.0);
  Position pos_circuitoC_5(-15000.0, -15000.0, 1250.0);
  Position pos_circuitoC_6(-10000.0, -15000.0, 1250.0);
  Position pos_circuitoC_7(-10000.0, -5000.0, 1250.0);

  Position pos_circuitoC_8(-15000.0, -5000.0, 500.0);
  Position pos_circuitoC_9(-15000.0, -15000.0, 500.0);
  Position pos_circuitoC_10(-10000.0, -15000.0, 500.0);
  Position pos_circuitoC_11(-10000.0, -5000.0, 500.0);

  //circuito para y + e x -
  Position pos_circuitoD_0(-15000.0, 5000.0, 2500.0);
  Position pos_circuitoD_1(-15000.0, 15000.0, 2500.0);
  Position pos_circuitoD_2(-10000.0, 15000.0, 2500.0);
  Position pos_circuitoD_3(-10000.0, 5000.0, 2500.0);

  Position pos_circuitoD_4(-15000.0, 5000.0, 1250.0);
  Position pos_circuitoD_5(-15000.0, 15000.0, 1250.0);
  Position pos_circuitoD_6(-10000.0, 15000.0, 1250.0);
  Position pos_circuitoD_7(-10000.0, 5000.0, 1250.0);

  Position pos_circuitoD_8(-15000.0, 5000.0, 500.0);
  Position pos_circuitoD_9(-15000.0, 15000.0, 500.0);
  Position pos_circuitoD_10(-10000.0, 15000.0, 500.0);
  Position pos_circuitoD_11(-10000.0, 5000.0, 500.0);


  Route ra0, ra1, ra2, ra3;

  Route rcAa0, rcAa1, rcAa2, rcAa3, rcAa4, rcAa5, rcAa6, rcAa7, rcAa8, rcAa9, rcAa10, rcAa11;
  Route rcAb0, rcAb1, rcAb2, rcAb3, rcAb4, rcAb5, rcAb6, rcAb7, rcAb8, rcAb9, rcAb10, rcAb11;

  Route rcBa0, rcBa1, rcBa2, rcBa3, rcBa4, rcBa5, rcBa6, rcBa7, rcBa8, rcBa9, rcBa10, rcBa11;
  Route rcBb0, rcBb1, rcBb2, rcBb3, rcBb4, rcBb5, rcBb6, rcBb7, rcBb8, rcBb9, rcBb10, rcBb11;

  Route rcC0, rcC1, rcC2, rcC3, rcC4, rcC5, rcC6, rcC7, rcC8, rcC9, rcC10, rcC11;
  Route rcD0, rcD1, rcD2, rcD3, rcD4, rcD5, rcD6, rcD7, rcD8, rcD9, rcD10, rcD11;

  ra0.pos = pos_aterrizaje_0;
  ra0.speed = 500.0;
  ra1.pos = pos_aterrizaje_1;
  ra1.speed = 100.0;
  ra2.pos = pos_aterrizaje_2;
  ra2.speed = 19.0;
  ra3.pos = pos_aterrizaje_3;
  ra3.speed = 15.0;

  rcAa0.pos = pos_circuitoAa_0;
  rcAa0.speed = 500.0;
  rcAa1.pos = pos_circuitoAa_1;
  rcAa1.speed = 100.0;
  rcAa2.pos = pos_circuitoAa_2;
  rcAa2.speed = 100.0;
  rcAa3.pos = pos_circuitoAa_3;
  rcAa3.speed = 100.0;
  rcAa4.pos = pos_circuitoAa_4;
  rcAa4.speed = 100.0;
  rcAa5.pos = pos_circuitoAa_5;
  rcAa5.speed = 100.0;
  rcAa6.pos = pos_circuitoAa_6;
  rcAa6.speed = 100.0;
  rcAa7.pos = pos_circuitoAa_7;
  rcAa7.speed = 100.0;
  rcAa8.pos = pos_circuitoAa_8;
  rcAa8.speed = 100.0;
  rcAa9.pos = pos_circuitoAa_9;
  rcAa9.speed = 100.0;
  rcAa10.pos = pos_circuitoAa_10;
  rcAa10.speed = 19.0;
  rcAa11.pos = pos_circuitoAa_11;
  rcAa11.speed = 15.0;

  rcAb0.pos = pos_circuitoAb_0;
  rcAb0.speed = 500.0;
  rcAb1.pos = pos_circuitoAb_1;
  rcAb1.speed = 100.0;
  rcAb2.pos = pos_circuitoAb_2;
  rcAb2.speed = 100.0;
  rcAb3.pos = pos_circuitoAb_3;
  rcAb3.speed = 100.0;
  rcAb4.pos = pos_circuitoAb_4;
  rcAb4.speed = 100.0;
  rcAb5.pos = pos_circuitoAb_5;
  rcAb5.speed = 100.0;
  rcAb6.pos = pos_circuitoAb_6;
  rcAb6.speed = 100.0;
  rcAb7.pos = pos_circuitoAb_7;
  rcAb7.speed = 100.0;
  rcAb8.pos = pos_circuitoAb_8;
  rcAb8.speed = 100.0;
  rcAb9.pos = pos_circuitoAb_9;
  rcAb9.speed = 100.0;
  rcAb10.pos = pos_circuitoAb_10;
  rcAb10.speed = 19.0;
  rcAb11.pos = pos_circuitoAb_11;
  rcAb11.speed = 15.0;

  rcBa0.pos = pos_circuitoBa_0;
  rcBa0.speed = 500.0;
  rcBa1.pos = pos_circuitoBa_1;
  rcBa1.speed = 100.0;
  rcBa2.pos = pos_circuitoBa_2;
  rcBa2.speed = 100.0;
  rcBa3.pos = pos_circuitoBa_3;
  rcBa3.speed = 100.0;
  rcBa4.pos = pos_circuitoBa_4;
  rcBa4.speed = 100.0;
  rcBa5.pos = pos_circuitoBa_5;
  rcBa5.speed = 100.0;
  rcBa6.pos = pos_circuitoBa_6;
  rcBa6.speed = 100.0;
  rcBa7.pos = pos_circuitoBa_7;
  rcBa7.speed = 100.0;
  rcBa8.pos = pos_circuitoBa_8;
  rcBa8.speed = 100.0;
  rcBa9.pos = pos_circuitoBa_9;
  rcBa9.speed = 100.0;
  rcBa10.pos = pos_circuitoBa_10;
  rcBa10.speed = 19.0;
  rcBa11.pos = pos_circuitoBa_11;
  rcBa11.speed = 15.0;

  rcBb0.pos = pos_circuitoBb_0;
  rcBb0.speed = 500.0;
  rcBb1.pos = pos_circuitoBb_1;
  rcBb1.speed = 100.0;
  rcBb2.pos = pos_circuitoBb_2;
  rcBb2.speed = 100.0;
  rcBb3.pos = pos_circuitoBb_3;
  rcBb3.speed = 100.0;
  rcBb4.pos = pos_circuitoBb_4;
  rcBb4.speed = 100.0;
  rcBb5.pos = pos_circuitoBb_5;
  rcBb5.speed = 100.0;
  rcBb6.pos = pos_circuitoBb_6;
  rcBb6.speed = 100.0;
  rcBb7.pos = pos_circuitoBb_7;
  rcBb7.speed = 100.0;
  rcBb8.pos = pos_circuitoBb_8;
  rcBb8.speed = 100.0;
  rcBb9.pos = pos_circuitoBb_9;
  rcBb9.speed = 100.0;
  rcBb10.pos = pos_circuitoBb_10;
  rcBb10.speed = 19.0;
  rcBb11.pos = pos_circuitoBb_11;
  rcBb11.speed = 15.0;

  rcC0.pos = pos_circuitoC_0;
  rcC0.speed = 500.0;
  rcC1.pos = pos_circuitoC_1;
  rcC1.speed = 100.0;
  rcC2.pos = pos_circuitoC_2;
  rcC2.speed = 19.0;
  rcC3.pos = pos_circuitoC_3;
  rcC3.speed = 19.0;
  rcC4.pos = pos_circuitoC_4;
  rcC4.speed = 19.0;
  rcC5.pos = pos_circuitoC_5;
  rcC5.speed = 19.0;
  rcC6.pos = pos_circuitoC_6;
  rcC6.speed = 19.0;
  rcC7.pos = pos_circuitoC_7;
  rcC7.speed = 19.0;
  rcC8.pos = pos_circuitoC_8;
  rcC8.speed = 19.0;
  rcC9.pos = pos_circuitoC_9;
  rcC9.speed = 19.0;
  rcC10.pos = pos_circuitoC_10;
  rcC10.speed = 19.0;
  rcC11.pos = pos_circuitoC_11;
  rcC11.speed = 15.0;

  rcD0.pos = pos_circuitoD_0;
  rcD0.speed = 500.0;
  rcD1.pos = pos_circuitoD_1;
  rcD1.speed = 100.0;
  rcD2.pos = pos_circuitoD_2;
  rcD2.speed = 19.0;
  rcD3.pos = pos_circuitoD_3;
  rcD3.speed = 19.0;
  rcD4.pos = pos_circuitoD_4;
  rcD4.speed = 19.0;
  rcD5.pos = pos_circuitoD_5;
  rcD5.speed = 19.0;
  rcD6.pos = pos_circuitoD_6;
  rcD6.speed = 19.0;
  rcD7.pos = pos_circuitoD_7;
  rcD7.speed = 19.0;
  rcD8.pos = pos_circuitoD_8;
  rcD8.speed = 19.0;
  rcD9.pos = pos_circuitoD_9;
  rcD9.speed = 19.0;
  rcD10.pos = pos_circuitoD_10;
  rcD10.speed = 19.0;
  rcD11.pos = pos_circuitoD_11;
  rcD11.speed = 15.0;

  if(!Airport::getInstance()->is_booked_landing())
  {
    Flight* primero = *(flights.begin());
    primero -> getRoute() -> clear();
    Airport::getInstance() -> book_landing();
  }

  for(it = flights.begin(); it!=flights.end(); ++it)
  {
    if((*it)->getRoute()->empty())
    {
      if((!Airport::getInstance() -> is_booked_landing()) || (it ==flights.begin())){
        (*it)->getRoute()->push_back(ra3);
        (*it)->getRoute()->push_front(ra2);
        (*it)->getRoute()->push_front(ra1);
        (*it)->getRoute()->push_front(ra0);
      }else if(((*it)->getPosition().get_y() > 0) && ((*it)->getPosition().get_x() > 9500)){
        (*it)->getRoute()->push_back(rcAa11);
        (*it)->getRoute()->push_front(rcAa10);
        (*it)->getRoute()->push_front(rcAa9);
        (*it)->getRoute()->push_front(rcAa8);
        (*it)->getRoute()->push_front(rcAa7);
        (*it)->getRoute()->push_front(rcAa6);
        (*it)->getRoute()->push_front(rcAa5);
        (*it)->getRoute()->push_front(rcAa4);
        (*it)->getRoute()->push_front(rcAa3);
        (*it)->getRoute()->push_front(rcAa2);
        (*it)->getRoute()->push_front(rcAa1);
        (*it)->getRoute()->push_front(rcAa0);
      }else if(((*it)->getPosition().get_y() > 0) && (((*it)->getPosition().get_x() < 9500) && ((*it)->getPosition().get_x() > 0))){
        (*it)->getRoute()->push_back(rcAb11);
        (*it)->getRoute()->push_front(rcAb10);
        (*it)->getRoute()->push_front(rcAb9);
        (*it)->getRoute()->push_front(rcAb8);
        (*it)->getRoute()->push_front(rcAb7);
        (*it)->getRoute()->push_front(rcAb6);
        (*it)->getRoute()->push_front(rcAb5);
        (*it)->getRoute()->push_front(rcAb4);
        (*it)->getRoute()->push_front(rcAb3);
        (*it)->getRoute()->push_front(rcAb2);
        (*it)->getRoute()->push_front(rcAb1);
        (*it)->getRoute()->push_front(rcAb0);
      }else if(((*it)->getPosition().get_y() < 0) && ((*it)->getPosition().get_x() > 9500)){
        (*it)->getRoute()->push_back(rcBa11);
        (*it)->getRoute()->push_front(rcBa10);
        (*it)->getRoute()->push_front(rcBa9);
        (*it)->getRoute()->push_front(rcBa8);
        (*it)->getRoute()->push_front(rcBa7);
        (*it)->getRoute()->push_front(rcBa6);
        (*it)->getRoute()->push_front(rcBa5);
        (*it)->getRoute()->push_front(rcBa4);
        (*it)->getRoute()->push_front(rcBa3);
        (*it)->getRoute()->push_front(rcBa2);
        (*it)->getRoute()->push_front(rcBa1);
        (*it)->getRoute()->push_front(rcBa0);
      }else if(((*it)->getPosition().get_y() < 0) && (((*it)->getPosition().get_x() < 9500) && ((*it)->getPosition().get_x() > 0))){
        (*it)->getRoute()->push_back(rcBb11);
        (*it)->getRoute()->push_front(rcBb10);
        (*it)->getRoute()->push_front(rcBb9);
        (*it)->getRoute()->push_front(rcBb8);
        (*it)->getRoute()->push_front(rcBb7);
        (*it)->getRoute()->push_front(rcBb6);
        (*it)->getRoute()->push_front(rcBb5);
        (*it)->getRoute()->push_front(rcBb4);
        (*it)->getRoute()->push_front(rcBb3);
        (*it)->getRoute()->push_front(rcBb2);
        (*it)->getRoute()->push_front(rcBb1);
        (*it)->getRoute()->push_front(rcBb0);
      }else if(((*it)->getPosition().get_y() < 0) && ((*it)->getPosition().get_x() < 0)){
        (*it)->getRoute()->push_back(rcC11);
        (*it)->getRoute()->push_front(rcC10);
        (*it)->getRoute()->push_front(rcC9);
        (*it)->getRoute()->push_front(rcC8);
        (*it)->getRoute()->push_front(rcC7);
        (*it)->getRoute()->push_front(rcC6);
        (*it)->getRoute()->push_front(rcC5);
        (*it)->getRoute()->push_front(rcC4);
        (*it)->getRoute()->push_front(rcC3);
        (*it)->getRoute()->push_front(rcC2);
        (*it)->getRoute()->push_front(rcC1);
      }else if(((*it)->getPosition().get_y() > 0) && ((*it)->getPosition().get_x() < 0)){
        (*it)->getRoute()->push_back(rcD11);
        (*it)->getRoute()->push_front(rcD10);
        (*it)->getRoute()->push_front(rcD9);
        (*it)->getRoute()->push_front(rcD8);
        (*it)->getRoute()->push_front(rcD7);
        (*it)->getRoute()->push_front(rcD6);
        (*it)->getRoute()->push_front(rcD5);
        (*it)->getRoute()->push_front(rcD4);
        (*it)->getRoute()->push_front(rcD3);
        (*it)->getRoute()->push_front(rcD2);
        (*it)->getRoute()->push_front(rcD1);
      }
		}
	}
}

}  // namespace atcsim
