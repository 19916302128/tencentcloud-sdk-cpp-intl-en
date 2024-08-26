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

#include <tencentcloud/cdwdoris/v20211228/CdwdorisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdwdoris::V20211228;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-12-28";
    const string ENDPOINT = "cdwdoris.tencentcloudapi.com";
}

CdwdorisClient::CdwdorisClient(const Credential &credential, const string &region) :
    CdwdorisClient(credential, region, ClientProfile())
{
}

CdwdorisClient::CdwdorisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdwdorisClient::CancelBackupJobOutcome CdwdorisClient::CancelBackupJob(const CancelBackupJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelBackupJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelBackupJobResponse rsp = CancelBackupJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelBackupJobOutcome(rsp);
        else
            return CancelBackupJobOutcome(o.GetError());
    }
    else
    {
        return CancelBackupJobOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CancelBackupJobAsync(const CancelBackupJobRequest& request, const CancelBackupJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelBackupJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CancelBackupJobOutcomeCallable CdwdorisClient::CancelBackupJobCallable(const CancelBackupJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelBackupJobOutcome()>>(
        [this, request]()
        {
            return this->CancelBackupJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::CopyTableDatasOutcome CdwdorisClient::CopyTableDatas(const CopyTableDatasRequest &request)
{
    auto outcome = MakeRequest(request, "CopyTableDatas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyTableDatasResponse rsp = CopyTableDatasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyTableDatasOutcome(rsp);
        else
            return CopyTableDatasOutcome(o.GetError());
    }
    else
    {
        return CopyTableDatasOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CopyTableDatasAsync(const CopyTableDatasRequest& request, const CopyTableDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyTableDatas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CopyTableDatasOutcomeCallable CdwdorisClient::CopyTableDatasCallable(const CopyTableDatasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyTableDatasOutcome()>>(
        [this, request]()
        {
            return this->CopyTableDatas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::CreateBackUpScheduleOutcome CdwdorisClient::CreateBackUpSchedule(const CreateBackUpScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackUpSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackUpScheduleResponse rsp = CreateBackUpScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackUpScheduleOutcome(rsp);
        else
            return CreateBackUpScheduleOutcome(o.GetError());
    }
    else
    {
        return CreateBackUpScheduleOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateBackUpScheduleAsync(const CreateBackUpScheduleRequest& request, const CreateBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackUpSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CreateBackUpScheduleOutcomeCallable CdwdorisClient::CreateBackUpScheduleCallable(const CreateBackUpScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBackUpScheduleOutcome()>>(
        [this, request]()
        {
            return this->CreateBackUpSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::CreateDatabaseOutcome CdwdorisClient::CreateDatabase(const CreateDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatabaseResponse rsp = CreateDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatabaseOutcome(rsp);
        else
            return CreateDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDatabaseOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CreateDatabaseOutcomeCallable CdwdorisClient::CreateDatabaseCallable(const CreateDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
        [this, request]()
        {
            return this->CreateDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::CreateInstanceNewOutcome CdwdorisClient::CreateInstanceNew(const CreateInstanceNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceNewResponse rsp = CreateInstanceNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceNewOutcome(rsp);
        else
            return CreateInstanceNewOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceNewOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateInstanceNewAsync(const CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CreateInstanceNewOutcomeCallable CdwdorisClient::CreateInstanceNewCallable(const CreateInstanceNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceNewOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::CreateTableOutcome CdwdorisClient::CreateTable(const CreateTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTableResponse rsp = CreateTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTableOutcome(rsp);
        else
            return CreateTableOutcome(o.GetError());
    }
    else
    {
        return CreateTableOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CreateTableOutcomeCallable CdwdorisClient::CreateTableCallable(const CreateTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTableOutcome()>>(
        [this, request]()
        {
            return this->CreateTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::CreateWorkloadGroupOutcome CdwdorisClient::CreateWorkloadGroup(const CreateWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkloadGroupResponse rsp = CreateWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkloadGroupOutcome(rsp);
        else
            return CreateWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return CreateWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateWorkloadGroupAsync(const CreateWorkloadGroupRequest& request, const CreateWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CreateWorkloadGroupOutcomeCallable CdwdorisClient::CreateWorkloadGroupCallable(const CreateWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DeleteBackUpDataOutcome CdwdorisClient::DeleteBackUpData(const DeleteBackUpDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackUpData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackUpDataResponse rsp = DeleteBackUpDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackUpDataOutcome(rsp);
        else
            return DeleteBackUpDataOutcome(o.GetError());
    }
    else
    {
        return DeleteBackUpDataOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DeleteBackUpDataAsync(const DeleteBackUpDataRequest& request, const DeleteBackUpDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBackUpData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DeleteBackUpDataOutcomeCallable CdwdorisClient::DeleteBackUpDataCallable(const DeleteBackUpDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBackUpDataOutcome()>>(
        [this, request]()
        {
            return this->DeleteBackUpData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DeleteTableOutcome CdwdorisClient::DeleteTable(const DeleteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableResponse rsp = DeleteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableOutcome(rsp);
        else
            return DeleteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteTableOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DeleteTableOutcomeCallable CdwdorisClient::DeleteTableCallable(const DeleteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTableOutcome()>>(
        [this, request]()
        {
            return this->DeleteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DeleteWorkloadGroupOutcome CdwdorisClient::DeleteWorkloadGroup(const DeleteWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkloadGroupResponse rsp = DeleteWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkloadGroupOutcome(rsp);
        else
            return DeleteWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DeleteWorkloadGroupAsync(const DeleteWorkloadGroupRequest& request, const DeleteWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DeleteWorkloadGroupOutcomeCallable CdwdorisClient::DeleteWorkloadGroupCallable(const DeleteWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeAreaRegionOutcome CdwdorisClient::DescribeAreaRegion(const DescribeAreaRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAreaRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAreaRegionResponse rsp = DescribeAreaRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAreaRegionOutcome(rsp);
        else
            return DescribeAreaRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeAreaRegionOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeAreaRegionAsync(const DescribeAreaRegionRequest& request, const DescribeAreaRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAreaRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeAreaRegionOutcomeCallable CdwdorisClient::DescribeAreaRegionCallable(const DescribeAreaRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAreaRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeAreaRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeBackUpJobOutcome CdwdorisClient::DescribeBackUpJob(const DescribeBackUpJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpJobResponse rsp = DescribeBackUpJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpJobOutcome(rsp);
        else
            return DescribeBackUpJobOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpJobOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpJobAsync(const DescribeBackUpJobRequest& request, const DescribeBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeBackUpJobOutcomeCallable CdwdorisClient::DescribeBackUpJobCallable(const DescribeBackUpJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeBackUpJobDetailOutcome CdwdorisClient::DescribeBackUpJobDetail(const DescribeBackUpJobDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpJobDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpJobDetailResponse rsp = DescribeBackUpJobDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpJobDetailOutcome(rsp);
        else
            return DescribeBackUpJobDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpJobDetailOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpJobDetailAsync(const DescribeBackUpJobDetailRequest& request, const DescribeBackUpJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpJobDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeBackUpJobDetailOutcomeCallable CdwdorisClient::DescribeBackUpJobDetailCallable(const DescribeBackUpJobDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpJobDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpJobDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeBackUpSchedulesOutcome CdwdorisClient::DescribeBackUpSchedules(const DescribeBackUpSchedulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpSchedules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpSchedulesResponse rsp = DescribeBackUpSchedulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpSchedulesOutcome(rsp);
        else
            return DescribeBackUpSchedulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpSchedulesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpSchedulesAsync(const DescribeBackUpSchedulesRequest& request, const DescribeBackUpSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpSchedules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeBackUpSchedulesOutcomeCallable CdwdorisClient::DescribeBackUpSchedulesCallable(const DescribeBackUpSchedulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpSchedulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpSchedules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeBackUpTablesOutcome CdwdorisClient::DescribeBackUpTables(const DescribeBackUpTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpTablesResponse rsp = DescribeBackUpTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpTablesOutcome(rsp);
        else
            return DescribeBackUpTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpTablesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpTablesAsync(const DescribeBackUpTablesRequest& request, const DescribeBackUpTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeBackUpTablesOutcomeCallable CdwdorisClient::DescribeBackUpTablesCallable(const DescribeBackUpTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeBackUpTaskDetailOutcome CdwdorisClient::DescribeBackUpTaskDetail(const DescribeBackUpTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpTaskDetailResponse rsp = DescribeBackUpTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpTaskDetailOutcome(rsp);
        else
            return DescribeBackUpTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpTaskDetailOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpTaskDetailAsync(const DescribeBackUpTaskDetailRequest& request, const DescribeBackUpTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeBackUpTaskDetailOutcomeCallable CdwdorisClient::DescribeBackUpTaskDetailCallable(const DescribeBackUpTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeClusterConfigsOutcome CdwdorisClient::DescribeClusterConfigs(const DescribeClusterConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterConfigsResponse rsp = DescribeClusterConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterConfigsOutcome(rsp);
        else
            return DescribeClusterConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeClusterConfigsAsync(const DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeClusterConfigsOutcomeCallable CdwdorisClient::DescribeClusterConfigsCallable(const DescribeClusterConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeClusterConfigsHistoryOutcome CdwdorisClient::DescribeClusterConfigsHistory(const DescribeClusterConfigsHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterConfigsHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterConfigsHistoryResponse rsp = DescribeClusterConfigsHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterConfigsHistoryOutcome(rsp);
        else
            return DescribeClusterConfigsHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterConfigsHistoryOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeClusterConfigsHistoryAsync(const DescribeClusterConfigsHistoryRequest& request, const DescribeClusterConfigsHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterConfigsHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeClusterConfigsHistoryOutcomeCallable CdwdorisClient::DescribeClusterConfigsHistoryCallable(const DescribeClusterConfigsHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterConfigsHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterConfigsHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeDatabaseOutcome CdwdorisClient::DescribeDatabase(const DescribeDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseResponse rsp = DescribeDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseOutcome(rsp);
        else
            return DescribeDatabaseOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeDatabaseAsync(const DescribeDatabaseRequest& request, const DescribeDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeDatabaseOutcomeCallable CdwdorisClient::DescribeDatabaseCallable(const DescribeDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeDatabaseAuditDownloadOutcome CdwdorisClient::DescribeDatabaseAuditDownload(const DescribeDatabaseAuditDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseAuditDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseAuditDownloadResponse rsp = DescribeDatabaseAuditDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseAuditDownloadOutcome(rsp);
        else
            return DescribeDatabaseAuditDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseAuditDownloadOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeDatabaseAuditDownloadAsync(const DescribeDatabaseAuditDownloadRequest& request, const DescribeDatabaseAuditDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseAuditDownload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeDatabaseAuditDownloadOutcomeCallable CdwdorisClient::DescribeDatabaseAuditDownloadCallable(const DescribeDatabaseAuditDownloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseAuditDownloadOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseAuditDownload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeDatabaseAuditRecordsOutcome CdwdorisClient::DescribeDatabaseAuditRecords(const DescribeDatabaseAuditRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseAuditRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseAuditRecordsResponse rsp = DescribeDatabaseAuditRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseAuditRecordsOutcome(rsp);
        else
            return DescribeDatabaseAuditRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseAuditRecordsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeDatabaseAuditRecordsAsync(const DescribeDatabaseAuditRecordsRequest& request, const DescribeDatabaseAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseAuditRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeDatabaseAuditRecordsOutcomeCallable CdwdorisClient::DescribeDatabaseAuditRecordsCallable(const DescribeDatabaseAuditRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseAuditRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseAuditRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceOutcome CdwdorisClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceOutcomeCallable CdwdorisClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceNodesOutcome CdwdorisClient::DescribeInstanceNodes(const DescribeInstanceNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesResponse rsp = DescribeInstanceNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesOutcome(rsp);
        else
            return DescribeInstanceNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceNodesAsync(const DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceNodesOutcomeCallable CdwdorisClient::DescribeInstanceNodesCallable(const DescribeInstanceNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceNodesInfoOutcome CdwdorisClient::DescribeInstanceNodesInfo(const DescribeInstanceNodesInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodesInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesInfoResponse rsp = DescribeInstanceNodesInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesInfoOutcome(rsp);
        else
            return DescribeInstanceNodesInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesInfoOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceNodesInfoAsync(const DescribeInstanceNodesInfoRequest& request, const DescribeInstanceNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodesInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceNodesInfoOutcomeCallable CdwdorisClient::DescribeInstanceNodesInfoCallable(const DescribeInstanceNodesInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNodesInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNodesInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceNodesRoleOutcome CdwdorisClient::DescribeInstanceNodesRole(const DescribeInstanceNodesRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodesRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesRoleResponse rsp = DescribeInstanceNodesRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesRoleOutcome(rsp);
        else
            return DescribeInstanceNodesRoleOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesRoleOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceNodesRoleAsync(const DescribeInstanceNodesRoleRequest& request, const DescribeInstanceNodesRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodesRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceNodesRoleOutcomeCallable CdwdorisClient::DescribeInstanceNodesRoleCallable(const DescribeInstanceNodesRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNodesRoleOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNodesRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceOperationHistoryOutcome CdwdorisClient::DescribeInstanceOperationHistory(const DescribeInstanceOperationHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperationHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationHistoryResponse rsp = DescribeInstanceOperationHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationHistoryOutcome(rsp);
        else
            return DescribeInstanceOperationHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationHistoryOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceOperationHistoryAsync(const DescribeInstanceOperationHistoryRequest& request, const DescribeInstanceOperationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceOperationHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceOperationHistoryOutcomeCallable CdwdorisClient::DescribeInstanceOperationHistoryCallable(const DescribeInstanceOperationHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOperationHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceOperationHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceOperationsOutcome CdwdorisClient::DescribeInstanceOperations(const DescribeInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationsResponse rsp = DescribeInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationsOutcome(rsp);
        else
            return DescribeInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceOperationsAsync(const DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceOperations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceOperationsOutcomeCallable CdwdorisClient::DescribeInstanceOperationsCallable(const DescribeInstanceOperationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOperationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceOperations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceStateOutcome CdwdorisClient::DescribeInstanceState(const DescribeInstanceStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStateResponse rsp = DescribeInstanceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStateOutcome(rsp);
        else
            return DescribeInstanceStateOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStateOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceStateAsync(const DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceStateOutcomeCallable CdwdorisClient::DescribeInstanceStateCallable(const DescribeInstanceStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceUsedSubnetsOutcome CdwdorisClient::DescribeInstanceUsedSubnets(const DescribeInstanceUsedSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceUsedSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceUsedSubnetsResponse rsp = DescribeInstanceUsedSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceUsedSubnetsOutcome(rsp);
        else
            return DescribeInstanceUsedSubnetsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceUsedSubnetsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceUsedSubnetsAsync(const DescribeInstanceUsedSubnetsRequest& request, const DescribeInstanceUsedSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceUsedSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceUsedSubnetsOutcomeCallable CdwdorisClient::DescribeInstanceUsedSubnetsCallable(const DescribeInstanceUsedSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceUsedSubnetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceUsedSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstancesOutcome CdwdorisClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstancesOutcomeCallable CdwdorisClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstancesHealthStateOutcome CdwdorisClient::DescribeInstancesHealthState(const DescribeInstancesHealthStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesHealthState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesHealthStateResponse rsp = DescribeInstancesHealthStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesHealthStateOutcome(rsp);
        else
            return DescribeInstancesHealthStateOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesHealthStateOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstancesHealthStateAsync(const DescribeInstancesHealthStateRequest& request, const DescribeInstancesHealthStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesHealthState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstancesHealthStateOutcomeCallable CdwdorisClient::DescribeInstancesHealthStateCallable(const DescribeInstancesHealthStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesHealthStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesHealthState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeQueryAnalyseOutcome CdwdorisClient::DescribeQueryAnalyse(const DescribeQueryAnalyseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQueryAnalyse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQueryAnalyseResponse rsp = DescribeQueryAnalyseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQueryAnalyseOutcome(rsp);
        else
            return DescribeQueryAnalyseOutcome(o.GetError());
    }
    else
    {
        return DescribeQueryAnalyseOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeQueryAnalyseAsync(const DescribeQueryAnalyseRequest& request, const DescribeQueryAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQueryAnalyse(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeQueryAnalyseOutcomeCallable CdwdorisClient::DescribeQueryAnalyseCallable(const DescribeQueryAnalyseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQueryAnalyseOutcome()>>(
        [this, request]()
        {
            return this->DescribeQueryAnalyse(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeRestoreTaskDetailOutcome CdwdorisClient::DescribeRestoreTaskDetail(const DescribeRestoreTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRestoreTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRestoreTaskDetailResponse rsp = DescribeRestoreTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRestoreTaskDetailOutcome(rsp);
        else
            return DescribeRestoreTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRestoreTaskDetailOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeRestoreTaskDetailAsync(const DescribeRestoreTaskDetailRequest& request, const DescribeRestoreTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRestoreTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeRestoreTaskDetailOutcomeCallable CdwdorisClient::DescribeRestoreTaskDetailCallable(const DescribeRestoreTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRestoreTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRestoreTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeSlowQueryRecordsOutcome CdwdorisClient::DescribeSlowQueryRecords(const DescribeSlowQueryRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryRecordsResponse rsp = DescribeSlowQueryRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryRecordsOutcome(rsp);
        else
            return DescribeSlowQueryRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryRecordsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSlowQueryRecordsAsync(const DescribeSlowQueryRecordsRequest& request, const DescribeSlowQueryRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowQueryRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeSlowQueryRecordsOutcomeCallable CdwdorisClient::DescribeSlowQueryRecordsCallable(const DescribeSlowQueryRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowQueryRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowQueryRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeSlowQueryRecordsDownloadOutcome CdwdorisClient::DescribeSlowQueryRecordsDownload(const DescribeSlowQueryRecordsDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryRecordsDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryRecordsDownloadResponse rsp = DescribeSlowQueryRecordsDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryRecordsDownloadOutcome(rsp);
        else
            return DescribeSlowQueryRecordsDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryRecordsDownloadOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSlowQueryRecordsDownloadAsync(const DescribeSlowQueryRecordsDownloadRequest& request, const DescribeSlowQueryRecordsDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowQueryRecordsDownload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeSlowQueryRecordsDownloadOutcomeCallable CdwdorisClient::DescribeSlowQueryRecordsDownloadCallable(const DescribeSlowQueryRecordsDownloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowQueryRecordsDownloadOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowQueryRecordsDownload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeSpecOutcome CdwdorisClient::DescribeSpec(const DescribeSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecResponse rsp = DescribeSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecOutcome(rsp);
        else
            return DescribeSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSpecAsync(const DescribeSpecRequest& request, const DescribeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeSpecOutcomeCallable CdwdorisClient::DescribeSpecCallable(const DescribeSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpecOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeSqlApisOutcome CdwdorisClient::DescribeSqlApis(const DescribeSqlApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSqlApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSqlApisResponse rsp = DescribeSqlApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSqlApisOutcome(rsp);
        else
            return DescribeSqlApisOutcome(o.GetError());
    }
    else
    {
        return DescribeSqlApisOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSqlApisAsync(const DescribeSqlApisRequest& request, const DescribeSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSqlApis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeSqlApisOutcomeCallable CdwdorisClient::DescribeSqlApisCallable(const DescribeSqlApisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSqlApisOutcome()>>(
        [this, request]()
        {
            return this->DescribeSqlApis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeTableOutcome CdwdorisClient::DescribeTable(const DescribeTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableResponse rsp = DescribeTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableOutcome(rsp);
        else
            return DescribeTableOutcome(o.GetError());
    }
    else
    {
        return DescribeTableOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeTableOutcomeCallable CdwdorisClient::DescribeTableCallable(const DescribeTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeTableListOutcome CdwdorisClient::DescribeTableList(const DescribeTableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableListResponse rsp = DescribeTableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableListOutcome(rsp);
        else
            return DescribeTableListOutcome(o.GetError());
    }
    else
    {
        return DescribeTableListOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeTableListAsync(const DescribeTableListRequest& request, const DescribeTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeTableListOutcomeCallable CdwdorisClient::DescribeTableListCallable(const DescribeTableListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeUserBindWorkloadGroupOutcome CdwdorisClient::DescribeUserBindWorkloadGroup(const DescribeUserBindWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserBindWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserBindWorkloadGroupResponse rsp = DescribeUserBindWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserBindWorkloadGroupOutcome(rsp);
        else
            return DescribeUserBindWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeUserBindWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeUserBindWorkloadGroupAsync(const DescribeUserBindWorkloadGroupRequest& request, const DescribeUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserBindWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeUserBindWorkloadGroupOutcomeCallable CdwdorisClient::DescribeUserBindWorkloadGroupCallable(const DescribeUserBindWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserBindWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserBindWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeUserPolicyOutcome CdwdorisClient::DescribeUserPolicy(const DescribeUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserPolicyResponse rsp = DescribeUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserPolicyOutcome(rsp);
        else
            return DescribeUserPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeUserPolicyOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeUserPolicyAsync(const DescribeUserPolicyRequest& request, const DescribeUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeUserPolicyOutcomeCallable CdwdorisClient::DescribeUserPolicyCallable(const DescribeUserPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeWorkloadGroupOutcome CdwdorisClient::DescribeWorkloadGroup(const DescribeWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkloadGroupResponse rsp = DescribeWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkloadGroupOutcome(rsp);
        else
            return DescribeWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeWorkloadGroupAsync(const DescribeWorkloadGroupRequest& request, const DescribeWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeWorkloadGroupOutcomeCallable CdwdorisClient::DescribeWorkloadGroupCallable(const DescribeWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DestroyInstanceOutcome CdwdorisClient::DestroyInstance(const DestroyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstanceResponse rsp = DestroyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstanceOutcome(rsp);
        else
            return DestroyInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DestroyInstanceAsync(const DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DestroyInstanceOutcomeCallable CdwdorisClient::DestroyInstanceCallable(const DestroyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ExecuteParametrizedQueryOutcome CdwdorisClient::ExecuteParametrizedQuery(const ExecuteParametrizedQueryRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteParametrizedQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteParametrizedQueryResponse rsp = ExecuteParametrizedQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteParametrizedQueryOutcome(rsp);
        else
            return ExecuteParametrizedQueryOutcome(o.GetError());
    }
    else
    {
        return ExecuteParametrizedQueryOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ExecuteParametrizedQueryAsync(const ExecuteParametrizedQueryRequest& request, const ExecuteParametrizedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteParametrizedQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ExecuteParametrizedQueryOutcomeCallable CdwdorisClient::ExecuteParametrizedQueryCallable(const ExecuteParametrizedQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteParametrizedQueryOutcome()>>(
        [this, request]()
        {
            return this->ExecuteParametrizedQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ExecuteSelectQueryOutcome CdwdorisClient::ExecuteSelectQuery(const ExecuteSelectQueryRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteSelectQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteSelectQueryResponse rsp = ExecuteSelectQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteSelectQueryOutcome(rsp);
        else
            return ExecuteSelectQueryOutcome(o.GetError());
    }
    else
    {
        return ExecuteSelectQueryOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ExecuteSelectQueryAsync(const ExecuteSelectQueryRequest& request, const ExecuteSelectQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteSelectQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ExecuteSelectQueryOutcomeCallable CdwdorisClient::ExecuteSelectQueryCallable(const ExecuteSelectQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteSelectQueryOutcome()>>(
        [this, request]()
        {
            return this->ExecuteSelectQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::InsertDatasToTableOutcome CdwdorisClient::InsertDatasToTable(const InsertDatasToTableRequest &request)
{
    auto outcome = MakeRequest(request, "InsertDatasToTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InsertDatasToTableResponse rsp = InsertDatasToTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InsertDatasToTableOutcome(rsp);
        else
            return InsertDatasToTableOutcome(o.GetError());
    }
    else
    {
        return InsertDatasToTableOutcome(outcome.GetError());
    }
}

void CdwdorisClient::InsertDatasToTableAsync(const InsertDatasToTableRequest& request, const InsertDatasToTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InsertDatasToTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::InsertDatasToTableOutcomeCallable CdwdorisClient::InsertDatasToTableCallable(const InsertDatasToTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InsertDatasToTableOutcome()>>(
        [this, request]()
        {
            return this->InsertDatasToTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyDatabaseTableAccessOutcome CdwdorisClient::ModifyDatabaseTableAccess(const ModifyDatabaseTableAccessRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseTableAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseTableAccessResponse rsp = ModifyDatabaseTableAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseTableAccessOutcome(rsp);
        else
            return ModifyDatabaseTableAccessOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseTableAccessOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyDatabaseTableAccessAsync(const ModifyDatabaseTableAccessRequest& request, const ModifyDatabaseTableAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabaseTableAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyDatabaseTableAccessOutcomeCallable CdwdorisClient::ModifyDatabaseTableAccessCallable(const ModifyDatabaseTableAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabaseTableAccessOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabaseTableAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyInstanceOutcome CdwdorisClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyInstanceOutcomeCallable CdwdorisClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyInstanceKeyValConfigsOutcome CdwdorisClient::ModifyInstanceKeyValConfigs(const ModifyInstanceKeyValConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceKeyValConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceKeyValConfigsResponse rsp = ModifyInstanceKeyValConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceKeyValConfigsOutcome(rsp);
        else
            return ModifyInstanceKeyValConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceKeyValConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyInstanceKeyValConfigsAsync(const ModifyInstanceKeyValConfigsRequest& request, const ModifyInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceKeyValConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyInstanceKeyValConfigsOutcomeCallable CdwdorisClient::ModifyInstanceKeyValConfigsCallable(const ModifyInstanceKeyValConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceKeyValConfigsOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceKeyValConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyNodeStatusOutcome CdwdorisClient::ModifyNodeStatus(const ModifyNodeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodeStatusResponse rsp = ModifyNodeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodeStatusOutcome(rsp);
        else
            return ModifyNodeStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyNodeStatusOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyNodeStatusAsync(const ModifyNodeStatusRequest& request, const ModifyNodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNodeStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyNodeStatusOutcomeCallable CdwdorisClient::ModifyNodeStatusCallable(const ModifyNodeStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNodeStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyNodeStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifySecurityGroupsOutcome CdwdorisClient::ModifySecurityGroups(const ModifySecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupsResponse rsp = ModifySecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupsOutcome(rsp);
        else
            return ModifySecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifySecurityGroupsAsync(const ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifySecurityGroupsOutcomeCallable CdwdorisClient::ModifySecurityGroupsCallable(const ModifySecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyUserBindWorkloadGroupOutcome CdwdorisClient::ModifyUserBindWorkloadGroup(const ModifyUserBindWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserBindWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserBindWorkloadGroupResponse rsp = ModifyUserBindWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserBindWorkloadGroupOutcome(rsp);
        else
            return ModifyUserBindWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyUserBindWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyUserBindWorkloadGroupAsync(const ModifyUserBindWorkloadGroupRequest& request, const ModifyUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserBindWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyUserBindWorkloadGroupOutcomeCallable CdwdorisClient::ModifyUserBindWorkloadGroupCallable(const ModifyUserBindWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserBindWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserBindWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyUserPrivilegesV3Outcome CdwdorisClient::ModifyUserPrivilegesV3(const ModifyUserPrivilegesV3Request &request)
{
    auto outcome = MakeRequest(request, "ModifyUserPrivilegesV3");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserPrivilegesV3Response rsp = ModifyUserPrivilegesV3Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserPrivilegesV3Outcome(rsp);
        else
            return ModifyUserPrivilegesV3Outcome(o.GetError());
    }
    else
    {
        return ModifyUserPrivilegesV3Outcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyUserPrivilegesV3Async(const ModifyUserPrivilegesV3Request& request, const ModifyUserPrivilegesV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserPrivilegesV3(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyUserPrivilegesV3OutcomeCallable CdwdorisClient::ModifyUserPrivilegesV3Callable(const ModifyUserPrivilegesV3Request &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserPrivilegesV3Outcome()>>(
        [this, request]()
        {
            return this->ModifyUserPrivilegesV3(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyWorkloadGroupOutcome CdwdorisClient::ModifyWorkloadGroup(const ModifyWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkloadGroupResponse rsp = ModifyWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkloadGroupOutcome(rsp);
        else
            return ModifyWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyWorkloadGroupAsync(const ModifyWorkloadGroupRequest& request, const ModifyWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyWorkloadGroupOutcomeCallable CdwdorisClient::ModifyWorkloadGroupCallable(const ModifyWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyWorkloadGroupStatusOutcome CdwdorisClient::ModifyWorkloadGroupStatus(const ModifyWorkloadGroupStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkloadGroupStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkloadGroupStatusResponse rsp = ModifyWorkloadGroupStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkloadGroupStatusOutcome(rsp);
        else
            return ModifyWorkloadGroupStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkloadGroupStatusOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyWorkloadGroupStatusAsync(const ModifyWorkloadGroupStatusRequest& request, const ModifyWorkloadGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkloadGroupStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyWorkloadGroupStatusOutcomeCallable CdwdorisClient::ModifyWorkloadGroupStatusCallable(const ModifyWorkloadGroupStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkloadGroupStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkloadGroupStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::QueryTableDataOutcome CdwdorisClient::QueryTableData(const QueryTableDataRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTableData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTableDataResponse rsp = QueryTableDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTableDataOutcome(rsp);
        else
            return QueryTableDataOutcome(o.GetError());
    }
    else
    {
        return QueryTableDataOutcome(outcome.GetError());
    }
}

void CdwdorisClient::QueryTableDataAsync(const QueryTableDataRequest& request, const QueryTableDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTableData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::QueryTableDataOutcomeCallable CdwdorisClient::QueryTableDataCallable(const QueryTableDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTableDataOutcome()>>(
        [this, request]()
        {
            return this->QueryTableData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::RecoverBackUpJobOutcome CdwdorisClient::RecoverBackUpJob(const RecoverBackUpJobRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverBackUpJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverBackUpJobResponse rsp = RecoverBackUpJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverBackUpJobOutcome(rsp);
        else
            return RecoverBackUpJobOutcome(o.GetError());
    }
    else
    {
        return RecoverBackUpJobOutcome(outcome.GetError());
    }
}

void CdwdorisClient::RecoverBackUpJobAsync(const RecoverBackUpJobRequest& request, const RecoverBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverBackUpJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::RecoverBackUpJobOutcomeCallable CdwdorisClient::RecoverBackUpJobCallable(const RecoverBackUpJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverBackUpJobOutcome()>>(
        [this, request]()
        {
            return this->RecoverBackUpJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ReduceInstanceOutcome CdwdorisClient::ReduceInstance(const ReduceInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ReduceInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReduceInstanceResponse rsp = ReduceInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReduceInstanceOutcome(rsp);
        else
            return ReduceInstanceOutcome(o.GetError());
    }
    else
    {
        return ReduceInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ReduceInstanceAsync(const ReduceInstanceRequest& request, const ReduceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReduceInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ReduceInstanceOutcomeCallable CdwdorisClient::ReduceInstanceCallable(const ReduceInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReduceInstanceOutcome()>>(
        [this, request]()
        {
            return this->ReduceInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ResizeDiskOutcome CdwdorisClient::ResizeDisk(const ResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDiskResponse rsp = ResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDiskOutcome(rsp);
        else
            return ResizeDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeDiskOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ResizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ResizeDiskOutcomeCallable CdwdorisClient::ResizeDiskCallable(const ResizeDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeDiskOutcome()>>(
        [this, request]()
        {
            return this->ResizeDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::RestartClusterForConfigsOutcome CdwdorisClient::RestartClusterForConfigs(const RestartClusterForConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "RestartClusterForConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartClusterForConfigsResponse rsp = RestartClusterForConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartClusterForConfigsOutcome(rsp);
        else
            return RestartClusterForConfigsOutcome(o.GetError());
    }
    else
    {
        return RestartClusterForConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::RestartClusterForConfigsAsync(const RestartClusterForConfigsRequest& request, const RestartClusterForConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartClusterForConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::RestartClusterForConfigsOutcomeCallable CdwdorisClient::RestartClusterForConfigsCallable(const RestartClusterForConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartClusterForConfigsOutcome()>>(
        [this, request]()
        {
            return this->RestartClusterForConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::RestartClusterForNodeOutcome CdwdorisClient::RestartClusterForNode(const RestartClusterForNodeRequest &request)
{
    auto outcome = MakeRequest(request, "RestartClusterForNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartClusterForNodeResponse rsp = RestartClusterForNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartClusterForNodeOutcome(rsp);
        else
            return RestartClusterForNodeOutcome(o.GetError());
    }
    else
    {
        return RestartClusterForNodeOutcome(outcome.GetError());
    }
}

void CdwdorisClient::RestartClusterForNodeAsync(const RestartClusterForNodeRequest& request, const RestartClusterForNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartClusterForNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::RestartClusterForNodeOutcomeCallable CdwdorisClient::RestartClusterForNodeCallable(const RestartClusterForNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartClusterForNodeOutcome()>>(
        [this, request]()
        {
            return this->RestartClusterForNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ScaleOutInstanceOutcome CdwdorisClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutInstanceResponse rsp = ScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutInstanceOutcome(rsp);
        else
            return ScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleOutInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ScaleOutInstanceOutcomeCallable CdwdorisClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ScaleUpInstanceOutcome CdwdorisClient::ScaleUpInstance(const ScaleUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleUpInstanceResponse rsp = ScaleUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleUpInstanceOutcome(rsp);
        else
            return ScaleUpInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleUpInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ScaleUpInstanceAsync(const ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleUpInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ScaleUpInstanceOutcomeCallable CdwdorisClient::ScaleUpInstanceCallable(const ScaleUpInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleUpInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleUpInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::UpdateDatabaseOutcome CdwdorisClient::UpdateDatabase(const UpdateDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDatabaseResponse rsp = UpdateDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDatabaseOutcome(rsp);
        else
            return UpdateDatabaseOutcome(o.GetError());
    }
    else
    {
        return UpdateDatabaseOutcome(outcome.GetError());
    }
}

void CdwdorisClient::UpdateDatabaseAsync(const UpdateDatabaseRequest& request, const UpdateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::UpdateDatabaseOutcomeCallable CdwdorisClient::UpdateDatabaseCallable(const UpdateDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDatabaseOutcome()>>(
        [this, request]()
        {
            return this->UpdateDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::UpdateTableSchemaOutcome CdwdorisClient::UpdateTableSchema(const UpdateTableSchemaRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTableSchema");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTableSchemaResponse rsp = UpdateTableSchemaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTableSchemaOutcome(rsp);
        else
            return UpdateTableSchemaOutcome(o.GetError());
    }
    else
    {
        return UpdateTableSchemaOutcome(outcome.GetError());
    }
}

void CdwdorisClient::UpdateTableSchemaAsync(const UpdateTableSchemaRequest& request, const UpdateTableSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTableSchema(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::UpdateTableSchemaOutcomeCallable CdwdorisClient::UpdateTableSchemaCallable(const UpdateTableSchemaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTableSchemaOutcome()>>(
        [this, request]()
        {
            return this->UpdateTableSchema(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

