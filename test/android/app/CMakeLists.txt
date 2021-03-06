
cmake_minimum_required(VERSION 3.4.1)

include_directories(../../..)
include_directories(../../../ngui/base/os)
include_directories(../../../depe/rapidjson/include)
include_directories(../../../depe/sqlite-amalgamation)
include_directories(../../../depe/freetype2/include)
include_directories(../../../depe/tess2/Include)
include_directories(../../../depe/libwebp)
include_directories(../../../depe/libgif/lib)
include_directories(../../../depe/libjpeg-turbo)
include_directories(../../../depe/libpng)
include_directories(../../../depe/libwebp)
include_directories(../../../depe/ffmpeg)
include_directories(../../../depe/tinyxml2)
include_directories(../../../depe/curl/include)
include_directories(../../../node/src)
include_directories(../../../node/deps/cares/include)
include_directories(../../../node/deps/zlib/contrib/minizip)
include_directories(../../../node/deps/openssl/openssl/include)
include_directories(../../../node/deps/uv/include)
include_directories(../../../node/deps/http_parser)
include_directories(../../../v8-link/include)
include_directories(../../../out)
link_directories(src/main/jniLibs/${ANDROID_ABI})
link_directories(../../../out/jniLibs/${ANDROID_ABI})

add_definitions(
   -DDEBUG
   -D__STDC_CONSTANT_MACROS
   -DXX_BUILDING_SHARED
   -DNODE_WANT_INTERNALS=1
   -DHAVE_OPENSSL=1
   -DHAVE_INSPECTOR=1
)

add_definitions(
  -DCHROME_PNG_WRITE_SUPPORT
  -DPNG_USER_CONFIG
)

add_library(ngui-base SHARED
            ../../../android/android.cc
            ../../../ngui/base/object.cc
            ../../../ngui/base/string.cc
            ../../../ngui/base/string-builder.cc
            ../../../ngui/base/array.cc
            ../../../ngui/base/codec.cc
            ../../../ngui/base/error.cc
            ../../../ngui/base/http.cc
            ../../../ngui/base/http-uri.cc
            ../../../ngui/base/http-helper.cc
            ../../../ngui/base/fs.cc
            ../../../ngui/base/fs-file.cc
            ../../../ngui/base/fs-sync.cc
            ../../../ngui/base/fs-async.cc
            ../../../ngui/base/fs-search.cc
            ../../../ngui/base/fs-reader.cc
            ../../../ngui/base/buffer.cc
            ../../../ngui/base/json.cc
            ../../../ngui/base/map.cc
            ../../../ngui/base/util.cc
            ../../../ngui/base/zlib.cc
            ../../../ngui/base/loop.cc
            ../../../ngui/base/loop-private.cc
            ../../../ngui/base/jsx.cc
            ../../../ngui/base/sys.cc
            ../../../ngui/base/net.cc
            ../../../ngui/base/cb.cc
            ../../../ngui/base/date.cc
            ../../../ngui/base/http-cookie.cc
            ../../../ngui/base/localstorage.cc
            ../../../ngui/base/os/android-jni.cc
            ../../../ngui/base/os/android-log.cc
            ../../../ngui/base/os/android-sys.cc
            ../../../ngui/base/os/android-fs.cc
           )

add_library(ngui-gui SHARED
            ../../../out/glsl-shader.cc
            ../../../out/glsl-es2-shader.cc
            ../../../out/font-native.cc
            ../../../ngui/action.cc
            ../../../ngui/app.cc
            ../../../ngui/audio-player.cc
            ../../../ngui/div.cc
            ../../../ngui/indep.cc
            ../../../ngui/gradient.cc
            ../../../ngui/shadow.cc
            ../../../ngui/limit.cc
            ../../../ngui/limit-indep.cc
            ../../../ngui/image.cc
            ../../../ngui/bezier.cc
            ../../../ngui/event.cc
            ../../../ngui/display-port.cc
            ../../../ngui/font/font.cc
            ../../../ngui/image/codec.cc
            ../../../ngui/image/codec-tga.cc
            ../../../ngui/image/codec-pvrtc.cc
            ../../../ngui/pre-render.cc
            ../../../ngui/mathe.cc
            ../../../ngui/media-codec.cc
            ../../../ngui/media-codec-1.cc
            ../../../ngui/media-codec-software.cc
            ../../../ngui/label.cc
            ../../../ngui/layout.cc
            ../../../ngui/box.cc
            ../../../ngui/text-rows.cc
            ../../../ngui/view.cc
            ../../../ngui/draw.cc
            ../../../ngui/ogl/ogl.cc
            ../../../ngui/ogl/ogl-draw.cc
            ../../../ngui/ogl/ogl-es2.cc
            ../../../ngui/ogl/ogl-texture.cc
            ../../../ngui/ogl/ogl-font.cc
            ../../../ngui/root.cc
            ../../../ngui/sprite.cc
            ../../../ngui/scroll.cc
            ../../../ngui/span.cc
            ../../../ngui/hybrid.cc
            ../../../ngui/text-font.cc
            ../../../ngui/text-node.cc
            ../../../ngui/texture.cc
            ../../../ngui/video.cc
            ../../../ngui/value.cc
            ../../../ngui/select-panel.cc
            ../../../ngui/button.cc
            ../../../ngui/keyboard.cc
            ../../../ngui/css.cc
            ../../../ngui/property.cc
            ../../../ngui/text.cc
            ../../../ngui/clip.cc
            ../../../ngui/input.cc
            ../../../ngui/textarea.cc
            ../../../ngui/os/android-ogl.cc
            ../../../ngui/os/android-app.cc
            ../../../ngui/os/android-media-codec.cc
            ../../../ngui/os/android-pcm-player.cc
            ../../../ngui/os/android-pcm-audio-track.cc
            ../../../ngui/os/android-keyboard.cc
            ../../../ngui/image/codec-gif.cc
            ../../../ngui/image/codec-jpeg.cc
            ../../../ngui/image/codec-png.cc
            ../../../ngui/image/codec-webp.cc
          )

add_library(ngui-js SHARED
            ../../../out/native-core-js.cc
            ../../../ngui/js/js.cc
            ../../../ngui/js/js-class.cc
            ../../../ngui/js/test.cc
            ../../../ngui/js/v8.cc
            ../../../ngui/js/v8.cc
            ../../../ngui/js/log.cc
            ../../../ngui/js/binding/base/event.cc
            ../../../ngui/js/binding/base/reader.cc
            ../../../ngui/js/binding/base/fs.cc
            ../../../ngui/js/binding/base/http.cc
            ../../../ngui/js/binding/base/json.cc
            ../../../ngui/js/binding/base/keys.cc
            ../../../ngui/js/binding/base/storage.cc
            ../../../ngui/js/binding/base/sys.cc
            ../../../ngui/js/binding/base/util.cc
            ../../../ngui/js/binding/action.cc
            ../../../ngui/js/binding/app.cc
            ../../../ngui/js/binding/audio-player.cc
            ../../../ngui/js/binding/box.cc
            ../../../ngui/js/binding/button.cc
            ../../../ngui/js/binding/clip.cc
            ../../../ngui/js/binding/css.cc
            ../../../ngui/js/binding/display-port.cc
            ../../../ngui/js/binding/div.cc
            ../../../ngui/js/binding/font.cc
            ../../../ngui/js/binding/ngui.cc
            ../../../ngui/js/binding/hybrid.cc
            ../../../ngui/js/binding/image.cc
            ../../../ngui/js/binding/indep.cc
            ../../../ngui/js/binding/input.cc
            ../../../ngui/js/binding/label.cc
            ../../../ngui/js/binding/layout.cc
            ../../../ngui/js/binding/limit.cc
            ../../../ngui/js/binding/media.cc
            ../../../ngui/js/binding/root.cc
            ../../../ngui/js/binding/scroll.cc
            ../../../ngui/js/binding/select-panel.cc
            ../../../ngui/js/binding/span.cc
            ../../../ngui/js/binding/sprite.cc
            ../../../ngui/js/binding/text-font.cc
            ../../../ngui/js/binding/text-node.cc
            ../../../ngui/js/binding/text.cc
            ../../../ngui/js/binding/value.cc
            ../../../ngui/js/binding/video.cc
            ../../../ngui/js/binding/view.cc
          )

add_library(ngui-demo SHARED ../../../test/demo.cc)

add_library(ngui-test SHARED
            ../../../test/test.cc
            ../../../test/test-fs.cc
            ../../../test/test-fs2.cc
            ../../../test/test-gui.cc
            ../../../test/test-freetype.cc
            ../../../test/test-json.cc
            ../../../test/test-string.cc
            ../../../test/test-list.cc
            ../../../test/test-map.cc
            ../../../test/test-event.cc
            ../../../test/test-zlib.cc
            ../../../test/test-curl.cc
            ../../../test/test-curl2.cc
            ../../../test/test-http.cc
            ../../../test/test-https.cc
            ../../../test/test-thread.cc
            ../../../test/test-ffmpeg.cc
            ../../../test/test-number.cc
            ../../../test/test-uv.cc
            ../../../test/test-net.cc
            ../../../test/test-fs-async.cc
            ../../../test/test-ssl.cc
            ../../../test/test-http2.cc
            ../../../test/test-net-ssl.cc
            ../../../test/test-http-cookie.cc
            ../../../test/test-localstorage.cc
            ../../../test/test-buffer.cc
            ../../../test/test-ngui.cc
            ../../../test/test-jsc.cc
            ../../../test/test-v8.cc
            ../../../test/test-loop.cc
            ../../../test/test-sys.cc
            ../../../test/test-mutex.cc
            ../../../test/test-ios-run-loop.cc
            ../../../test/test-benchmark.cc
)

target_link_libraries(ngui-base atomic z android log ngui_depes)
target_link_libraries(ngui-gui  ngui-base OpenSLES GLESv3 EGL mediandk ngui_depes)
target_link_libraries(ngui-js   ngui-base ngui-gui ngui_depes)
target_link_libraries(ngui-demo ngui-base ngui-gui ngui-js ngui_depes)
target_link_libraries(ngui-test ngui-base ngui-gui ngui-js ngui_depes)
