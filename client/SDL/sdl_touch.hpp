/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * FreeRDP SDL touch/mouse input
 *
 * Copyright 2022 Armin Novak <armin.novak@thincast.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <winpr/wtypes.h>

#include <SDL.h>
#include "sdl_types.hpp"

BOOL sdl_scale_coordinates(sdlContext* sdl, Uint32 windowId, INT32* px, INT32* py,
                           BOOL fromLocalToRDP, BOOL applyOffset);

BOOL sdl_handle_mouse_motion(sdlContext* sdl, const SDL_MouseMotionEvent* ev);
BOOL sdl_handle_mouse_wheel(sdlContext* sdl, const SDL_MouseWheelEvent* ev);
BOOL sdl_handle_mouse_button(sdlContext* sdl, const SDL_MouseButtonEvent* ev);

BOOL sdl_handle_touch_down(sdlContext* sdl, const SDL_TouchFingerEvent* ev);
BOOL sdl_handle_touch_up(sdlContext* sdl, const SDL_TouchFingerEvent* ev);
BOOL sdl_handle_touch_motion(sdlContext* sdl, const SDL_TouchFingerEvent* ev);
