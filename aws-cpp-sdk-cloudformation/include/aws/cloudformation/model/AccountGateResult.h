﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/AccountGateStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Structure that contains the results of the account gate function AWS
   * CloudFormation StackSets invokes, if present, before proceeding with stack set
   * operations in an account.</p> <p>Account gating enables you to specify a Lamdba
   * function for an account that encapsulates any requirements that must be met
   * before AWS CloudFormation StackSets proceeds with stack set operations in that
   * account. CloudFormation invokes the function each time stack set operations are
   * initiated for that account, and only proceeds if the function returns a success
   * code. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/AccountGateResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API AccountGateResult
  {
  public:
    AccountGateResult();
    AccountGateResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccountGateResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account passes any requirements for stack set operations to occur. AWS
     * CloudFormation proceeds with stack operations in the account. </p> </li> <li>
     * <p> <code>FAILED</code>: The account gate function has determined that the
     * account does not meet the requirements for stack set operations to occur. AWS
     * CloudFormation cancels the stack set operations in that account, and the stack
     * set operation status is set to FAILED.</p> </li> <li> <p> <code>SKIPPED</code>:
     * An account gate function has not been specified for the account, or the
     * AWSCloudFormationStackSetExecutionRole of the stack set adminstration account
     * lacks permissions to invoke the function. AWS CloudFormation proceeds with stack
     * set operations in the account. </p> </li> </ul>
     */
    inline const AccountGateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account passes any requirements for stack set operations to occur. AWS
     * CloudFormation proceeds with stack operations in the account. </p> </li> <li>
     * <p> <code>FAILED</code>: The account gate function has determined that the
     * account does not meet the requirements for stack set operations to occur. AWS
     * CloudFormation cancels the stack set operations in that account, and the stack
     * set operation status is set to FAILED.</p> </li> <li> <p> <code>SKIPPED</code>:
     * An account gate function has not been specified for the account, or the
     * AWSCloudFormationStackSetExecutionRole of the stack set adminstration account
     * lacks permissions to invoke the function. AWS CloudFormation proceeds with stack
     * set operations in the account. </p> </li> </ul>
     */
    inline void SetStatus(const AccountGateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account passes any requirements for stack set operations to occur. AWS
     * CloudFormation proceeds with stack operations in the account. </p> </li> <li>
     * <p> <code>FAILED</code>: The account gate function has determined that the
     * account does not meet the requirements for stack set operations to occur. AWS
     * CloudFormation cancels the stack set operations in that account, and the stack
     * set operation status is set to FAILED.</p> </li> <li> <p> <code>SKIPPED</code>:
     * An account gate function has not been specified for the account, or the
     * AWSCloudFormationStackSetExecutionRole of the stack set adminstration account
     * lacks permissions to invoke the function. AWS CloudFormation proceeds with stack
     * set operations in the account. </p> </li> </ul>
     */
    inline void SetStatus(AccountGateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account passes any requirements for stack set operations to occur. AWS
     * CloudFormation proceeds with stack operations in the account. </p> </li> <li>
     * <p> <code>FAILED</code>: The account gate function has determined that the
     * account does not meet the requirements for stack set operations to occur. AWS
     * CloudFormation cancels the stack set operations in that account, and the stack
     * set operation status is set to FAILED.</p> </li> <li> <p> <code>SKIPPED</code>:
     * An account gate function has not been specified for the account, or the
     * AWSCloudFormationStackSetExecutionRole of the stack set adminstration account
     * lacks permissions to invoke the function. AWS CloudFormation proceeds with stack
     * set operations in the account. </p> </li> </ul>
     */
    inline AccountGateResult& WithStatus(const AccountGateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account passes any requirements for stack set operations to occur. AWS
     * CloudFormation proceeds with stack operations in the account. </p> </li> <li>
     * <p> <code>FAILED</code>: The account gate function has determined that the
     * account does not meet the requirements for stack set operations to occur. AWS
     * CloudFormation cancels the stack set operations in that account, and the stack
     * set operation status is set to FAILED.</p> </li> <li> <p> <code>SKIPPED</code>:
     * An account gate function has not been specified for the account, or the
     * AWSCloudFormationStackSetExecutionRole of the stack set adminstration account
     * lacks permissions to invoke the function. AWS CloudFormation proceeds with stack
     * set operations in the account. </p> </li> </ul>
     */
    inline AccountGateResult& WithStatus(AccountGateStatus&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The reason for the account gate status assigned to this account.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the account gate status assigned to this account.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the account gate status assigned to this account.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the account gate status assigned to this account.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for the account gate status assigned to this account.</p>
     */
    inline AccountGateResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the account gate status assigned to this account.</p>
     */
    inline AccountGateResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the account gate status assigned to this account.</p>
     */
    inline AccountGateResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:
    AccountGateStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
