/***************************************************************************
 *   Copyright (C) 2009-2012 by Ilya Kotov                                 *
 *   forkotov02@hotmail.ru                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#ifndef YOUTUBEINPUTSOURCE_H
#define YOUTUBEINPUTSOURCE_H

#include <qmmp/inputsource.h>

class YoutubeStreamReader;

/**
    @author Ilya Kotov <forkotov02@hotmail.ru>
*/
class YoutubeInputSource : public InputSource
{
Q_OBJECT
public:
    YoutubeInputSource(const QString &url, QObject *parent = 0);

    QIODevice *ioDevice();
    bool initialize();
    bool isReady();
    bool isWaiting();
    QString contentType() const;

private:
    YoutubeStreamReader *m_reader;

};

#endif // YOUTUBEINPUTSOURCE_H
