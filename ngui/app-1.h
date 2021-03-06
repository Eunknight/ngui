/* ***** BEGIN LICENSE BLOCK *****
 * Distributed under the BSD license:
 *
 * Copyright (c) 2015, xuewen.chu
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of xuewen.chu nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL xuewen.chu BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * ***** END LICENSE BLOCK ***** */

#ifndef __trurh__gui_app_1__
#define __trurh__gui_app_1__

#include "app.h"

/**
 * @ns trurh::gui
 */

XX_NS(ngui)

XX_DEFINE_INLINE_MEMBERS(GUIApplication, Inl) {
 public:
  
  struct KeyboardOptions {
    bool         is_clear;
    KeyboardType type;
    KeyboardReturnType return_type;
  };
  
  void initialize(const Map<String, int>& option);
  void refresh_display();
  void onLoad();
  void onRender();
  void onPause();
  void onResume();
  void onBackground();
  void onForeground();
  void onMemorywarning();
  void onUnload();

  /**
   * @func process_atexit()
   */
  static void process_atexit();

  /**
   * @func set_volume_up()
   */
  void set_volume_up();

  /**
   * @func set_volume_down()
   */
  void set_volume_down();
  
  /**
   * @func set_root
   */
  void set_root(Root* value) throw(Error);
  
  /**
   * @func run_main
   */
  inline static void run_main(int argc, char* argv[]) {
    GUIApplication::run_main(argc, argv);
  }
  
  /**
   * @func set_focus_view
   */
  bool set_focus_view(View* view);
  
  /**
   * @func dispatch
   * */
  inline GUIEventDispatch* dispatch() { return m_dispatch; }
  
  /**
   * @func ime_keyboard_open
   */
  void ime_keyboard_open(KeyboardOptions options);
  
  /**
   * @func ime_keyboard_can_backspace
   */
  void ime_keyboard_can_backspace(bool can_back_space, bool can_delete);
  
  /**
   * @func ime_keyboard_close
   */
  void ime_keyboard_close();
  
};

#define _inl_app(self) static_cast<AppInl*>(self)

typedef GUIApplication::Inl AppInl;

XX_END

#endif
