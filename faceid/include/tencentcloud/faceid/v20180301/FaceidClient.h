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

#ifndef TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
#define TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlRequest.h>
#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlResponse.h>
#include <tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareResponse.h>
#include <tencentcloud/faceid/v20180301/model/GenerateReflectSequenceRequest.h>
#include <tencentcloud/faceid/v20180301/model/GenerateReflectSequenceResponse.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            class FaceidClient : public AbstractClient
            {
            public:
                FaceidClient(const Credential &credential, const std::string &region);
                FaceidClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateUploadUrlResponse> CreateUploadUrlOutcome;
                typedef std::future<CreateUploadUrlOutcome> CreateUploadUrlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CreateUploadUrlRequest&, CreateUploadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectReflectLivenessAndCompareResponse> DetectReflectLivenessAndCompareOutcome;
                typedef std::future<DetectReflectLivenessAndCompareOutcome> DetectReflectLivenessAndCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::DetectReflectLivenessAndCompareRequest&, DetectReflectLivenessAndCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectReflectLivenessAndCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateReflectSequenceResponse> GenerateReflectSequenceOutcome;
                typedef std::future<GenerateReflectSequenceOutcome> GenerateReflectSequenceOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GenerateReflectSequenceRequest&, GenerateReflectSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateReflectSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::LivenessCompareResponse> LivenessCompareOutcome;
                typedef std::future<LivenessCompareOutcome> LivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessCompareRequest&, LivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessCompareAsyncHandler;



                /**
                 *This API is used to generate a temporary `UploadUrl` for uploading resource files (with the `HTTP PUT` method). After resource upload, `ResourceUrl` will be passed to the `TargetAction` API to complete the resource passing (specific fields vary by case). 
The data will be stored in a COS bucket in the region specified by the parameter `Region` for two hours.
                 * @param req CreateUploadUrlRequest
                 * @return CreateUploadUrlOutcome
                 */
                CreateUploadUrlOutcome CreateUploadUrl(const Model::CreateUploadUrlRequest &request);
                void CreateUploadUrlAsync(const Model::CreateUploadUrlRequest& request, const CreateUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUploadUrlOutcomeCallable CreateUploadUrlCallable(const Model::CreateUploadUrlRequest& request);

                /**
                 *This API is used to detect liveness with the package generated by the liveness comparison (reflection-based) SDK, and to compare the person detected with that in the image passed in.
The image and the data generated with the SDK must be stored in COS, and the region of the COS bucket must be same as that of requests made with this API. We recommend that you pass resources with upload link APIs.
                 * @param req DetectReflectLivenessAndCompareRequest
                 * @return DetectReflectLivenessAndCompareOutcome
                 */
                DetectReflectLivenessAndCompareOutcome DetectReflectLivenessAndCompare(const Model::DetectReflectLivenessAndCompareRequest &request);
                void DetectReflectLivenessAndCompareAsync(const Model::DetectReflectLivenessAndCompareRequest& request, const DetectReflectLivenessAndCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectReflectLivenessAndCompareOutcomeCallable DetectReflectLivenessAndCompareCallable(const Model::DetectReflectLivenessAndCompareRequest& request);

                /**
                 *This API is used to generate an appropriate light sequence based on the information collected by the liveness comparison (reflection-based) SDK and pass the light sequence into the SDK to start the identity verification process.
The data generated with the SDK must be stored in COS, and the region of the COS bucket must be same as that of requests made with this API. We recommend that you pass resources with upload link APIs.
                 * @param req GenerateReflectSequenceRequest
                 * @return GenerateReflectSequenceOutcome
                 */
                GenerateReflectSequenceOutcome GenerateReflectSequence(const Model::GenerateReflectSequenceRequest &request);
                void GenerateReflectSequenceAsync(const Model::GenerateReflectSequenceRequest& request, const GenerateReflectSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateReflectSequenceOutcomeCallable GenerateReflectSequenceCallable(const Model::GenerateReflectSequenceRequest& request);

                /**
                 *This API is used to pass in a video and a photo, determine whether the person in the video is real, and if yes, then determine whether the person in the video is the same as that in the photo.
                 * @param req LivenessCompareRequest
                 * @return LivenessCompareOutcome
                 */
                LivenessCompareOutcome LivenessCompare(const Model::LivenessCompareRequest &request);
                void LivenessCompareAsync(const Model::LivenessCompareRequest& request, const LivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LivenessCompareOutcomeCallable LivenessCompareCallable(const Model::LivenessCompareRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
