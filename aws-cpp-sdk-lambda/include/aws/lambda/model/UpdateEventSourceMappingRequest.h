/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /*
  */
  class AWS_LAMBDA_API UpdateEventSourceMappingRequest : public LambdaRequest
  {
  public:
    UpdateEventSourceMappingRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The event source mapping identifier.</p>
    */
    inline const Aws::String& GetUUID() const{ return m_uUID; }
    /*
     <p>The event source mapping identifier.</p>
    */
    inline void SetUUID(const Aws::String& value) { m_uUID = value; }

    /*
     <p>The event source mapping identifier.</p>
    */
    inline void SetUUID(const char* value) { m_uUID.assign(value); }

    /*
     <p>The event source mapping identifier.</p>
    */
    inline UpdateEventSourceMappingRequest&  WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /*
     <p>The event source mapping identifier.</p>
    */
    inline UpdateEventSourceMappingRequest& WithUUID(const char* value) { SetUUID(value); return *this;}

    /*
     <p>The Lambda function to which you want the stream records sent.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    /*
     <p>The Lambda function to which you want the stream records sent.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /*
     <p>The Lambda function to which you want the stream records sent.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /*
     <p>The Lambda function to which you want the stream records sent.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline UpdateEventSourceMappingRequest&  WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /*
     <p>The Lambda function to which you want the stream records sent.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline UpdateEventSourceMappingRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /*
     <p>Specifies whether AWS Lambda should actively poll the stream or not. If disabled, AWS Lambda will not poll the stream.</p>
    */
    inline bool GetEnabled() const{ return m_enabled; }
    /*
     <p>Specifies whether AWS Lambda should actively poll the stream or not. If disabled, AWS Lambda will not poll the stream.</p>
    */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /*
     <p>Specifies whether AWS Lambda should actively poll the stream or not. If disabled, AWS Lambda will not poll the stream.</p>
    */
    inline UpdateEventSourceMappingRequest&  WithEnabled(bool value) { SetEnabled(value); return *this;}

    /*
     <p>The maximum number of stream records that can be sent to your Lambda function for a single invocation.</p>
    */
    inline long GetBatchSize() const{ return m_batchSize; }
    /*
     <p>The maximum number of stream records that can be sent to your Lambda function for a single invocation.</p>
    */
    inline void SetBatchSize(long value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /*
     <p>The maximum number of stream records that can be sent to your Lambda function for a single invocation.</p>
    */
    inline UpdateEventSourceMappingRequest&  WithBatchSize(long value) { SetBatchSize(value); return *this;}

  private:
    Aws::String m_uUID;
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
    long m_batchSize;
    bool m_batchSizeHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws