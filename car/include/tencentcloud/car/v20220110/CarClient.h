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

#ifndef TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_
#define TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/car/v20220110/model/ApplyConcurrentRequest.h>
#include <tencentcloud/car/v20220110/model/ApplyConcurrentResponse.h>
#include <tencentcloud/car/v20220110/model/CreateSessionRequest.h>
#include <tencentcloud/car/v20220110/model/CreateSessionResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeConcurrentCountRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeConcurrentCountResponse.h>
#include <tencentcloud/car/v20220110/model/DestroySessionRequest.h>
#include <tencentcloud/car/v20220110/model/DestroySessionResponse.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamRequest.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamResponse.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamWithURLRequest.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamWithURLResponse.h>
#include <tencentcloud/car/v20220110/model/StopPublishStreamRequest.h>
#include <tencentcloud/car/v20220110/model/StopPublishStreamResponse.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            class CarClient : public AbstractClient
            {
            public:
                CarClient(const Credential &credential, const std::string &region);
                CarClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyConcurrentResponse> ApplyConcurrentOutcome;
                typedef std::future<ApplyConcurrentOutcome> ApplyConcurrentOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ApplyConcurrentRequest&, ApplyConcurrentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyConcurrentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrentCountResponse> DescribeConcurrentCountOutcome;
                typedef std::future<DescribeConcurrentCountOutcome> DescribeConcurrentCountOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeConcurrentCountRequest&, DescribeConcurrentCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrentCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroySessionResponse> DestroySessionOutcome;
                typedef std::future<DestroySessionOutcome> DestroySessionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DestroySessionRequest&, DestroySessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroySessionAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamResponse> StartPublishStreamOutcome;
                typedef std::future<StartPublishStreamOutcome> StartPublishStreamOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::StartPublishStreamRequest&, StartPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamWithURLResponse> StartPublishStreamWithURLOutcome;
                typedef std::future<StartPublishStreamWithURLOutcome> StartPublishStreamWithURLOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::StartPublishStreamWithURLRequest&, StartPublishStreamWithURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamWithURLAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishStreamResponse> StopPublishStreamOutcome;
                typedef std::future<StopPublishStreamOutcome> StopPublishStreamOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::StopPublishStreamRequest&, StopPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishStreamAsyncHandler;



                /**
                 *This API is used to request a concurrency. The timeout period of the API is 20 seconds.
                 * @param req ApplyConcurrentRequest
                 * @return ApplyConcurrentOutcome
                 */
                ApplyConcurrentOutcome ApplyConcurrent(const Model::ApplyConcurrentRequest &request);
                void ApplyConcurrentAsync(const Model::ApplyConcurrentRequest& request, const ApplyConcurrentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyConcurrentOutcomeCallable ApplyConcurrentCallable(const Model::ApplyConcurrentRequest& request);

                /**
                 *This API is used to create a session. The timeout period of the API is 5 seconds.
                 * @param req CreateSessionRequest
                 * @return CreateSessionOutcome
                 */
                CreateSessionOutcome CreateSession(const Model::CreateSessionRequest &request);
                void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request);

                /**
                 *Obtain the concurrency count.
                 * @param req DescribeConcurrentCountRequest
                 * @return DescribeConcurrentCountOutcome
                 */
                DescribeConcurrentCountOutcome DescribeConcurrentCount(const Model::DescribeConcurrentCountRequest &request);
                void DescribeConcurrentCountAsync(const Model::DescribeConcurrentCountRequest& request, const DescribeConcurrentCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrentCountOutcomeCallable DescribeConcurrentCountCallable(const Model::DescribeConcurrentCountRequest& request);

                /**
                 *Terminate the session. If stream push has been initiated in this session, then the stream push will end upon session termination.
                 * @param req DestroySessionRequest
                 * @return DestroySessionOutcome
                 */
                DestroySessionOutcome DestroySession(const Model::DestroySessionRequest &request);
                void DestroySessionAsync(const Model::DestroySessionRequest& request, const DestroySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroySessionOutcomeCallable DestroySessionCallable(const Model::DestroySessionRequest& request);

                /**
                 *Initiate stream push. The codec for the stream push is automatically adjusted based on the client's (SDK) capabilities, with a default order of H265, H264, VP8, and VP9.
                 * @param req StartPublishStreamRequest
                 * @return StartPublishStreamOutcome
                 */
                StartPublishStreamOutcome StartPublishStream(const Model::StartPublishStreamRequest &request);
                void StartPublishStreamAsync(const Model::StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamOutcomeCallable StartPublishStreamCallable(const Model::StartPublishStreamRequest& request);

                /**
                 *Initiate stream push to the specified URL. The codec for the stream push is automatically adjusted based on the client's (SDK) capabilities, with a default order of H265, H264, VP8, and VP9. This stream push method will be charged separately. For details about the charging method, see [Charging for Stream Push to Specified URL](https://intl.cloud.tencent.com/document/product/1547/72168?from_cn_redirect=1#98ac188a-d122-4caf-88be-05268ecefdf6).
                 * @param req StartPublishStreamWithURLRequest
                 * @return StartPublishStreamWithURLOutcome
                 */
                StartPublishStreamWithURLOutcome StartPublishStreamWithURL(const Model::StartPublishStreamWithURLRequest &request);
                void StartPublishStreamWithURLAsync(const Model::StartPublishStreamWithURLRequest& request, const StartPublishStreamWithURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamWithURLOutcomeCallable StartPublishStreamWithURLCallable(const Model::StartPublishStreamWithURLRequest& request);

                /**
                 *This API is used to stop stream push.
                 * @param req StopPublishStreamRequest
                 * @return StopPublishStreamOutcome
                 */
                StopPublishStreamOutcome StopPublishStream(const Model::StopPublishStreamRequest &request);
                void StopPublishStreamAsync(const Model::StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishStreamOutcomeCallable StopPublishStreamCallable(const Model::StopPublishStreamRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_
