/*
 * Copyright (c) 2008 Cyrille Berger <cberger@cberger.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _HUMAN_BODY_HAND_H_
#define _HUMAN_BODY_HAND_H_

#include "HumanBodyLink.h"

class HumanBodyHand : public HumanBodyLink {
    public:
        HumanBodyHand(const QString& id, const QString& name, HumanBodyNode* _node1, HumanBodyNode* _node2 , HumanBody* _parent );
        virtual ~HumanBodyHand();
        virtual void paint(QPainter& _painter, const KisCoordinatesConverter* _converter);
    private:
        struct Private;
        Private* const d;
};


#endif
