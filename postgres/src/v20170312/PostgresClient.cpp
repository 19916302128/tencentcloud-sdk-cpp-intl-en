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

#include <tencentcloud/postgres/v20170312/PostgresClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Postgres::V20170312;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "postgres.tencentcloudapi.com";
}

PostgresClient::PostgresClient(const Credential &credential, const string &region) :
    PostgresClient(credential, region, ClientProfile())
{
}

PostgresClient::PostgresClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PostgresClient::CloseDBExtranetAccessOutcome PostgresClient::CloseDBExtranetAccess(const CloseDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CloseDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseDBExtranetAccessResponse rsp = CloseDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseDBExtranetAccessOutcome(rsp);
        else
            return CloseDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return CloseDBExtranetAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::CloseDBExtranetAccessAsync(const CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CloseDBExtranetAccessOutcomeCallable PostgresClient::CloseDBExtranetAccessCallable(const CloseDBExtranetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseDBExtranetAccessOutcome()>>(
        [this, request]()
        {
            return this->CloseDBExtranetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateDBInstancesOutcome PostgresClient::CreateDBInstances(const CreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstancesResponse rsp = CreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstancesOutcome(rsp);
        else
            return CreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateDBInstancesAsync(const CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateDBInstancesOutcomeCallable PostgresClient::CreateDBInstancesCallable(const CreateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeAccountsOutcome PostgresClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeAccountsOutcomeCallable PostgresClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBBackupsOutcome PostgresClient::DescribeDBBackups(const DescribeDBBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBBackupsResponse rsp = DescribeDBBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBBackupsOutcome(rsp);
        else
            return DescribeDBBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBBackupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBBackupsAsync(const DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBBackupsOutcomeCallable PostgresClient::DescribeDBBackupsCallable(const DescribeDBBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBErrlogsOutcome PostgresClient::DescribeDBErrlogs(const DescribeDBErrlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBErrlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBErrlogsResponse rsp = DescribeDBErrlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBErrlogsOutcome(rsp);
        else
            return DescribeDBErrlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBErrlogsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBErrlogsAsync(const DescribeDBErrlogsRequest& request, const DescribeDBErrlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBErrlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBErrlogsOutcomeCallable PostgresClient::DescribeDBErrlogsCallable(const DescribeDBErrlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBErrlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBErrlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBInstanceAttributeOutcome PostgresClient::DescribeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceAttributeResponse rsp = DescribeDBInstanceAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceAttributeOutcome(rsp);
        else
            return DescribeDBInstanceAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceAttributeOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBInstanceAttributeOutcomeCallable PostgresClient::DescribeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBInstancesOutcome PostgresClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesResponse rsp = DescribeDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesOutcome(rsp);
        else
            return DescribeDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBInstancesOutcomeCallable PostgresClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBSlowlogsOutcome PostgresClient::DescribeDBSlowlogs(const DescribeDBSlowlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSlowlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSlowlogsResponse rsp = DescribeDBSlowlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSlowlogsOutcome(rsp);
        else
            return DescribeDBSlowlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSlowlogsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBSlowlogsAsync(const DescribeDBSlowlogsRequest& request, const DescribeDBSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSlowlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBSlowlogsOutcomeCallable PostgresClient::DescribeDBSlowlogsCallable(const DescribeDBSlowlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSlowlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSlowlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBXlogsOutcome PostgresClient::DescribeDBXlogs(const DescribeDBXlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBXlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBXlogsResponse rsp = DescribeDBXlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBXlogsOutcome(rsp);
        else
            return DescribeDBXlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBXlogsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBXlogsAsync(const DescribeDBXlogsRequest& request, const DescribeDBXlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBXlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBXlogsOutcomeCallable PostgresClient::DescribeDBXlogsCallable(const DescribeDBXlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBXlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBXlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDatabasesOutcome PostgresClient::DescribeDatabases(const DescribeDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesResponse rsp = DescribeDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesOutcome(rsp);
        else
            return DescribeDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDatabasesOutcomeCallable PostgresClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeOrdersOutcome PostgresClient::DescribeOrders(const DescribeOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrdersResponse rsp = DescribeOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrdersOutcome(rsp);
        else
            return DescribeOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrdersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeOrdersOutcomeCallable PostgresClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrdersOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeProductConfigOutcome PostgresClient::DescribeProductConfig(const DescribeProductConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductConfigResponse rsp = DescribeProductConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductConfigOutcome(rsp);
        else
            return DescribeProductConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeProductConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeProductConfigAsync(const DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeProductConfigOutcomeCallable PostgresClient::DescribeProductConfigCallable(const DescribeProductConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeRegionsOutcome PostgresClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeRegionsOutcomeCallable PostgresClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeZonesOutcome PostgresClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeZonesOutcomeCallable PostgresClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DestroyDBInstanceOutcome PostgresClient::DestroyDBInstance(const DestroyDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyDBInstanceResponse rsp = DestroyDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyDBInstanceOutcome(rsp);
        else
            return DestroyDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::DestroyDBInstanceAsync(const DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DestroyDBInstanceOutcomeCallable PostgresClient::DestroyDBInstanceCallable(const DestroyDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::InitDBInstancesOutcome PostgresClient::InitDBInstances(const InitDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InitDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitDBInstancesResponse rsp = InitDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitDBInstancesOutcome(rsp);
        else
            return InitDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InitDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::InitDBInstancesAsync(const InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InitDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::InitDBInstancesOutcomeCallable PostgresClient::InitDBInstancesCallable(const InitDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InitDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InitDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::InquiryPriceCreateDBInstancesOutcome PostgresClient::InquiryPriceCreateDBInstances(const InquiryPriceCreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateDBInstancesResponse rsp = InquiryPriceCreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateDBInstancesOutcome(rsp);
        else
            return InquiryPriceCreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceCreateDBInstancesAsync(const InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::InquiryPriceCreateDBInstancesOutcomeCallable PostgresClient::InquiryPriceCreateDBInstancesCallable(const InquiryPriceCreateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::InquiryPriceRenewDBInstanceOutcome PostgresClient::InquiryPriceRenewDBInstance(const InquiryPriceRenewDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewDBInstanceResponse rsp = InquiryPriceRenewDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewDBInstanceOutcome(rsp);
        else
            return InquiryPriceRenewDBInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceRenewDBInstanceAsync(const InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::InquiryPriceRenewDBInstanceOutcomeCallable PostgresClient::InquiryPriceRenewDBInstanceCallable(const InquiryPriceRenewDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::InquiryPriceUpgradeDBInstanceOutcome PostgresClient::InquiryPriceUpgradeDBInstance(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeDBInstanceResponse rsp = InquiryPriceUpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeDBInstanceOutcome(rsp);
        else
            return InquiryPriceUpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceUpgradeDBInstanceAsync(const InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::InquiryPriceUpgradeDBInstanceOutcomeCallable PostgresClient::InquiryPriceUpgradeDBInstanceCallable(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpgradeDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpgradeDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyAccountRemarkOutcome PostgresClient::ModifyAccountRemark(const ModifyAccountRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountRemarkResponse rsp = ModifyAccountRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountRemarkOutcome(rsp);
        else
            return ModifyAccountRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountRemarkOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyAccountRemarkAsync(const ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyAccountRemarkOutcomeCallable PostgresClient::ModifyAccountRemarkCallable(const ModifyAccountRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceNameOutcome PostgresClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNameResponse rsp = ModifyDBInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNameOutcome(rsp);
        else
            return ModifyDBInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNameOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceNameOutcomeCallable PostgresClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstancesProjectOutcome PostgresClient::ModifyDBInstancesProject(const ModifyDBInstancesProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstancesProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstancesProjectResponse rsp = ModifyDBInstancesProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstancesProjectOutcome(rsp);
        else
            return ModifyDBInstancesProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstancesProjectOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstancesProjectAsync(const ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstancesProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstancesProjectOutcomeCallable PostgresClient::ModifyDBInstancesProjectCallable(const ModifyDBInstancesProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstancesProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstancesProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::OpenDBExtranetAccessOutcome PostgresClient::OpenDBExtranetAccess(const OpenDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBExtranetAccessResponse rsp = OpenDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBExtranetAccessOutcome(rsp);
        else
            return OpenDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return OpenDBExtranetAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::OpenDBExtranetAccessAsync(const OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::OpenDBExtranetAccessOutcomeCallable PostgresClient::OpenDBExtranetAccessCallable(const OpenDBExtranetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenDBExtranetAccessOutcome()>>(
        [this, request]()
        {
            return this->OpenDBExtranetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::RenewInstanceOutcome PostgresClient::RenewInstance(const RenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstanceResponse rsp = RenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstanceOutcome(rsp);
        else
            return RenewInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::RenewInstanceOutcomeCallable PostgresClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ResetAccountPasswordOutcome PostgresClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAccountPasswordResponse rsp = ResetAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAccountPasswordOutcome(rsp);
        else
            return ResetAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAccountPasswordOutcome(outcome.GetError());
    }
}

void PostgresClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ResetAccountPasswordOutcomeCallable PostgresClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::RestartDBInstanceOutcome PostgresClient::RestartDBInstance(const RestartDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDBInstanceResponse rsp = RestartDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDBInstanceOutcome(rsp);
        else
            return RestartDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::RestartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::RestartDBInstanceOutcomeCallable PostgresClient::RestartDBInstanceCallable(const RestartDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::SetAutoRenewFlagOutcome PostgresClient::SetAutoRenewFlag(const SetAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAutoRenewFlagResponse rsp = SetAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAutoRenewFlagOutcome(rsp);
        else
            return SetAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return SetAutoRenewFlagOutcome(outcome.GetError());
    }
}

void PostgresClient::SetAutoRenewFlagAsync(const SetAutoRenewFlagRequest& request, const SetAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetAutoRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::SetAutoRenewFlagOutcomeCallable PostgresClient::SetAutoRenewFlagCallable(const SetAutoRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetAutoRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->SetAutoRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::UpgradeDBInstanceOutcome PostgresClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceResponse rsp = UpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceOutcome(rsp);
        else
            return UpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::UpgradeDBInstanceOutcomeCallable PostgresClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

