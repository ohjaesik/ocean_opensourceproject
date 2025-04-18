/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "application/ocean/demo/media/questcamera/quest/QuestCameraApplication.h"

using namespace Ocean;

/**
 * The application's main entry point of native activity of the demo application.
 *
 * The demo application shows how to access the Quest's cameras.
 * @see https://developers.meta.com/horizon/documentation/native/android/pca-native-overview
 *
 * Further, the application is based on Platform::Meta::Quest::OpenXR::VRApplication wrapping most parts parts of the OVR/Android code.
 *
 * @param androidApp The android app structure
 */
void android_main(struct android_app* androidApp)
{
	ocean_assert(androidApp != nullptr);

	QuestCameraApplication questCameraApplication(androidApp);
	questCameraApplication.run();
}
