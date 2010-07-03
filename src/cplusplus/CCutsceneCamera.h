/*
Copyright (C) 2006 Parallel Realities

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

class Chase : public Entity {

	private:
		
		void loadAdditional(Properties *p)
		{
		}
		
		void saveAdditional(Properties *p)
		{
		}

	public:
	
		Vector target;

};

class CutsceneCamera : public Entity {

	private:
		
		void loadAdditional(Properties *p);
		void saveAdditional(Properties *p);

	public:
		
		float speed;
		float timeout;
		
		Switch *deferredSwitch;
		
		Entity *follow;
		
		bool chasing;
		float chaseSpeed;
		Chase chase;
		
		Vector target;
		
	CutsceneCamera();
	~CutsceneCamera();

};