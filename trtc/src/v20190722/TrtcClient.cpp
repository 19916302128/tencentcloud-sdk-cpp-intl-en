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

#include <tencentcloud/trtc/v20190722/TrtcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trtc::V20190722;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "trtc.tencentcloudapi.com";
}

TrtcClient::TrtcClient(const Credential &credential, const string &region) :
    TrtcClient(credential, region, ClientProfile())
{
}

TrtcClient::TrtcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrtcClient::CreateCloudRecordingOutcome TrtcClient::CreateCloudRecording(const CreateCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRecordingResponse rsp = CreateCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRecordingOutcome(rsp);
        else
            return CreateCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::CreateCloudRecordingAsync(const CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreateCloudRecordingOutcomeCallable TrtcClient::CreateCloudRecordingCallable(const CreateCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DeleteCloudRecordingOutcome TrtcClient::DeleteCloudRecording(const DeleteCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudRecordingResponse rsp = DeleteCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudRecordingOutcome(rsp);
        else
            return DeleteCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::DeleteCloudRecordingAsync(const DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeleteCloudRecordingOutcomeCallable TrtcClient::DeleteCloudRecordingCallable(const DeleteCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeCloudRecordingOutcome TrtcClient::DescribeCloudRecording(const DescribeCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRecordingResponse rsp = DescribeCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRecordingOutcome(rsp);
        else
            return DescribeCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCloudRecordingAsync(const DescribeCloudRecordingRequest& request, const DescribeCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeCloudRecordingOutcomeCallable TrtcClient::DescribeCloudRecordingCallable(const DescribeCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeMixTranscodingUsageOutcome TrtcClient::DescribeMixTranscodingUsage(const DescribeMixTranscodingUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMixTranscodingUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMixTranscodingUsageResponse rsp = DescribeMixTranscodingUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMixTranscodingUsageOutcome(rsp);
        else
            return DescribeMixTranscodingUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeMixTranscodingUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeMixTranscodingUsageAsync(const DescribeMixTranscodingUsageRequest& request, const DescribeMixTranscodingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMixTranscodingUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeMixTranscodingUsageOutcomeCallable TrtcClient::DescribeMixTranscodingUsageCallable(const DescribeMixTranscodingUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMixTranscodingUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeMixTranscodingUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRecordingUsageOutcome TrtcClient::DescribeRecordingUsage(const DescribeRecordingUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordingUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordingUsageResponse rsp = DescribeRecordingUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordingUsageOutcome(rsp);
        else
            return DescribeRecordingUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordingUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRecordingUsageAsync(const DescribeRecordingUsageRequest& request, const DescribeRecordingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordingUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRecordingUsageOutcomeCallable TrtcClient::DescribeRecordingUsageCallable(const DescribeRecordingUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordingUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordingUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRelayUsageOutcome TrtcClient::DescribeRelayUsage(const DescribeRelayUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelayUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelayUsageResponse rsp = DescribeRelayUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelayUsageOutcome(rsp);
        else
            return DescribeRelayUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeRelayUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRelayUsageAsync(const DescribeRelayUsageRequest& request, const DescribeRelayUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelayUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRelayUsageOutcomeCallable TrtcClient::DescribeRelayUsageCallable(const DescribeRelayUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRelayUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelayUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeTrtcRoomUsageOutcome TrtcClient::DescribeTrtcRoomUsage(const DescribeTrtcRoomUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrtcRoomUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrtcRoomUsageResponse rsp = DescribeTrtcRoomUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrtcRoomUsageOutcome(rsp);
        else
            return DescribeTrtcRoomUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTrtcRoomUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTrtcRoomUsageAsync(const DescribeTrtcRoomUsageRequest& request, const DescribeTrtcRoomUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrtcRoomUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTrtcRoomUsageOutcomeCallable TrtcClient::DescribeTrtcRoomUsageCallable(const DescribeTrtcRoomUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrtcRoomUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrtcRoomUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeTrtcUsageOutcome TrtcClient::DescribeTrtcUsage(const DescribeTrtcUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrtcUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrtcUsageResponse rsp = DescribeTrtcUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrtcUsageOutcome(rsp);
        else
            return DescribeTrtcUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTrtcUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTrtcUsageAsync(const DescribeTrtcUsageRequest& request, const DescribeTrtcUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrtcUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTrtcUsageOutcomeCallable TrtcClient::DescribeTrtcUsageCallable(const DescribeTrtcUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrtcUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrtcUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomOutcome TrtcClient::DismissRoom(const DismissRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomResponse rsp = DismissRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomOutcome(rsp);
        else
            return DismissRoomOutcome(o.GetError());
    }
    else
    {
        return DismissRoomOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomAsync(const DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomOutcomeCallable TrtcClient::DismissRoomCallable(const DismissRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomOutcome()>>(
        [this, request]()
        {
            return this->DismissRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomByStrRoomIdOutcome TrtcClient::DismissRoomByStrRoomId(const DismissRoomByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoomByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomByStrRoomIdResponse rsp = DismissRoomByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomByStrRoomIdOutcome(rsp);
        else
            return DismissRoomByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return DismissRoomByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomByStrRoomIdAsync(const DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoomByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomByStrRoomIdOutcomeCallable TrtcClient::DismissRoomByStrRoomIdCallable(const DismissRoomByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->DismissRoomByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::ModifyCloudRecordingOutcome TrtcClient::ModifyCloudRecording(const ModifyCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudRecordingResponse rsp = ModifyCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudRecordingOutcome(rsp);
        else
            return ModifyCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyCloudRecordingAsync(const ModifyCloudRecordingRequest& request, const ModifyCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::ModifyCloudRecordingOutcomeCallable TrtcClient::ModifyCloudRecordingCallable(const ModifyCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserOutcome TrtcClient::RemoveUser(const RemoveUserRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserResponse rsp = RemoveUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserOutcome(rsp);
        else
            return RemoveUserOutcome(o.GetError());
    }
    else
    {
        return RemoveUserOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserAsync(const RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserOutcomeCallable TrtcClient::RemoveUserCallable(const RemoveUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserOutcome()>>(
        [this, request]()
        {
            return this->RemoveUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserByStrRoomIdOutcome TrtcClient::RemoveUserByStrRoomId(const RemoveUserByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserByStrRoomIdResponse rsp = RemoveUserByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserByStrRoomIdOutcome(rsp);
        else
            return RemoveUserByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return RemoveUserByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserByStrRoomIdAsync(const RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUserByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserByStrRoomIdOutcomeCallable TrtcClient::RemoveUserByStrRoomIdCallable(const RemoveUserByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->RemoveUserByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::SetUserBlockedOutcome TrtcClient::SetUserBlocked(const SetUserBlockedRequest &request)
{
    auto outcome = MakeRequest(request, "SetUserBlocked");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetUserBlockedResponse rsp = SetUserBlockedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetUserBlockedOutcome(rsp);
        else
            return SetUserBlockedOutcome(o.GetError());
    }
    else
    {
        return SetUserBlockedOutcome(outcome.GetError());
    }
}

void TrtcClient::SetUserBlockedAsync(const SetUserBlockedRequest& request, const SetUserBlockedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetUserBlocked(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::SetUserBlockedOutcomeCallable TrtcClient::SetUserBlockedCallable(const SetUserBlockedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetUserBlockedOutcome()>>(
        [this, request]()
        {
            return this->SetUserBlocked(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::SetUserBlockedByStrRoomIdOutcome TrtcClient::SetUserBlockedByStrRoomId(const SetUserBlockedByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "SetUserBlockedByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetUserBlockedByStrRoomIdResponse rsp = SetUserBlockedByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetUserBlockedByStrRoomIdOutcome(rsp);
        else
            return SetUserBlockedByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return SetUserBlockedByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::SetUserBlockedByStrRoomIdAsync(const SetUserBlockedByStrRoomIdRequest& request, const SetUserBlockedByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetUserBlockedByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::SetUserBlockedByStrRoomIdOutcomeCallable TrtcClient::SetUserBlockedByStrRoomIdCallable(const SetUserBlockedByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetUserBlockedByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->SetUserBlockedByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StartPublishCdnStreamOutcome TrtcClient::StartPublishCdnStream(const StartPublishCdnStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishCdnStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishCdnStreamResponse rsp = StartPublishCdnStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishCdnStreamOutcome(rsp);
        else
            return StartPublishCdnStreamOutcome(o.GetError());
    }
    else
    {
        return StartPublishCdnStreamOutcome(outcome.GetError());
    }
}

void TrtcClient::StartPublishCdnStreamAsync(const StartPublishCdnStreamRequest& request, const StartPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartPublishCdnStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartPublishCdnStreamOutcomeCallable TrtcClient::StartPublishCdnStreamCallable(const StartPublishCdnStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartPublishCdnStreamOutcome()>>(
        [this, request]()
        {
            return this->StartPublishCdnStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StopPublishCdnStreamOutcome TrtcClient::StopPublishCdnStream(const StopPublishCdnStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopPublishCdnStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopPublishCdnStreamResponse rsp = StopPublishCdnStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopPublishCdnStreamOutcome(rsp);
        else
            return StopPublishCdnStreamOutcome(o.GetError());
    }
    else
    {
        return StopPublishCdnStreamOutcome(outcome.GetError());
    }
}

void TrtcClient::StopPublishCdnStreamAsync(const StopPublishCdnStreamRequest& request, const StopPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopPublishCdnStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopPublishCdnStreamOutcomeCallable TrtcClient::StopPublishCdnStreamCallable(const StopPublishCdnStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopPublishCdnStreamOutcome()>>(
        [this, request]()
        {
            return this->StopPublishCdnStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::UpdatePublishCdnStreamOutcome TrtcClient::UpdatePublishCdnStream(const UpdatePublishCdnStreamRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePublishCdnStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePublishCdnStreamResponse rsp = UpdatePublishCdnStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePublishCdnStreamOutcome(rsp);
        else
            return UpdatePublishCdnStreamOutcome(o.GetError());
    }
    else
    {
        return UpdatePublishCdnStreamOutcome(outcome.GetError());
    }
}

void TrtcClient::UpdatePublishCdnStreamAsync(const UpdatePublishCdnStreamRequest& request, const UpdatePublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePublishCdnStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::UpdatePublishCdnStreamOutcomeCallable TrtcClient::UpdatePublishCdnStreamCallable(const UpdatePublishCdnStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePublishCdnStreamOutcome()>>(
        [this, request]()
        {
            return this->UpdatePublishCdnStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

