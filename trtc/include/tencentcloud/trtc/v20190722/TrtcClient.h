/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
#define TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopPublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopPublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamResponse.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            class TrtcClient : public AbstractClient
            {
            public:
                TrtcClient(const Credential &credential, const std::string &region);
                TrtcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCloudRecordingResponse> CreateCloudRecordingOutcome;
                typedef std::future<CreateCloudRecordingOutcome> CreateCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateCloudRecordingRequest&, CreateCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudRecordingResponse> DeleteCloudRecordingOutcome;
                typedef std::future<DeleteCloudRecordingOutcome> DeleteCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteCloudRecordingRequest&, DeleteCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudRecordingResponse> DescribeCloudRecordingOutcome;
                typedef std::future<DescribeCloudRecordingOutcome> DescribeCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCloudRecordingRequest&, DescribeCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomResponse> DismissRoomOutcome;
                typedef std::future<DismissRoomOutcome> DismissRoomOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomRequest&, DismissRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomByStrRoomIdResponse> DismissRoomByStrRoomIdOutcome;
                typedef std::future<DismissRoomByStrRoomIdOutcome> DismissRoomByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomByStrRoomIdRequest&, DismissRoomByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudRecordingResponse> ModifyCloudRecordingOutcome;
                typedef std::future<ModifyCloudRecordingOutcome> ModifyCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyCloudRecordingRequest&, ModifyCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserResponse> RemoveUserOutcome;
                typedef std::future<RemoveUserOutcome> RemoveUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserRequest&, RemoveUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserByStrRoomIdResponse> RemoveUserByStrRoomIdOutcome;
                typedef std::future<RemoveUserByStrRoomIdOutcome> RemoveUserByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserByStrRoomIdRequest&, RemoveUserByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishCdnStreamResponse> StartPublishCdnStreamOutcome;
                typedef std::future<StartPublishCdnStreamOutcome> StartPublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartPublishCdnStreamRequest&, StartPublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishCdnStreamResponse> StopPublishCdnStreamOutcome;
                typedef std::future<StopPublishCdnStreamOutcome> StopPublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopPublishCdnStreamRequest&, StopPublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePublishCdnStreamResponse> UpdatePublishCdnStreamOutcome;
                typedef std::future<UpdatePublishCdnStreamOutcome> UpdatePublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdatePublishCdnStreamRequest&, UpdatePublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePublishCdnStreamAsyncHandler;



                /**
                 *API description:
This API is used to start an on-cloud recording task. It records the audio and video streams in a room and saves them to the specified cloud storage. You can use this API to record the streams in a room separately, or you can mix the streams first and then record the mixed stream.

You can use this API to perform the following operations:
* Specify the anchors whose streams you want or do not want to record by using the `RecordParams` parameter
* Specify the storage service you want to save recording files to by using the `StorageParams` parameter
* Specify transcoding settings for mixed-stream recording, including video resolution, video bitrate, frame rate, and audio quality, by using `MixTranscodeParams`
* Specify the layout of different videos in mixed-stream recording mode or select an auto-arranged layout template

Key concepts:
* Single-stream recording: Record the audio and video of each subscribed user (`UserId`) in a room and save the recording files to VOD.
* Mixed-stream recording: Mix the audios and videos of subscribed users (`UserId`) in a room, record the mixed stream, and save the recording files to VOD.
                 * @param req CreateCloudRecordingRequest
                 * @return CreateCloudRecordingOutcome
                 */
                CreateCloudRecordingOutcome CreateCloudRecording(const Model::CreateCloudRecordingRequest &request);
                void CreateCloudRecordingAsync(const Model::CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudRecordingOutcomeCallable CreateCloudRecordingCallable(const Model::CreateCloudRecordingRequest& request);

                /**
                 *This API is used to stop a recording task. If a task is stopped successfully, but the uploading of recording files has not completed, the backend will continue to upload the files and will notify you via a callback when the upload is completed.
                 * @param req DeleteCloudRecordingRequest
                 * @return DeleteCloudRecordingOutcome
                 */
                DeleteCloudRecordingOutcome DeleteCloudRecording(const Model::DeleteCloudRecordingRequest &request);
                void DeleteCloudRecordingAsync(const Model::DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudRecordingOutcomeCallable DeleteCloudRecordingCallable(const Model::DeleteCloudRecordingRequest& request);

                /**
                 *This API is used to query the status of a recording task after it starts. It works only when a task is in progress. If the task has already ended when this API is called, an error will be returned.
If a recording file is being uploaded to VOD, the response parameter `StorageFileList` will not contain the information of the recording file. Please listen for the recording file callback to get the information.
                 * @param req DescribeCloudRecordingRequest
                 * @return DescribeCloudRecordingOutcome
                 */
                DescribeCloudRecordingOutcome DescribeCloudRecording(const Model::DescribeCloudRecordingRequest &request);
                void DescribeCloudRecordingAsync(const Model::DescribeCloudRecordingRequest& request, const DescribeCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudRecordingOutcomeCallable DescribeCloudRecordingCallable(const Model::DescribeCloudRecordingRequest& request);

                /**
                 *This API is used to remove all users from a room and dismiss the room. It supports all platforms. For Android, iOS, Windows, and macOS, the TRTC SDK needs to be upgraded to v6.6 or above.
                 * @param req DismissRoomRequest
                 * @return DismissRoomOutcome
                 */
                DismissRoomOutcome DismissRoom(const Model::DismissRoomRequest &request);
                void DismissRoomAsync(const Model::DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomOutcomeCallable DismissRoomCallable(const Model::DismissRoomRequest& request);

                /**
                 *This API is used to remove all users from a room and close the room. It works on all platforms. For Android, iOS, Windows, and macOS, you need to update the TRTC SDK to version 6.6 or above.
                 * @param req DismissRoomByStrRoomIdRequest
                 * @return DismissRoomByStrRoomIdOutcome
                 */
                DismissRoomByStrRoomIdOutcome DismissRoomByStrRoomId(const Model::DismissRoomByStrRoomIdRequest &request);
                void DismissRoomByStrRoomIdAsync(const Model::DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomByStrRoomIdOutcomeCallable DismissRoomByStrRoomIdCallable(const Model::DismissRoomByStrRoomIdRequest& request);

                /**
                 *This API is used to modify a recording task. It works only when a task is in progress. If the task has already ended when this API is called, an error will be returned. You need to specify all the parameters for each request instead of just the ones you want to modify.
                 * @param req ModifyCloudRecordingRequest
                 * @return ModifyCloudRecordingOutcome
                 */
                ModifyCloudRecordingOutcome ModifyCloudRecording(const Model::ModifyCloudRecordingRequest &request);
                void ModifyCloudRecordingAsync(const Model::ModifyCloudRecordingRequest& request, const ModifyCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudRecordingOutcomeCallable ModifyCloudRecordingCallable(const Model::ModifyCloudRecordingRequest& request);

                /**
                 *This API is used to remove a user from a room. It is applicable to scenarios where the anchor, room owner, or admin wants to kick out a user. It supports all platforms. For Android, iOS, Windows, and macOS, the TRTC SDK needs to be upgraded to v6.6 or above.
                 * @param req RemoveUserRequest
                 * @return RemoveUserOutcome
                 */
                RemoveUserOutcome RemoveUser(const Model::RemoveUserRequest &request);
                void RemoveUserAsync(const Model::RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserOutcomeCallable RemoveUserCallable(const Model::RemoveUserRequest& request);

                /**
                 *This API is used to remove a user from a room. It allows the anchor, room owner, or admin to kick out a user, and works on all platforms. For Android, iOS, Windows, and macOS, you need to update the TRTC SDK to version 6.6 or above.
                 * @param req RemoveUserByStrRoomIdRequest
                 * @return RemoveUserByStrRoomIdOutcome
                 */
                RemoveUserByStrRoomIdOutcome RemoveUserByStrRoomId(const Model::RemoveUserByStrRoomIdRequest &request);
                void RemoveUserByStrRoomIdAsync(const Model::RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserByStrRoomIdOutcomeCallable RemoveUserByStrRoomIdCallable(const Model::RemoveUserByStrRoomIdRequest& request);

                /**
                 *This API is used to mix streams and relay the mixed stream to CDNs. You can use this API to do the following:
1. Publish (also known as “relay”) the audio/video stream of one anchor to CDNs. For details, see example 2 (starting a task to relay the audio and video of a stream) and example 3 (starting a task to relay only the audio of a stream).
2. Mix the streams of multiple anchors in a room or in different rooms and publish the mixed stream to CDNs. You can use `AudioParams.SubscribeAudioList` to specify the users whose audios are mixed, and use `VideoParams.LayoutParams` to specify the layout of the anchors’ videos. For details, see example 1 (mixing streams and publishing the mixed stream to a CDN).
3. Mix multiple streams in a room according to a template and publish the mixed stream to CDNs. The TRTC backend will detect the change of anchors in the room and adjust the video layout automatically according to the stream mixing template. The following template types are supported:
     - Floating: The entire screen is covered by the video image of the first user who enters the room, and the images of other users are displayed as small images in rows in the bottom-left corner in room entry sequence. The screen allows up to 4 rows of 4 small images, which float over the large main image. Up to 1 large image and 15 small images can be displayed.
     - Grid: The images of all users split the screen evenly. The more the users, the smaller the image dimensions. Up to 16 images are supported.
     - Screen sharing: This is designed for video conferencing and online education. The shared screen (or camera image of the anchor) is always displayed as the large main image, which occupies the left half of the screen, and the images of other users occupy the right half in up to two columns of up to eight small images each. Up to 1 large image and 15 small images can be displayed. If the upstream aspect ratio does not match the output, the large image on the left will be scaled and displayed in whole, while the small images on the right will be cropped.
4. Publish audio/video streams to up to 10 CDNs at a time. You can use `PublishCdnParams.PublishCdnUrl` to specify the URLs of the CDNs to publish to. To publish to Tencent Cloud’s CDN, set `PublishCdnParams.IsTencentCdn` to 1.
5. Configure a server-side callback to have Tencent Cloud send relay status updates to your server in the form of HTTP/HTTPS POST requests. To use the callback for relay events, please contact Technical Support.
Notes:
1. **Because On-Cloud MixTranscoding is a paid feature, calling this API will incur MixTranscoding fees. For details, see [Billing of MixTranscoding and Relay to CDN](https://intl.cloud.tencent.com/document/product/647/47631?lang=en&pg=).**
2. **Relaying to third-party CDNs will incur relaying fees. For details, see [Billing of MixTranscoding and Relay to CDN](https://intl.cloud.tencent.com/document/product/647/47631?lang=en&pg=).**

Others:
1. You need to first call `StartPublishCdnStream` to start a relay task and get the task ID before you can use the `UpdatePublishCdnStream` API to modify the task and `StopPublishCdnStream` to stop the task.
2. To ensure the stability of relaying, you cannot switch between relaying audio only, relaying audio and video, and relaying video only for the same task.
3. To ensure the stability of relaying, you cannot change the video codec, audio codec, audio sample rate, audio bitrate, or sound channels using the `UpdatePublishCdnStream` API.
4. When you relay a single stream, specify both `AudioParams` and `VideoParams` to publish both audio and video, and specify only `AudioParams` to publish audio only. You cannot switch between the two modes during the relaying process. For `VideoParams`, set `Width`, `Height`, `Fps`, `Bitrate`, and `Gop` according to the actual settings used for publishing.
5. The `SequenceNumber` parameter is required when you call `UpdatePublishCdnStream` to change the relaying parameters. It ensures that multiple requests for the same relaying task are in the correct order. The value of `SequenceNumber` increases each time a new request is made for the same task. If `InternalError` is returned, try again using the same `SequenceNumber`. You don’t need to handle the `FailedOperation.OutdateRequest` error.
6. You can create a relay task before anchors enter a room, in which case you need to manually call `StopPublishCdnStream` to stop the task. If you don’t, after all the users whose streams are mixed leave the room, the TRTC backend will wait for the timeout period (`AgentParams.MaxIdleTime`) to elapse before stopping the relaying task.
                 * @param req StartPublishCdnStreamRequest
                 * @return StartPublishCdnStreamOutcome
                 */
                StartPublishCdnStreamOutcome StartPublishCdnStream(const Model::StartPublishCdnStreamRequest &request);
                void StartPublishCdnStreamAsync(const Model::StartPublishCdnStreamRequest& request, const StartPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishCdnStreamOutcomeCallable StartPublishCdnStreamCallable(const Model::StartPublishCdnStreamRequest& request);

                /**
                 *This API is used to stop a relaying task.
                 * @param req StopPublishCdnStreamRequest
                 * @return StopPublishCdnStreamOutcome
                 */
                StopPublishCdnStreamOutcome StopPublishCdnStream(const Model::StopPublishCdnStreamRequest &request);
                void StopPublishCdnStreamAsync(const Model::StopPublishCdnStreamRequest& request, const StopPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishCdnStreamOutcomeCallable StopPublishCdnStreamCallable(const Model::StopPublishCdnStreamRequest& request);

                /**
                 *This API is used to change the parameters of a relaying task.
                 * @param req UpdatePublishCdnStreamRequest
                 * @return UpdatePublishCdnStreamOutcome
                 */
                UpdatePublishCdnStreamOutcome UpdatePublishCdnStream(const Model::UpdatePublishCdnStreamRequest &request);
                void UpdatePublishCdnStreamAsync(const Model::UpdatePublishCdnStreamRequest& request, const UpdatePublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePublishCdnStreamOutcomeCallable UpdatePublishCdnStreamCallable(const Model::UpdatePublishCdnStreamRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
