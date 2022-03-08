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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_CYNOSDBCLIENT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_CYNOSDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cynosdb/v20190107/model/ActivateInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ActivateInstanceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/AddInstancesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/AddInstancesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateClustersRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateClustersResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupConfigRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupConfigResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupListRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupListResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterInstanceGrpsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterInstanceGrpsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClustersRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClustersResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceDetailRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceDetailResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceSpecsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceSpecsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstancesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstancesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeMaintainPeriodRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeMaintainPeriodResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcesByDealNameRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcesByDealNameResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeRangeRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeRangeResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeValidityRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeValidityResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/IsolateClusterRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/IsolateClusterResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/IsolateInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/IsolateInstanceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyBackupConfigRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyBackupConfigResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterParamRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterParamResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyMaintainPeriodConfigRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyMaintainPeriodConfigResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/OfflineClusterRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/OfflineClusterResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/OfflineInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/OfflineInstanceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/PauseServerlessRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/PauseServerlessResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ResumeServerlessRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ResumeServerlessResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/SetRenewFlagRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/SetRenewFlagResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeInstanceResponse.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            class CynosdbClient : public AbstractClient
            {
            public:
                CynosdbClient(const Credential &credential, const std::string &region);
                CynosdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActivateInstanceResponse> ActivateInstanceOutcome;
                typedef std::future<ActivateInstanceOutcome> ActivateInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ActivateInstanceRequest&, ActivateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::AddInstancesResponse> AddInstancesOutcome;
                typedef std::future<AddInstancesOutcome> AddInstancesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::AddInstancesRequest&, AddInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClustersResponse> CreateClustersOutcome;
                typedef std::future<CreateClustersOutcome> CreateClustersOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CreateClustersRequest&, CreateClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupConfigResponse> DescribeBackupConfigOutcome;
                typedef std::future<DescribeBackupConfigOutcome> DescribeBackupConfigOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeBackupConfigRequest&, DescribeBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupListResponse> DescribeBackupListOutcome;
                typedef std::future<DescribeBackupListOutcome> DescribeBackupListOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeBackupListRequest&, DescribeBackupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDetailResponse> DescribeClusterDetailOutcome;
                typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClusterDetailRequest&, DescribeClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstanceGrpsResponse> DescribeClusterInstanceGrpsOutcome;
                typedef std::future<DescribeClusterInstanceGrpsOutcome> DescribeClusterInstanceGrpsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClusterInstanceGrpsRequest&, DescribeClusterInstanceGrpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstanceGrpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDetailResponse> DescribeInstanceDetailOutcome;
                typedef std::future<DescribeInstanceDetailOutcome> DescribeInstanceDetailOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstanceDetailRequest&, DescribeInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceSpecsResponse> DescribeInstanceSpecsOutcome;
                typedef std::future<DescribeInstanceSpecsOutcome> DescribeInstanceSpecsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstanceSpecsRequest&, DescribeInstanceSpecsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintainPeriodResponse> DescribeMaintainPeriodOutcome;
                typedef std::future<DescribeMaintainPeriodOutcome> DescribeMaintainPeriodOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeMaintainPeriodRequest&, DescribeMaintainPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintainPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesByDealNameResponse> DescribeResourcesByDealNameOutcome;
                typedef std::future<DescribeResourcesByDealNameOutcome> DescribeResourcesByDealNameOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeResourcesByDealNameRequest&, DescribeResourcesByDealNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesByDealNameAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackTimeRangeResponse> DescribeRollbackTimeRangeOutcome;
                typedef std::future<DescribeRollbackTimeRangeOutcome> DescribeRollbackTimeRangeOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeRollbackTimeRangeRequest&, DescribeRollbackTimeRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTimeRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackTimeValidityResponse> DescribeRollbackTimeValidityOutcome;
                typedef std::future<DescribeRollbackTimeValidityOutcome> DescribeRollbackTimeValidityOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeRollbackTimeValidityRequest&, DescribeRollbackTimeValidityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTimeValidityAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateClusterResponse> IsolateClusterOutcome;
                typedef std::future<IsolateClusterOutcome> IsolateClusterOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::IsolateClusterRequest&, IsolateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateInstanceResponse> IsolateInstanceOutcome;
                typedef std::future<IsolateInstanceOutcome> IsolateInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::IsolateInstanceRequest&, IsolateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupConfigResponse> ModifyBackupConfigOutcome;
                typedef std::future<ModifyBackupConfigOutcome> ModifyBackupConfigOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyBackupConfigRequest&, ModifyBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterParamResponse> ModifyClusterParamOutcome;
                typedef std::future<ModifyClusterParamOutcome> ModifyClusterParamOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyClusterParamRequest&, ModifyClusterParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterParamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaintainPeriodConfigResponse> ModifyMaintainPeriodConfigOutcome;
                typedef std::future<ModifyMaintainPeriodConfigOutcome> ModifyMaintainPeriodConfigOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyMaintainPeriodConfigRequest&, ModifyMaintainPeriodConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintainPeriodConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineClusterResponse> OfflineClusterOutcome;
                typedef std::future<OfflineClusterOutcome> OfflineClusterOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::OfflineClusterRequest&, OfflineClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineInstanceResponse> OfflineInstanceOutcome;
                typedef std::future<OfflineInstanceOutcome> OfflineInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::OfflineInstanceRequest&, OfflineInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseServerlessResponse> PauseServerlessOutcome;
                typedef std::future<PauseServerlessOutcome> PauseServerlessOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::PauseServerlessRequest&, PauseServerlessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseServerlessAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeServerlessResponse> ResumeServerlessOutcome;
                typedef std::future<ResumeServerlessOutcome> ResumeServerlessOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ResumeServerlessRequest&, ResumeServerlessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeServerlessAsyncHandler;
                typedef Outcome<Core::Error, Model::SetRenewFlagResponse> SetRenewFlagOutcome;
                typedef std::future<SetRenewFlagOutcome> SetRenewFlagOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::SetRenewFlagRequest&, SetRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;



                /**
                 *This API is used to remove the isolation of an instance to make it accessible again.
                 * @param req ActivateInstanceRequest
                 * @return ActivateInstanceOutcome
                 */
                ActivateInstanceOutcome ActivateInstance(const Model::ActivateInstanceRequest &request);
                void ActivateInstanceAsync(const Model::ActivateInstanceRequest& request, const ActivateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateInstanceOutcomeCallable ActivateInstanceCallable(const Model::ActivateInstanceRequest& request);

                /**
                 *This API is used to add an instance in a cluster.
                 * @param req AddInstancesRequest
                 * @return AddInstancesOutcome
                 */
                AddInstancesOutcome AddInstances(const Model::AddInstancesRequest &request);
                void AddInstancesAsync(const Model::AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddInstancesOutcomeCallable AddInstancesCallable(const Model::AddInstancesRequest& request);

                /**
                 *This API is used to create a cluster.
                 * @param req CreateClustersRequest
                 * @return CreateClustersOutcome
                 */
                CreateClustersOutcome CreateClusters(const Model::CreateClustersRequest &request);
                void CreateClustersAsync(const Model::CreateClustersRequest& request, const CreateClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClustersOutcomeCallable CreateClustersCallable(const Model::CreateClustersRequest& request);

                /**
                 *This API is used to query database management accounts.
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *This API is used to get the backup configuration information of the specified cluster, including the full backup time range and backup file retention period.
                 * @param req DescribeBackupConfigRequest
                 * @return DescribeBackupConfigOutcome
                 */
                DescribeBackupConfigOutcome DescribeBackupConfig(const Model::DescribeBackupConfigRequest &request);
                void DescribeBackupConfigAsync(const Model::DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupConfigOutcomeCallable DescribeBackupConfigCallable(const Model::DescribeBackupConfigRequest& request);

                /**
                 *This API is used to query the list of backup files.
                 * @param req DescribeBackupListRequest
                 * @return DescribeBackupListOutcome
                 */
                DescribeBackupListOutcome DescribeBackupList(const Model::DescribeBackupListRequest &request);
                void DescribeBackupListAsync(const Model::DescribeBackupListRequest& request, const DescribeBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupListOutcomeCallable DescribeBackupListCallable(const Model::DescribeBackupListRequest& request);

                /**
                 *This API is used to display cluster details.
                 * @param req DescribeClusterDetailRequest
                 * @return DescribeClusterDetailOutcome
                 */
                DescribeClusterDetailOutcome DescribeClusterDetail(const Model::DescribeClusterDetailRequest &request);
                void DescribeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterDetailOutcomeCallable DescribeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request);

                /**
                 *This API is used to query instance groups.
                 * @param req DescribeClusterInstanceGrpsRequest
                 * @return DescribeClusterInstanceGrpsOutcome
                 */
                DescribeClusterInstanceGrpsOutcome DescribeClusterInstanceGrps(const Model::DescribeClusterInstanceGrpsRequest &request);
                void DescribeClusterInstanceGrpsAsync(const Model::DescribeClusterInstanceGrpsRequest& request, const DescribeClusterInstanceGrpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstanceGrpsOutcomeCallable DescribeClusterInstanceGrpsCallable(const Model::DescribeClusterInstanceGrpsRequest& request);

                /**
                 *This API is used to the list of clusters.
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *This API is used to query the security group information of an instance.
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *This API is used to query instance details.
                 * @param req DescribeInstanceDetailRequest
                 * @return DescribeInstanceDetailOutcome
                 */
                DescribeInstanceDetailOutcome DescribeInstanceDetail(const Model::DescribeInstanceDetailRequest &request);
                void DescribeInstanceDetailAsync(const Model::DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDetailOutcomeCallable DescribeInstanceDetailCallable(const Model::DescribeInstanceDetailRequest& request);

                /**
                 *This API is used to query instance specifications.
                 * @param req DescribeInstanceSpecsRequest
                 * @return DescribeInstanceSpecsOutcome
                 */
                DescribeInstanceSpecsOutcome DescribeInstanceSpecs(const Model::DescribeInstanceSpecsRequest &request);
                void DescribeInstanceSpecsAsync(const Model::DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceSpecsOutcomeCallable DescribeInstanceSpecsCallable(const Model::DescribeInstanceSpecsRequest& request);

                /**
                 *This API is used to query the list of instances.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to query the instance maintenance window.
                 * @param req DescribeMaintainPeriodRequest
                 * @return DescribeMaintainPeriodOutcome
                 */
                DescribeMaintainPeriodOutcome DescribeMaintainPeriod(const Model::DescribeMaintainPeriodRequest &request);
                void DescribeMaintainPeriodAsync(const Model::DescribeMaintainPeriodRequest& request, const DescribeMaintainPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintainPeriodOutcomeCallable DescribeMaintainPeriodCallable(const Model::DescribeMaintainPeriodRequest& request);

                /**
                 *This API is used to query the security group information of a project.
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *This API is used to query the list of resources by billing order ID.
                 * @param req DescribeResourcesByDealNameRequest
                 * @return DescribeResourcesByDealNameOutcome
                 */
                DescribeResourcesByDealNameOutcome DescribeResourcesByDealName(const Model::DescribeResourcesByDealNameRequest &request);
                void DescribeResourcesByDealNameAsync(const Model::DescribeResourcesByDealNameRequest& request, const DescribeResourcesByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesByDealNameOutcomeCallable DescribeResourcesByDealNameCallable(const Model::DescribeResourcesByDealNameRequest& request);

                /**
                 *This API is used to query the valid rollback time range for the specified cluster.
                 * @param req DescribeRollbackTimeRangeRequest
                 * @return DescribeRollbackTimeRangeOutcome
                 */
                DescribeRollbackTimeRangeOutcome DescribeRollbackTimeRange(const Model::DescribeRollbackTimeRangeRequest &request);
                void DescribeRollbackTimeRangeAsync(const Model::DescribeRollbackTimeRangeRequest& request, const DescribeRollbackTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTimeRangeOutcomeCallable DescribeRollbackTimeRangeCallable(const Model::DescribeRollbackTimeRangeRequest& request);

                /**
                 *This API is used to query whether rollback is possible based on the specified time and cluster.
                 * @param req DescribeRollbackTimeValidityRequest
                 * @return DescribeRollbackTimeValidityOutcome
                 */
                DescribeRollbackTimeValidityOutcome DescribeRollbackTimeValidity(const Model::DescribeRollbackTimeValidityRequest &request);
                void DescribeRollbackTimeValidityAsync(const Model::DescribeRollbackTimeValidityRequest& request, const DescribeRollbackTimeValidityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTimeValidityOutcomeCallable DescribeRollbackTimeValidityCallable(const Model::DescribeRollbackTimeValidityRequest& request);

                /**
                 *This API is used to isolate a cluster.
                 * @param req IsolateClusterRequest
                 * @return IsolateClusterOutcome
                 */
                IsolateClusterOutcome IsolateCluster(const Model::IsolateClusterRequest &request);
                void IsolateClusterAsync(const Model::IsolateClusterRequest& request, const IsolateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateClusterOutcomeCallable IsolateClusterCallable(const Model::IsolateClusterRequest& request);

                /**
                 *This API is used to isolate an instance.
                 * @param req IsolateInstanceRequest
                 * @return IsolateInstanceOutcome
                 */
                IsolateInstanceOutcome IsolateInstance(const Model::IsolateInstanceRequest &request);
                void IsolateInstanceAsync(const Model::IsolateInstanceRequest& request, const IsolateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateInstanceOutcomeCallable IsolateInstanceCallable(const Model::IsolateInstanceRequest& request);

                /**
                 *This API is used to modify the backup configuration of the specified cluster.
                 * @param req ModifyBackupConfigRequest
                 * @return ModifyBackupConfigOutcome
                 */
                ModifyBackupConfigOutcome ModifyBackupConfig(const Model::ModifyBackupConfigRequest &request);
                void ModifyBackupConfigAsync(const Model::ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupConfigOutcomeCallable ModifyBackupConfigCallable(const Model::ModifyBackupConfigRequest& request);

                /**
                 *This API is used to modify the parameters of a cluster.
                 * @param req ModifyClusterParamRequest
                 * @return ModifyClusterParamOutcome
                 */
                ModifyClusterParamOutcome ModifyClusterParam(const Model::ModifyClusterParamRequest &request);
                void ModifyClusterParamAsync(const Model::ModifyClusterParamRequest& request, const ModifyClusterParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterParamOutcomeCallable ModifyClusterParamCallable(const Model::ModifyClusterParamRequest& request);

                /**
                 *This API is used to modify the security groups bound to an instance.
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *This API is used to modify the maintenance time configuration.
                 * @param req ModifyMaintainPeriodConfigRequest
                 * @return ModifyMaintainPeriodConfigOutcome
                 */
                ModifyMaintainPeriodConfigOutcome ModifyMaintainPeriodConfig(const Model::ModifyMaintainPeriodConfigRequest &request);
                void ModifyMaintainPeriodConfigAsync(const Model::ModifyMaintainPeriodConfigRequest& request, const ModifyMaintainPeriodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaintainPeriodConfigOutcomeCallable ModifyMaintainPeriodConfigCallable(const Model::ModifyMaintainPeriodConfigRequest& request);

                /**
                 *This API is used to deactivate a cluster.
                 * @param req OfflineClusterRequest
                 * @return OfflineClusterOutcome
                 */
                OfflineClusterOutcome OfflineCluster(const Model::OfflineClusterRequest &request);
                void OfflineClusterAsync(const Model::OfflineClusterRequest& request, const OfflineClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineClusterOutcomeCallable OfflineClusterCallable(const Model::OfflineClusterRequest& request);

                /**
                 *This API is used to deactivate an instance.
                 * @param req OfflineInstanceRequest
                 * @return OfflineInstanceOutcome
                 */
                OfflineInstanceOutcome OfflineInstance(const Model::OfflineInstanceRequest &request);
                void OfflineInstanceAsync(const Model::OfflineInstanceRequest& request, const OfflineInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineInstanceOutcomeCallable OfflineInstanceCallable(const Model::OfflineInstanceRequest& request);

                /**
                 *This API is used to pause a serverless cluster.
                 * @param req PauseServerlessRequest
                 * @return PauseServerlessOutcome
                 */
                PauseServerlessOutcome PauseServerless(const Model::PauseServerlessRequest &request);
                void PauseServerlessAsync(const Model::PauseServerlessRequest& request, const PauseServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseServerlessOutcomeCallable PauseServerlessCallable(const Model::PauseServerlessRequest& request);

                /**
                 *This API is used to resume a serverless cluster.
                 * @param req ResumeServerlessRequest
                 * @return ResumeServerlessOutcome
                 */
                ResumeServerlessOutcome ResumeServerless(const Model::ResumeServerlessRequest &request);
                void ResumeServerlessAsync(const Model::ResumeServerlessRequest& request, const ResumeServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeServerlessOutcomeCallable ResumeServerlessCallable(const Model::ResumeServerlessRequest& request);

                /**
                 *This API is used to set auto-renewal for an instance.
                 * @param req SetRenewFlagRequest
                 * @return SetRenewFlagOutcome
                 */
                SetRenewFlagOutcome SetRenewFlag(const Model::SetRenewFlagRequest &request);
                void SetRenewFlagAsync(const Model::SetRenewFlagRequest& request, const SetRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetRenewFlagOutcomeCallable SetRenewFlagCallable(const Model::SetRenewFlagRequest& request);

                /**
                 *This API is used to upgrade an instance.
                 * @param req UpgradeInstanceRequest
                 * @return UpgradeInstanceOutcome
                 */
                UpgradeInstanceOutcome UpgradeInstance(const Model::UpgradeInstanceRequest &request);
                void UpgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceOutcomeCallable UpgradeInstanceCallable(const Model::UpgradeInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_CYNOSDBCLIENT_H_
